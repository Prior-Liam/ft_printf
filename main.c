/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprior <lprior@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 13:34:20 by lprior            #+#    #+#             */
/*   Updated: 2018/02/16 19:04:37 by lprior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// i still need to wchar nd  and test h and hh z and j!!!!!!!!!!!!!!!!!!!!!!!
int main()
{
	    char *swag = "swag";
    // printf("string 0 padding = [%05s]\n", "swag");
    // printf("%.2s\n", "paulina")
    // printf("%c\n", 'c');
    // ft_printf("[%d]\n", 'a');
    // printf("[%d]\n", 'a');
//	printf("[%2.1s]\n", "hi");
//	ft_printf("[%2.1s]\n", "hi");
    // ft_printf("[%5c]", 'c');
    // printf("only one negative right = [%05d]\n", -97);
    // printf("only one negative left = [%-5d]\n", 97);
    // printf("positive right negative = [%+05d]\n", -97);
    // printf("negative right negative = [%-5d]\n", -97);
    // printf("negative right positive = [%-5d]\n", +97);
    // printf("positive right positive = [%+05d]\n", +97);
    // printf("positive negative then right negative = [%+-5d]\n", -97);
    // printf("negative positive then right negative = [%-+5d]\n", -97);
    // printf("negative positive then right positive = [%-+5d]\n", 97);
    // printf("positive negative then right positive = [%+-5d]\n", 97);
    // printf("space negative zero width 2 right normal = [% -02d]\n", 97);
    // printf("negative space right normal = [%- d]\n", 97);
    // printf("space negative right normal = [% -d]\n", 97);
    // printf("space negative right normal = [% +d]\n", 97);
    // printf("negative space width right normal = [%- 5d]\n", 97);
    // printf("space negative wdith right normal = [% -5d]\n", 97);
    // ft_printf("[%d]", 'a');
    // ft_printf("[%+5.3d]\n", -10);
    // printf("[%+5.3d]\n", -10);
    // ft_printf("[%.3d]\n", -10);
    // printf("[%.3d]\n", -10);
    // ft_printf("[%D]\n", -10);
    // printf("[%D]\n", -10);
    // printf("%+5d\n", 97);
    // printf("[% 5d]\n", 10);
    // ft_printf("[% 5d]\n", 10);
    // printf("[%05i]\n", 10);
    // ft_printf("[%05d]\n", 10);


	//---------------------- d and i -------------------------------
	printf("' ':				[% d]\n", -12);
	ft_printf("' ':				[% d]\n", -12);
	printf("10.6:				[% 10.6d]\n", 12);
	ft_printf("10.6:				[% 10.6d]\n", 12);
	printf("0 10.6:				[%0 10.6d]\n", 12);
	ft_printf("0 10.6:				[%0 10.6d]\n", 12);
	printf("-+10.5:				[%-+10.5d]\n", -12);
	ft_printf("-+10.5:				[%-+10.5d]\n", -12);
	printf("zero:				[%0i]\n", 12);
	ft_printf("zero:				[%0i]\n", 12);
	printf("width 10:			[%10i]\n", 12);
	ft_printf("width 10:			[%10i]\n", 12);
	ft_printf("minus and width 10:		[%-10i]\n", 12);
	printf("minus and width 10:		[%-10i]\n", 12);
	ft_printf("precyzja 1:			[%.1i]\n", 12);
	printf("precyzja 1:			[%.1i]\n", 12);
	ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	printf("width 10 prec 1:		[%10.1i]\n", 12);
	ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
	printf("width 10 prec 6:		[%10.6i]\n", 12);
	ft_printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	ft_printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	printf("0 width 4 prec 3:		[%04.3d]\n", -1);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 25);
	ft_printf("width 10 prec 5:		[%+10.5d]\n", -25);
	printf("width 10 prec 5:		[%+10.5d]\n", -25);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	ft_printf("prec 10:			[%.10d]\n", -12);
	printf("prec 10:			[%.10d]\n", -12);
	ft_printf("width 5 prec .:			[%5.d]\n", 0);
	printf("width 5 prec .:			[%5.d]\n", 0);
	ft_printf("42:				[%d]\n", 42);
	printf("42:				[%d]\n", 42);
	ft_printf("m: 0 width 3:			[% 04d]\n", 1);
	printf("t: 0 width 3:			[% 04d]\n", 1);
	ft_printf("width 4 prec.:			[%4.d]\n", 0);
	printf("width 4 prec.:			[%4.d]\n", 0);
	ft_printf("m: 0 width 10:			[%010d]\n", 0);
	printf("t: 0 width 10:			[%010d]\n", 0);
	ft_printf("0 width 5:			[%05d]\n", -42);
	printf("0 width 5:			[%05d]\n", -42);
	ft_printf("- width 5:			[%-5d]\n", -42);
	printf("- width 5:			[%-5d]\n", -42);
	ft_printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	printf("+ width 10 prec 5:		[%+10.5d]\n", 4242);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	printf("0 width 3 prec 2:		[%03.2d]\n", 0);
	ft_printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	printf("0 width 3 prec 2:		[%03.2d]\n", -1);
	ft_printf("space:				[% d]\n", 42);
	printf("space:				[% d]\n", 42);
	ft_printf("plus:				[%+d]\n", 0);
	printf("plus:				[%+d]\n", 0);
	ft_printf("width 10:			[%10d]\n", 0);
	printf("width 10:			[%10d]\n", 0);
	ft_printf("prec 5:				[%.5d]\n", 0);
	printf("prec 5:				[%.5d]\n", 0);
	ft_printf("' ' width 5:			[% 5d]\n", 4);
	printf("' ' width 5:			[% 5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 4);
	printf("' ' prec 5:			[%.5d]\n", 4);
	ft_printf("' ' prec 5:			[%.5d]\n", 0);
	printf("' ' prec 5:			[%.5d]\n", 0);
	ft_printf("0+ width 5:			[%0+5d]\n", -1);
	printf("0+ width 5:			[%0+5d]\n", -1);
	ft_printf("prec 0:				[%.0d]\n", -1);
	printf("prec 0:				[%.0d]\n", -1);
	ft_printf("++ width 10:			[%++10d]\n", -42);
	printf("++ width 10:			[%++10d]\n", -42);
	ft_printf("width 10:			[%10d]\n", -42);
	printf("width 10:			[%10d]\n", -42);
	ft_printf("+0 width 10:			[%+010d]\n", +42);
	printf("+0 width 10:			[%+010d]\n", +42);
	ft_printf("+0 width 4:			[%+04d]\n", 42);
    printf("+0 width 4:			[%+04d]\n", 42);
    ft_printf("[%ld]\n", 9223372036854775807);
	printf("[%ld]\n",  9223372036854775807);
	ft_printf("%.1d\n", 10);
	printf("%.1d\n", 10);

		printf("' ':				[% i]\n", -12);
	ft_printf("' ':				[% i]\n", -12);
	printf("10.6:				[% 10.6i]\n", 12);
	ft_printf("10.6:				[% 10.6i]\n", 12);
	printf("0 10.6:				[%0 10.6i]\n", 12);
	ft_printf("0 10.6:				[%0 10.6i]\n", 12);
	printf("-+10.5:				[%-+10.5i]\n", -12);
	ft_printf("-+10.5:				[%-+10.5i]\n", -12);
	printf("zero:				[%0i]\n", 12);
	ft_printf("zero:				[%0i]\n", 12);
	printf("width 10:			[%10i]\n", 12);
	ft_printf("width 10:			[%10i]\n", 12);
	ft_printf("minus and width 10:		[%-10i]\n", 12);
	printf("minus and width 10:		[%-10i]\n", 12);
	ft_printf("precyzja 1:			[%.1i]\n", 12);
	printf("precyzja 1:			[%.1i]\n", 12);
	ft_printf("width 10 prec 1:		[%10.1i]\n", 12);
	printf("width 10 prec 1:		[%10.1i]\n", 12);
	ft_printf("width 10 prec 6:		[%10.6i]\n", 12);
	printf("width 10 prec 6:		[%10.6i]\n", 12);
	ft_printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	printf("- width 10 prec 6:		[%-10.6i]\n", 12);
	ft_printf("0 width 4 prec 3:		[%04.3i]\n", -1);
	printf("0 width 4 prec 3:		[%04.3i]\n", -1);
	ft_printf("+ width 10 prec 5:		[%+10.5i]\n", 25);
	printf("+ width 10 prec 5:		[%+10.5i]\n", 25);
	ft_printf("width 10 prec 5:		[%+10.5i]\n", -25);
	printf("width 10 prec 5:		[%+10.5i]\n", -25);
	ft_printf("0 width 3 prec 2:		[%03.2i]\n", -1);
	printf("0 width 3 prec 2:		[%03.2i]\n", -1);
	ft_printf("prec 10:			[%.10i]\n", -12);
	printf("prec 10:			[%.10i]\n", -12);
	ft_printf("width 5 prec .:			[%5.i]\n", 0);
	printf("width 5 prec .:			[%5.i]\n", 0);
	ft_printf("42:				[%i]\n", 42);
	printf("42:				[%i]\n", 42);
	ft_printf("m: 0 width 3:			[% 04i]\n", 1);
	printf("t: 0 width 3:			[% 04i]\n", 1);
	ft_printf("width 4 prec.:			[%4.i]\n", 0);
	printf("width 4 prec.:			[%4.i]\n", 0);
	ft_printf("m: 0 width 10:			[%010i]\n", 0);
	printf("t: 0 width 10:			[%010i]\n", 0);
	ft_printf("0 width 5:			[%05i]\n", -42);
	printf("0 width 5:			[%05i]\n", -42);
	ft_printf("- width 5:			[%-5i]\n", -42);
	printf("- width 5:			[%-5i]\n", -42);
	ft_printf("+ width 10 prec 5:		[%+10.5i]\n", 4242);
	printf("+ width 10 prec 5:		[%+10.5i]\n", 4242);
	ft_printf("0 width 3 prec 2:		[%03.2i]\n", 0);
	printf("0 width 3 prec 2:		[%03.2i]\n", 0);
	ft_printf("0 width 3 prec 2:		[%03.2i]\n", -1);
	printf("0 width 3 prec 2:		[%03.2i]\n", -1);
	ft_printf("space:				[% i]\n", 42);
	printf("space:				[% i]\n", 42);
	ft_printf("plus:				[%+i]\n", 0);
	printf("plus:				[%+i]\n", 0);
	ft_printf("width 10:			[%10i]\n", 0);
	printf("width 10:			[%10i]\n", 0);
	ft_printf("prec 5:				[%.5i]\n", 0);
	printf("prec 5:				[%.5i]\n", 0);
	ft_printf("' ' width 5:			[% 5i]\n", 4);
	printf("' ' width 5:			[% 5i]\n", 4);
	ft_printf("' ' prec 5:			[%.5i]\n", 4);
	printf("' ' prec 5:			[%.5i]\n", 4);
	ft_printf("' ' prec 5:			[%.5i]\n", 0);
	printf("' ' prec 5:			[%.5i]\n", 0);
	ft_printf("0+ width 5:			[%0+5i]\n", -1);
	printf("0+ width 5:			[%0+5i]\n", -1);
	ft_printf("prec 0:				[%.0i]\n", -1);
	printf("prec 0:				[%.0i]\n", -1);
	ft_printf("++ width 10:			[%++10i]\n", -42);
	printf("++ width 10:			[%++10i]\n", -42);
	ft_printf("width 10:			[%10i]\n", -42);
	printf("width 10:			[%10i]\n", -42);
	ft_printf("+0 width 10:			[%+010i]\n", +42);
	printf("+0 width 10:			[%+010i]\n", +42);
	ft_printf("+0 width 4:			[%+04i]\n", 42);
    printf("+0 width 4:			[%+04i]\n", 42);
    ft_printf("[%li]\n", 9223372036854775807);
	printf("[%li]\n",  9223372036854775807);
	ft_printf("%.1i\n", 10);
	printf("%.1i\n", 10);
//  //--------------------- s ----------------------------
	
	printf("width 10:			[%10s]\n", "Hello");
	ft_printf("width 10:			[%10s]\n", "Hello");
	printf("minus and width 10:		[%-10s]\n", "Hello");
	ft_printf("minus and width 10:		[%-10s]\n", "Hello");
	printf("precyzja 1:			[%.1s]\n", "Hello");
	ft_printf("precyzja 1:			[%.1s]\n", "Hello");
	printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	ft_printf("width 10 prec 1:		[%10.1s]\n", "Hello");
	printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	ft_printf("width 10 prec 6:		[%10.6s]\n", "Hello");
	printf("empty:				[%s]\n", "");
	ft_printf("empty:				[%s]\n", "");
	printf("null:				[%s]\n", NULL);
	ft_printf("null:				[%s]\n", NULL);
	printf("[%s]\n", "100% des gens qui parlent à Ly adorent Ly.");
	ft_printf("[%s]\n", "100% des gens qui parlent à Ly adorent Ly.");
	printf("width 5 prec . = [%5.s]\n", "supfag");
	ft_printf("width 5 prec . = [%5.s]\n", "supfag");

// -------------------------------- u, U------------------------------------
    printf("%lu\n", 4294967295);
    ft_printf("%lu\n", 4294967295);
    printf("%lu\n", 4294967296);
    ft_printf("%lu\n", 4294967296);
    printf("%lu\n", 9223372036854775807);
    ft_printf("%lu\n", 9223372036854775807);
    // printf("%llu\n", 9223372036854775808);
    // ft_printf("%llu\n", 9223372036854775808);
	// ft_printf("# prec .:			[%#.u]\n", 0);
	// printf("# prec .:			[%#.u]\n", 0);
	// ft_printf("# prec 0:			[%#.0u]\n", 0);
	// printf("# prec 0:			[%#.0u]\n", 0);
	ft_printf("prec .:				[%.u]\n", 0);
	printf("prec .:				[%.u]\n", 0);
	ft_printf("prec 0:				[%.0u]\n", 0);
	printf("prec 0:				[%.0u]\n", 0);

    ft_printf("[%05.2u]\n", 1);
    printf("[%05.2u]\n", 1);
    ft_printf("[%05.u]\n", 1);
    printf("[%05.u]\n", 1);
    ft_printf("[%05.1u]\n", 1);
    printf("[%05.1u]\n", 1);
    ft_printf("[%05.0u]\n", 1);
    printf("[%05.0u]\n", 1);
    ft_printf("%x\n", 21);
    printf("%x\n", 21);
    
    // printf("\n switch \n\n");



    // printf("%lu\n", 9223372036854775807);
    // ft_printf("%lu\n", 9223372036854775807);
    // printf("%llu\n", 18446744073709551615);
    // ft_printf("%llu\n", 18446744073709551615);

// ------------------------- x, X------------------------
   	printf("t: normal:			[%x]\n", 1244);
	ft_printf("m: normal:			[%x]\n", 1244);
	printf("zero:				[%0x]\n", 1244);
	ft_printf("zero:				[%0x]\n", 1244);
	printf("width 10:			[%10x]\n", 1244);
	ft_printf("width 10:			[%10x]\n", 1244);
	printf("minus and width 10:		[%-10x]\n", 1244);
	ft_printf("minus and width 10:		[%-10x]\n", 1244);
	printf("hash:				[%#x]\n", 1244);
	ft_printf("hash:				[%#x]\n", 1244);
	printf("precyzja 1:			[%.1x]\n", 1244);
	ft_printf("precyzja 1:			[%.1x]\n", 1244);
	printf("width 10 prec 6:		[%010.6x]\n", 1244);
    ft_printf("width 10 prec 6:		[%010.6x]\n", 1244);
	printf("# 0 width 10 prec 6:		[%#010.6x]\n", 1244);
    ft_printf("# 0 width 10 prec 6:		[%#010.6x]\n", 1244);
    printf("# width 10 prec 6:		[%#10.6x]\n", 1244);
    ft_printf("# width 10 prec 6:		[%#10.6x]\n", 1244);
    printf("# [%#x]\n", 1244);
    ft_printf("# [%#x]\n", 1244);
    printf("# and width 10 [%#10x]\n", 1244);
    ft_printf("# and width 10 [%#10x]\n", 1244);
    printf("# prec 10[%#.10x]\n", 1244);
    ft_printf("# prec 10[%#.10x]\n", 1244);
	printf("prec .:				[%.x]\n", 0);
	ft_printf("prec .:				[%.x]\n", 0);
	printf("lx:				[%lx]\n", 4294967296);
	ft_printf("lx:				[%lx]\n", 4294967296);
	printf("x:				[%x]\n", 0);
	ft_printf("x:				[%x]\n", 0);
	printf("X:				[%X]\n", 0);
	ft_printf("X:				[%X]\n", 0);
	printf("#x:				[%#x]\n", 0);
	ft_printf("#x:				[%#x]\n", 0);
	printf("#0 width 8:			[%#08x]\n", 42);
    ft_printf("#0 width 8:			[%#08x]\n", 42);
 	printf("#0 width 8:			[%#8x]\n", 42);
    ft_printf("#0 width 8:			[%#8x]\n", 42);   
	printf("# prec .:			[%#.x]\n", 0);
	ft_printf("# prec .:			[%#.x]\n", 0);
	printf("width 5 prec .:			[%5.x]\n", 0);
	ft_printf("width 5 prec .:			[%5.x]\n", 0);
	printf("width 5 prec 0:			[%5.0x]\n", 0);
	ft_printf("width 5 prec 0:			[%5.0x]\n", 0);
	ft_printf("# prec .:			[%#.x]\n", 0);
	printf("# prec .:			[%#.x]\n", 0);
	ft_printf("# prec 0:			[%#.0x]\n", 0);
	printf("# prec 0:			[%#.0x]\n", 0);
	ft_printf("prec .:				[%.x]\n", 0);
	printf("prec .:				[%.x]\n", 0);
	ft_printf("prec 0:				[%.0x]\n", 0);
	printf("prec 0:				[%.0x]\n", 0);





    printf("t: normal:			[%X]\n", 1244);
	ft_printf("m: normal:			[%X]\n", 1244);
	printf("zero:				[%0X]\n", 1244);
	ft_printf("zero:				[%0X]\n", 1244);
	printf("width 10:			[%10X]\n", 1244);
	ft_printf("width 10:			[%10X]\n", 1244);
	printf("minus and width 10:		[%-10X]\n", 1244);
	ft_printf("minus and width 10:		[%-10X]\n", 1244);
	printf("hash:				[%#X]\n", 1244);
	ft_printf("hash:				[%#X]\n", 1244);
	printf("precyzja 1:			[%.1X]\n", 1244);
	ft_printf("precyzja 1:			[%.1X]\n", 1244);
	printf("width 10 prec 6:		[%010.6X]\n", 1244);
    ft_printf("width 10 prec 6:		[%010.6X]\n", 1244);
	printf("# 0 width 10 prec 6:		[%#010.6X]\n", 1244);
    ft_printf("# 0 width 10 prec 6:		[%#010.6X]\n", 1244);
    printf("# width 10 prec 6:		[%#10.6X]\n", 1244);
    ft_printf("# width 10 prec 6:		[%#10.6X]\n", 1244);
    printf("# [%#X]\n", 1244);
    ft_printf("# [%#X]\n", 1244);
    printf("# and width 10 [%#10X]\n", 1244);
    ft_printf("# and width 10 [%#10X]\n", 1244);
    printf("# prec 10[%#.10X]\n", 1244);
    ft_printf("# prec 10[%#.10X]\n", 1244);
	printf("prec .:				[%.X]\n", 0);
	ft_printf("prec .:				[%.X]\n", 0);
	printf("lx:				[%lX]\n", 4294967296);
	ft_printf("lx:				[%lX]\n", 4294967296);
	printf("x:				[%X]\n", 0);
	ft_printf("x:				[%X]\n", 0);
	printf("X:				[%X]\n", 0);
	ft_printf("X:				[%X]\n", 0);
	printf("#x:				[%#X]\n", 0);
	ft_printf("#x:				[%#X]\n", 0);
	printf("#0 width 8:			[%#08X]\n", 42);
	ft_printf("#0 width 8:			[%#08X]\n", 42);
	printf("# prec .:			[%#.X]\n", 0);
	ft_printf("# prec .:			[%#.X]\n", 0);
	printf("width 5 prec .:			[%5.X]\n", 0);
	ft_printf("width 5 prec .:			[%5.X]\n", 0);
	printf("width 5 prec 0:			[%5.0X]\n", 0);
	ft_printf("width 5 prec 0:			[%5.0X]\n", 0);

// 	printf("[%2x]\n", 9);
// 	ft_printf("[%2x]\n", 9);
	// unsigned char swag = 'h';
    /////////////////////////////////////////////9223372036854775807
    // printf("%lo\n", 9223372036854775807);
    // printf("[%#05.o]\n[%#5.O]\n", 1, 1);
    // printf("[%#05.0x]\n[%#05.0X]\n", 110, 110);
    // printf("[%10.d]", 10);
	// printf("x = [%hx]\n X = [%hX]\n u = [%hu]\n o = [%ho]\n O = [%hO]\n", swag, swag, swag, swag, swag);
    
//--------------------------------o, O-----------------------------------
	// unsigned long long nb = 18446744073709551615;
	ft_printf("normal = [%o]\n", 100);
	printf("normal = [%o]\n", 100);
	ft_printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	printf("- width 10 prec 5:		[%-10.5o]\n", 25);
	ft_printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	printf("- width 5 prec 10:		[%-5.10o]\n", 25);
	//// ft_printf("hh:				[%hho]\n", 1234);
	//// printf("hh:				[%hho]\n", 1234);
	ft_printf("o:				[%o]\n", 0);
	printf("o:				[%o]\n", 0);
	ft_printf("# prec .:			[%#.o]\n", 0);
	printf("# prec .:			[%#.o]\n", 0);
	ft_printf("# prec 0:			[%#.0o]\n", 0);
	printf("# prec 0:			[%#.0o]\n", 0);
	ft_printf("prec .:				[%.o]\n", 0);
	printf("prec .:				[%.o]\n", 0);
	ft_printf("prec 0:				[%.0o]\n", 0);
	printf("prec 0:				[%.0o]\n", 0);
	ft_printf("l:				[%lo]\n", 9223372036854775807);
	printf("l:				[%lo]\n", 9223372036854775807);
	// ft_printf("l:				[%llo]\n", nb);
	// printf("l:				[%llo]\n", nb);
	// ft_printf("z:				[%zo]\n", 0);
	// printf("z:				[%zo]\n", 0);
	// ft_printf("z:				[%zo]\n", 18446744073709551615);
	// printf("z:				[%zo]\n", 18446744073709551615);
	// ft_printf("hh:				[%hhO]\n", 0);
	// printf("hh:				[%hhO]\n", 0);
	// ft_printf("hh:				[%hhO]\n", 65535);
	// printf("hh:				[%hhO]\n", 65535);













   // ------------------------------ p --------------------------
    
    // #!
    // . it handles a . but no numbers and when its just a dot it doesnt do anything to it!!!!
    // 0 padding!
    // ' '!

    printf("normal =        [%p]\n", swag);
    ft_printf("normal =        [%p]\n", swag);
    printf("10 width =      [%10p]\n", swag);
    ft_printf("10 width =      [%10p]\n", swag);
    printf(". =             [%.p]\n", swag);
    ft_printf(". =             [%.p]\n", swag);
    printf("width 20. =     [%20.p]\n", swag);
    ft_printf("width 20. =     [%20.p]\n", swag);
    printf("width -20 =     [%-20p]\n", swag);
	ft_printf("width -20 =     [%-20p]\n", swag);
	
	//-------------------------%%----------------------------
	//so it doesnt handle space!
	//doesnt handle #!
	//doesbnt handle orecision!
	//0 padding doesnt work with negative width!
	
	printf("normal =                 [%%]\n");
	ft_printf("normal =                 [%%]\n");
	printf("space =                  [% %]\n");
	ft_printf("space =                  [% %]\n");
	printf("# =                      [%#%]\n");
	ft_printf("# =                      [%#%]\n");
	printf("width 10 =               [%10%]\n");
	ft_printf("width 10 =               [%10%]\n");
	printf("width -10 =              [%-10%]\n");
	ft_printf("width -10 =              [%-10%]\n");
	printf("space width 10 =         [% 10%]\n");
	ft_printf("space width 10 =         [% 10%]\n");
	printf("space width -10 =        [% -10%]\n");
	ft_printf("space width -10 =        [% -10%]\n");
	printf("0 padding with width 10  [%010%]\n");
	ft_printf("0 padding with width 10  [%010%]\n");
	printf("0 padding with width -10 [%0-10%]\n");
	ft_printf("0 padding with width -10 [%0-10%]\n");
	printf("0 padding with width 10 and prec 5 =  [%010.5%]\n");
	ft_printf("0 padding with width 10 and prec 5 =  [%010.5%]\n");
	printf("0 padding with width -10 and prec 5 = [%0-10.5%]\n");
	ft_printf("0 padding with width -10 and prec 5 = [%0-10.5%]\n");
	printf("width 10 and prec 5 =    [%10.5%]\n");
	ft_printf("width 10 and prec 5 =    [%10.5%]\n");
	printf("width 5 and prec 10 =    [%5.10%]\n");
	ft_printf("width 5 and prec 10 =    [%5.10%]\n");
	printf("prec 5 =                 [%.5%]\n");
	ft_printf("prec 5 =                 [%.5%]\n");
	printf("prec . =                 [%.%]\n");
	ft_printf("prec . =                 [%.%]\n");
	printf("prec 0 =                 [%.0%]\n");
	ft_printf("prec 0 =                 [%.0%]\n");
	printf("width 0 prec 0 =         [%0.0%]\n");
	ft_printf("width 0 prec 0 =         [%0.0%]\n");
	printf("width 0 prec . =         [%0%]\n");
	ft_printf("width 0 prec . =         [%0%]\n");
	printf("lots of spaces inbetween negaative and width = [%-     5%]\n");
	ft_printf("lots of spaces inbetween negaative and width = [%-     5%]\n");
	printf("plus = [%+%]\n");
	ft_printf("plus = [%+%]\n");



	// ----------------------------D-----------------------------------
	
	printf("%D\n", 0);
	ft_printf("%D\n", 0);
	printf("good: %D\n", -1);
	ft_printf("better: %D\n", -1);
	printf("good: %D\n", 0);
	ft_printf("better: %D\n", 0);
	printf("good: %D\n", 111111111);
	ft_printf("better: %D\n", 1111111111);
	printf("good: %D\n", 782615051);
	ft_printf("better: %D\n", 782615051);
	printf("good: %D\n",  647469);
	ft_printf("better: %D\n", 647469);
	printf("good: %lD\n", -2147483648);
	ft_printf("better: %lD\n", -2147483648);
	printf("good: %D\n", 2147483647);
	ft_printf("better: %D\n", 2147483647);
	printf("%lD\n", 4294967295);
	ft_printf("%lD\n", 4294967295);
	
	
	//-----------------------multiple shit------------------------
//  char *swag = "swag";
	printf("[s%s][p%p][d%d][D%D][i%i][o%o][O%O][u%u][U%U][x%x][X%X][c%c]\n", "swag", swag, 100, 100, 100, 100, 100, 100, 100, 100, 100, 'a');
	ft_printf("[s%s][p%p][d%d][D%D][i%i][o%o][O%O][u%u][U%U][x%x][X%X][c%c]\n", "swag", swag, 100, 100, 100, 100, 100, 100, 100, 100, 100, 'a');
	printf("their	p = [%p] d = [%d] D = [%D] i = [%i] o = [%o] O = [%O] u = [%u] U = [%U] x = [%x] X = [%X]\n", swag, 100, 100, 100, 100, 100, 100, 100, 100, 100);
	ft_printf("mine	p = [%p] d = [%d] D = [%D] i = [%i] o = [%o] O = [%O] u = [%u] U = [%U] x = [%x] X = [%X]\n", swag, 100, 100, 100, 100, 100, 100, 100, 100, 100);
	// printf("u = [%U]\n", 100);
	// ft_printf("u = [%u]\n", 100);
	// printf("%D\n", -1);
	// ft_printf("%D\n", -1);
	return (0);
}