/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstirber <cstirber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:56:51 by cstirber          #+#    #+#             */
/*   Updated: 2025/05/10 16:28:25 by cstirber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

enum	e_moves
{
	PUSH_A,
	PUSH_B,
	SWAP_A,
	SWAP_B,
	ROTATE_A,
	ROTATE_B,
	RROTATE_A,
	RROTATE_B,
	SWAP_AB,
	ROTATE_AB,
	RROTATE_AB
};

enum	e_stacks
{
	A,
	B 
};

typedef struct	s_ops
{
	enum	e_moves	op;
	struct	s_ops	*next;
	struct	s_ops	*prev;
}	t_ops;

typedef	struct	s_stack
{
	int			value;
	int			index;
	int			upper;
	int			price;
	int			cheap;

	enum	e_stacks	s_e;
	struct	s_stack 	*target;
	struct	s_stack 	*next;
	struct	s_stack		*prev;
}	t_stack;

typedef	struct s_push
{
	struct s_stack	**from;
	struct s_stack	**to;
}	t_push;

//
char	**ft_split(char *str, char sep);