/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwoidt <dwoidt@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:26:32 by dwoidt            #+#    #+#             */
/*   Updated: 2024/04/02 19:26:32 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int printf(const char *format, ...)
{
	(void)format;
	/*
	printf inputs a strin then varable inputs

	the string consists of normal letter but i need to seach for % and other things as well for example x00 or something im not too sure but hex code 

	the variable amount of arguments are going to be the variables that are passed which can be a pointer or it can be the actual variable.

	somehow i need to map the order of the %'s found to the order of the arguments that are passed into the funciton.

	and depending on the % type it will do something different wiht the variable/pointer.
	*/

	return (0);
}
