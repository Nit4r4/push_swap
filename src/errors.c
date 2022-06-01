/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:04:25 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 13:56:01 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	critical_errors(char *str)
{
	ft_printf("\n--------------------------\n\n%s\
%s\n--------------------------\n\n", ERROR, str);
	exit(EXIT_FAILURE);
}

void	no_double(t_stack *stack)
{
	int	i;
	int	j;

	j = 0;
	while (j < stack->size_a)
	{
		i = j + 1;
		while (i < stack->size_a)
		{
			if (stack->stack_a[j] != stack->stack_a[i])
				i++;
			else
				critical_errors(ERR_TWO);
		}
		j++;
	}
}

void	is_all_digit(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (argv[len])
		len++;
	while (i < len)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' || argv[i][j] == '+') \
			&& ft_isdigit(argv[i][j + 1]))
				j++;
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				critical_errors(ERR_ALPH);
		}
		i++;
	}
}

void	int_limits(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] > 2147483647 || stack->stack_a[i] < -2147483648)
		{
			critical_errors(ERR_INT);
		}
		else
			i++;
	}
}

// void	toolong(t_stack *stack)
// {
// 	no_double(stack);
// 	int_limits(stack);
// }

// int	check_errors(int argc, char **argv, t_stack *stack)
// {
// 	char	**board;
// 	int		x;

// 	if (argc < 2)
// 	{
// 		free (stack);
// 		exit(0);
// 	}
// 	x = -1;
// 	if (argc == 2)
// 	{
// 		board = ft_split(argv[1], ' ');
// 		ascii_to_int(board, stack);
// 		is_all_digit(board);
// 		toolong(stack);
// 		while (board[++x])
// 			free (board[x]);
// 		free (board);
// 	}
// 	else if (argc > 2)
// 	{
// 		ascii_to_int(argv + 1, stack);
// 		is_all_digit(argv + 1);
// 		toolong(stack);
// 	}
// 	return (0);
// }

// void	toolong(t_stack *stack)
// {
// 	no_double(stack);
// 	int_limits(stack);
// }

// int	check_errors(int argc, char **argv, t_stack *stack)
// {
// 	char	**board;
// 	int		x;

// 	if (argc < 2)
// 	{
// 		free (stack);
// 		exit(0);
// 	}
// 	x = -1;
// 	if (argc == 2)
// 	{
// 		board = ft_split(argv[1], ' ');
// 		ascii_to_int(board, stack);
// 		is_all_digit(board);
// 		toolong(stack);
// 		while (board[++x])
// 			free (board[x]);
// 		free (board);
// 	}
// 	else if (argc > 2)
// 	{
// 		ascii_to_int(argv + 1, stack);
// 		is_all_digit(argv + 1);
// 		toolong(stack);
// 	}
// 	return (0);
// }
