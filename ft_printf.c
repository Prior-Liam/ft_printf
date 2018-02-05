/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:30:54 by lprior            #+#    #+#             */
/*   Updated: 2018/02/05 14:23:46 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_build_tools(t_flags *tools)
{
	tools->positive = 0;
	tools->space = 0;
	tools->hash = 0;
	tools->zeros = 0;
	tools->negative = 0;
	tools->brand = 0;
	tools->width = 0;
	tools->prec = -1;
	tools->arg = 0;
	tools->ret = 0;
	tools->len = 0;
}

int		ft_parse_format_print(char *format, va_list ap, t_flags *tools)
{
	int i;
	int start;

	i = 0;
	start = 0;
	// printf("IM HERE3\n");
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_build_tools(tools);
			ft_print(start, i, format);
			ft_parse_flags(format, &i, tools, ap);
			if (tools->brand != -1)
				i++;
			start = i;
		}
		if (format[i] != '\0')
			i++;
	}
	ft_print(start, i, format);
	return (i - start);
}

int	ft_printf(const char *format, ...)
{
	int			ret;
	t_flags		tools;
	va_list		ap;

	// printf("IM HERE1\n");
	va_start(ap, format);
	// printf("IM HERE2\n");
	if (!(ret = (ft_parse_format_print(((char *)format), ap, &tools))))
		return (0);
	// printf("IM HEREFINISH\n");
	return (0);
}

/*
**char	1 byte	-128 to 127 or 0 to 255
**unsigned char	1 byte	0 to 255
**signed char	1 byte	-128 to 127
**int	2 or 4 bytes	-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
**unsigned int	2 or 4 bytes	0 to 65,535 or 0 to 4,294,967,295
**short	2 bytes	-32,768 to 32,767
**unsigned short	2 bytes	0 to 65,535
**long	4 bytes	-2,147,483,648 to 2,147,483,647
**unsigned long	4 bytes	0 to 4,294,967,295
**float	4 byte	1.2E-38 to 3.4E+38	6 decimal places
**double	8 byte	2.3E-308 to 1.7E+308	15 decimal places
**long double	10 byte	3.4E-4932 to 1.1E+4932	19 decimal places
**unsigned long long 18,446,744,073,709,551,615.
**\a	audible alert
**\b	backspace
**\f	form feed
**\n	newline, or linefeed
**\r	carriage return
**\t	tab
**\v	vertical tab
**\\	backslash
**
**
**%d %i     Decimal signed integer.
**%o      Octal integer.
**%x %X     Hex integer.
**%u      Unsigned integer.
**%c      Character.
**%s      String. See below.
**%f      double
**%e %E     double.
**%g %G     double.
**%p        pointer.
**%n      Number of characters written by this printf.
**No argument expected.  
**% %%. No argument expected.
*/

/*
** Length code chart:
** 0 = unset
** 1 = h (short int/unsigned short int)
** 2 = hh (signed char/unsigned char)
** 3 = l (long int/unsigned long int)
** 4 = ll (long long int/unsigned long long int)
** 5 = j (intmax_t/uintmax_t)
** 6 = z (size_t/ssize_t)
**
**||The most important is a way to specify
**||how many digits appear after the decimal point.
**||This number is called the precision.
**
*/
