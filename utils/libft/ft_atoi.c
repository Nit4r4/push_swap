/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:25:15 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/14 13:39:42 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	num;

	i = 0;
	min = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * min);
}
