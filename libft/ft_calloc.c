/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:22:23 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:22:24 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void *calloc(size_t nmemb, size_t size)
{
	return (malloc(nmemb * size));
}

/*int	main(void)
{
	void * a = calloc (10, sizeof(char));
	void * b = malloc (10 * sizeof(char));
	void * c = malloc (10 * sizeof(char));
	printf("%p \n", a);
	printf("%p \n", b);
	printf("%p \n", c);
	return (0);
}*/