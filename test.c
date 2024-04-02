/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwoidt <dwoidt@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:20:45 by dwoidt            #+#    #+#             */
/*   Updated: 2024/04/02 18:20:45 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum(int count, ...)
{
	int	i;
	int	x;

	i = count;
	va_list args;
	va_start(args, count);
	x = va_arg(args, int);
	printf("Count: %d\n", count);
	while(x != 0)
	{
		i+=x;
		x = va_arg(args, int);
	}
	va_end(args);
	return (i);
}

int	main(int argv, char *argc[])
{
	printf("Sum: %d\n", sum(7, 5, 3, 0));
	return (0);
}