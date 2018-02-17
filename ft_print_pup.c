/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:23:22 by lprior            #+#    #+#             */
/*   Updated: 2018/02/16 19:02:16 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_pointer(t_flags *tools, va_list ap)
{
   unsigned long long int address;
   char                   *display;

    tools->width -= 2;
    tools->width -= tools->len;
    address = va_arg(ap, unsigned long long int);
    display = ft_ptoa(address, tools);
    tools->len = ft_strlen(display);
    tools->width -= tools->len;
    while (tools->width-- > 0 && tools->negative == 0)
        ft_putchar(' ');
    write(1, "0x", 2);
    ft_putstr(display);
    while (tools->width-- >= 0 && tools->negative == 1)
        ft_putchar(' ');
    free(display);
}

void ft_pui2(t_flags *tools, unsigned long long int num, int dis, char *dt_hold)
{
    if ((tools->prec == -100 || tools->prec == -1) && num == 0 && 
        tools->hashtag == 1 && (tools->brand == 'o' || tools->brand == 'O'))
        ft_putchar('0');
    if (tools->hashtag == 1 && tools->width <= 0)
        ft_print_address(tools, num);
    else if (tools->hashtag == 1 && tools->zeros == 1)
        ft_print_address(tools, num);
    if (tools->zeros == 1)
        while (tools->width-- > 0)
            ft_putchar('0');
    else if (tools->negative == 0)
        while (tools->width-- > 0)
            ft_putchar(' ');   
    if (tools->hashtag == 1)
        ft_print_address(tools, num);
    while (tools->prec-- > 0 && dis != 0)
        ft_putchar('0');
    if (!(dis == 1 && num == 0))
        ft_putstr(dt_hold);
    while (tools->width-- > 0)
        ft_putchar(' ');
    free(dt_hold);
}

void ft_print_unsigned_int(t_flags *tools, va_list ap)
{
    unsigned long long int number;
    int dis;
    char *dt_holder;

    if ((number = ft_sort_unsigned_args(tools, ap)) == 0)
        number = ft_check_unsigned_int(tools, ap);
    dis = ((tools->prec > -1 || tools->prec == -100)) ? 1 : 0;
    if (number <= 9223372036854775807 && (tools->brand == 'o' 
        || tools->brand == 'O'))
        dt_holder = ft_otoa(number);
    else if (number <= 4294967295 && (tools->brand == 'u' 
            || tools->brand == 'U'))
        dt_holder = ft_uitoa(number);
    else if (tools->brand == 'x' || tools->brand == 'X')
        dt_holder = ft_htoa(number, tools);
    else if (number > 4294967295 && (tools->brand == 'u' 
            || tools->brand == 'U'))
        dt_holder = ft_ullitoa(number);
    else
        dt_holder = (NULL);
    tools->len = ft_strlen(dt_holder);
    ft_parse_unsigned_int_tools(tools, number);
    ft_pui2(tools, number, dis, dt_holder);
}

void ft_print_percent(t_flags *tools)
{
    tools->width -= 1;
    while (tools->zeros == 1 && tools->width-- > 0)
        ft_putchar('0');
    while (tools->width-- > 0 && tools->negative == 0)
        ft_putchar(' ');
    ft_putchar('%');
    while (tools->negative == 1 && tools->width-- >= 0)
        ft_putchar(' ');
}