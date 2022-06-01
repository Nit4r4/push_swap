/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:53:26 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 14:07:12 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_temp_board(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->temp_board[i] > stack->temp_board[j])
			{
				temp = stack->temp_board[i];
				stack->temp_board[i] = stack->temp_board[j];
				stack->temp_board[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	indexation_board(t_stack *stack)
{
	int	i;
	int	pos;
	int	value_mod;

	value_mod = 0;
	i = 0;
	sort_temp_board(stack);
	while (i < stack->size_a)
	{
		pos = 0;
		while (pos < stack->size_a)
		{
			if (stack->temp_board[i] == stack->stack_a_temp[pos])
			{
				stack->stack_a[pos] = value_mod;
				value_mod++;
			}
			pos++;
		}
		i++;
	}
	return (0);
}
