/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrabant <abrabant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:09:51 by abrabant          #+#    #+#             */
/*   Updated: 2021/03/29 22:44:26 by abrabant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pshswp_stack.h"
#include "libft/io.h"

static size_t	max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

void	print_stacks(t_pshswp_stack *a, t_pshswp_stack *b)
{
	size_t	topa;
	size_t	topb;
	size_t	size;

	size = max(stack_size(a), stack_size(b));
	topa = stack_size(a);
	topb = stack_size(b);
	ft_putstr_fd("|---|---|\n", 1);
	ft_putstr_fd("| A | B |\n", 1);
	ft_putstr_fd("|---|---|\n", 1);
	while (size-- > 0)
	{
		if (size < topa)
			ft_printf("| %d |", a->data[size]);
		else
			ft_putstr_fd("|   |", 1);
		if (size < topb)
			ft_printf(" %d |\n", b->data[size]);
		else
			ft_putstr_fd("   |\n", 1);
	}
	ft_putstr_fd("|---|---|\n", 1);
}