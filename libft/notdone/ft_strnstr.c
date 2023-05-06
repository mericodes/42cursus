/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:21:57 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:21:58 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && i + j < n)
		{
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}