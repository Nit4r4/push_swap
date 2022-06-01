/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:51:14 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 14:14:11 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	init_stack(stack);
	check_errors(argc, argv, stack);
	indexation_board(stack);
	if (!check_sort_stack_a(stack))
	{
		if (stack->size_a == 2)
			sort_just_two(stack);
		else if (stack->size_a == 3)
			sort_algo_min(stack);
		else if (stack->size_a == 4)
			sort_four(stack);
		else if (stack->size_a == 5)
			sort_five(stack);
		else
			sort_algo_max(stack);
	}
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->temp_board);
	free(stack->stack_a_temp);
}
