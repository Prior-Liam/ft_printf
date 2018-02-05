/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:19:26 by lprior	           #+#    #+#             */
/*   Updated: 2018/02/05 14:22:44 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct	s_flags
{
	bool	positive;
	bool	negative;
	bool	zeros;
	bool	space;
	bool	hash;
	char	brand;
	int		width;
	int		prec;
	int		arg;
	int		ret;
	int		len;
}				t_flags;

int		ft_printf(const char *format, ...);
int		ft_parse_format_print(char *format, va_list ap, t_flags *tools);
void	ft_build_tools(t_flags *tools);
void	ft_print(int start, int end, char *format);
void	ft_parse_flags(char *format, int *i,t_flags *tools, va_list ap);
void	ft_check_fwap(char *format, int *i, t_flags *tools);
void 	ft_check_args(char *format, int *i, t_flags *tools);
void    ft_check_width(char *format, int *i, t_flags *tools);
void    ft_check_prec(char *format, int *i, t_flags *tools);
void    ft_check_flags(char *format, int *i, t_flags *tools);
void 	ft_parse_flags2(char *format, int *i, t_flags *tools);
void 	ft_check_type(char format, t_flags *tools, va_list ap);
void	ft_print_string(t_flags *tools, va_list ap);
void	ft_print_wchar(t_flags *tools, va_list ap);
void	ft_print_wchar_str(t_flags *tools, va_list ap);
void	ft_print_pointer(t_flags *tools, va_list ap);
void	ft_print_int(t_flags *tools, va_list ap);
void	ft_print_unsigned_int(t_flags *tools, va_list ap);
void	ft_print_char(t_flags *tools, va_list ap);
void	ft_print_precision(t_flags *tools, va_list ap);
void	ft_print_binary(t_flags *tools, va_list ap);
void 	ft_check_type2(char format, t_flags *tools, va_list ap);
void    ft_parse_char_tool(t_flags *tools);
void	ft_parse_int_tools(t_flags *tools, long int number);
void	ft_parse_int2_tools(t_flags *tools, long int number);

#endif
