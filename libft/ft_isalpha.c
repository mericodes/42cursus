/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:16:06 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/05/03 17:16:08 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns 1 if "c" is an alphabetical character and 0 if not

int	ft_isalpha(int c)
{
	if ((c >= 101 && c <= 132) || c >= 141 && c <= 172)
		return 1;
	else
		return 0;
}
