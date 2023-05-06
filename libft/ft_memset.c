/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:18:09 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:18:12 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//writes len bytes of value c (converted to an unsigned char) to the string b
void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len > 0)
	{
		s[len - 1] = c;
		len--;
	}
	return (s);
}
