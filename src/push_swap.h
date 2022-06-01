/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferraro <vferraro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:51:05 by vferraro          #+#    #+#             */
/*   Updated: 2022/05/31 13:58:37 by vferraro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# include "../utils/libft/libft.h"
# include "../utils/ft_printf/ft_printf.h"

# define ERROR "Error\n"
# define ERR_ARG "> Tu es à court d'argument ?\n"
# define ERR_TWO "> DOUBLOOOOON !\n"
# define ERR_INT "> Tu es hors limites des int size min ou max\n"
# define ERR_ALPH "> Il n'y a pas que des chiffres\n"

typedef struct s_stack
{
	long long int	*stack_a;
	long long int	*stack_b;
	long long int	*temp_board;
	long long int	*stack_a_temp;
	int				size_a;
	int				size_b;
}	t_stack;

/* Fonctions de gestion d'erreurs */
void			critical_errors(char *str);
void			no_double(t_stack *stack);
void			is_all_digit(char **argv);
void			int_limits(t_stack *stack);
int				check_errors(int argc, char **argv, t_stack *stack);
void			freeboard(char **argv, t_stack *stack);
void			toolong(t_stack *stack);

/* Fonctions de swap */
void			swap_a(t_stack *stack);
void			swap_b(t_stack *stack);
void			swap_ss(t_stack *stack);

/* Fonctions de push */
void			push_a(t_stack *stack);
void			push_b(t_stack *stack);

/* Fonctions de rotation */
void			rotate_ra(t_stack *stack);
void			rotate_rb(t_stack *stack);
void			rotate_rr(t_stack *stack);

/* Fonctions de rotation inversee */
void			reverse_rot_rra(t_stack *stack);
void			reverse_rot_rrb(t_stack *stack);
void			reverse_rot_rrr(t_stack *stack);

/* Fonctions de gestion de tableaux et de memoire */
int				ascii_to_int(char **board_str, t_stack *stack);
void			sort_temp_board(t_stack *stack);
int				indexation_board(t_stack *stack);
int				nbr_bit(t_stack *stack);

/* Utils */
long long int	ft_atol(const char *str);
void			init_stack(t_stack *stack);

/* Fonctions de tri algo */
void			sort_one(t_stack *stack);
void			sort_two(t_stack *stack);
void			sort_just_two(t_stack *stack);
void			sort_three(t_stack *stack);
int				sort_algo_min(t_stack *stack);
void			sort_four(t_stack *stack);
void			sort_five(t_stack *stack);
int				check_sort_stack_a(t_stack *stack);
int				sort_max(t_stack *stack);
int				sort_algo_max(t_stack *stack);

#endif