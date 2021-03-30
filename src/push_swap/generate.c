/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrabant <abrabant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:01:12 by abrabant          #+#    #+#             */
/*   Updated: 2021/03/30 18:41:32 by abrabant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "cmd.h"
#include "libft/io.h"
#include "libft/gc.h"
#include "push_swap.h"
#include "pshswp_stack.h"

void	generate(t_gc gc, t_pshswp_stack *a)
{
	t_pshswp_stack	*b;
	t_cmd			*cmdlist;

	cmdlist = cmd_getlist();
	(void)a;
	b = ft_gc_add(gc, stack_new(), stack_destroy);
	if (b == NULL)
		return ;
	bsort(cmdlist, a, b);
}
