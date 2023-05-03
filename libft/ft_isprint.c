/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:17:47 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:17:49 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns 1 if "c" is a printable character and 0 if not
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}