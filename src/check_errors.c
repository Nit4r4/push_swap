/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:47:34 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 13:59:02 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	toolong(t_stack *stack)
{
	no_double(stack);
	int_limits(stack);
}

void	freeboard(char **argv, t_stack *stack)
{
	char	**board;
	int		x;

	x = -1;
	board = ft_split(argv[1], ' ');
	ascii_to_int(board, stack);
	is_all_digit(board);
	toolong(stack);
	while (board[++x])
		free (board[x]);
	free (board);
}

int	check_errors(int argc, char **argv, t_stack *stack)
{
	if (argc < 2)
	{
		free (stack);
		exit(0);
	}
	if (argc == 2)
	{
		freeboard(argv, stack);
	}
	else if (argc > 2)
	{
		ascii_to_int(argv + 1, stack);
		is_all_digit(argv + 1);
		toolong(stack);
	}
	return (0);
}
