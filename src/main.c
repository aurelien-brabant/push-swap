/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrabant <abrabant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:26:19 by abrabant          #+#    #+#             */
/*   Updated: 2021/03/28 16:39:37 by abrabant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "pshswp_stack.h"
#include "cmd.h"
#include "libft/string.h"

/*
** To perform some tests while developping
*/

int	main(void)
{
	t_pshswp_stack	*stack;
	t_cmd	*cmdlist;

	stack = stack_new();
	for (long long i = 0; i < 25; ++i) {
		stack_push(stack, i);
	}
	cmdlist = cmd_getlist();
	cmd_exec(cmdlist, "sa", stack, NULL);
	while (!stack_isempty(stack)) {
		printf("%lld\n", stack_pop(stack));
	}
}
//e
