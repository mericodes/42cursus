/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:18:22 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/10 18:39:49 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//paco ok
//writes len bytes of value 0 to the string b
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
