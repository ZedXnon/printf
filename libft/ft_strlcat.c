/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwoidt <dwoidt@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:55:19 by dwoidt            #+#    #+#             */
/*   Updated: 2023/12/16 20:55:19 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;

	dest_length = 0;
	while (dest[dest_length] && dest_length < size)
		dest_length++;
	i = 0;
	src_length = ft_strlen(src);
	if (size <= dest_length)
		return (size + src_length);
	while (src[i] && (dest_length + i + 1) < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	if (dest_length + i < size)
		dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
