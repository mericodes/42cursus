/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:19:09 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:19:10 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//paco ok
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = dest_length;
	j = 0;
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[j] != '\0' && j < size - dest_length - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_length + src_length);
}
