/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:21:15 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:21:17 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//paco leak memoria
/*For ft_strchr, in 
/Users/mlopez-i/francinette/tests/libft/fsoares/test_strchr.c:

Error in test 5: ft_strchr(0x10622ea40: "teste", 357: 'e'): 
expected: 0x10622ea41, yours: 0x0
Error in test 6: ft_strchr(0x10622ea40: "teste", 1024: '\0'): 
expected: 0x10622ea45, yours: 0x0*/
//function returns a pointer to the first occurrence of the character 
//c in the string s
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0' && c == 0)
		return ((char *)s + i);
	return (NULL);
}
