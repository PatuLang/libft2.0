/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:46:51 by plang             #+#    #+#             */
/*   Updated: 2024/08/27 11:46:54 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_pfputstr(char *str, int *ip)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (ft_pfputstr("(null)", ip));
	while (str[i] != '\0')
	{
		count += ft_pfputchar(str[i], ip);
		i++;
	}
	return (count);
}
