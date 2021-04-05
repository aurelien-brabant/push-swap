/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrabant <abrabant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 12:59:44 by abrabant          #+#    #+#             */
/*   Updated: 2021/04/05 06:19:03 by abrabant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psstack.h"
#include <stdio.h>

void	cmd_push_a(t_psstack *a, t_psstack *b)
{
	stack_push_from_to(b, a);
}

void	cmd_push_b(t_psstack *a, t_psstack *b)
{
	stack_push_from_to(a, b);
}

void	cmd_swap_a(t_psstack *a, t_psstack *b)
{
	(void)b;
	stack_swap_top(a);
}

void	cmd_swap_b(t_psstack *a, t_psstack *b)
{
	(void)a;
	stack_swap_top(b);
}

void	cmd_swap_double(t_psstack *a, t_psstack *b)
{
	cmd_swap_a(a, b);
	cmd_swap_b(a, b);
}
