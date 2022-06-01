/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:23:17 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/24 16:08:34 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ascii_to_int(char **board_str, t_stack *stack)
{
	int	i;

	stack->size_a = 0;
	while (board_str[stack->size_a])
		stack->size_a++;
	stack->stack_a = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->stack_a)
		exit(0);
	stack->stack_b = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->stack_b)
		exit(0);
	i = -1;
	stack->temp_board = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->temp_board)
		exit(0);
	stack->stack_a_temp = malloc(sizeof(long long int) * (stack->size_a));
	if (!stack->stack_a_temp)
		exit(0);
	while (board_str[++i])
	{
		stack->stack_a[i] = ft_atol(board_str[i]);
		stack->temp_board[i] = ft_atol(board_str[i]);
		stack->stack_a_temp[i] = ft_atol(board_str[i]);
	}
	return (0);
}
