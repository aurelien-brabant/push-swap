/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrabant <abrabant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 23:14:10 by abrabant          #+#    #+#             */
/*   Updated: 2021/05/20 14:38:28 by abrabant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap/stack.h"
#include "pushswap/pscore.h"
#include "pushswap/cmd.h"
#include "pushswap/errcode.h"
#include "pushswap/parsing.h"

#include "libft/gc.h"
#include "libft/string.h"
#include "libft/array.h"
#include "libft/io.h"

static int	print_instruction(void *instruction)
{
	ft_printf("%s\n", (char *) instruction);
	return (0);
}

static void	destroy_cmdset(t_array *a)
{
	ft_array_destroy(a, NULL);
}

int	main(int ac, char **av)
{
	t_pushswap	ps;

	ps.gc = ft_gc_new();
	if (ps.gc == NULL)
		return (ERRCODE_BADALLOC);
	ps.cmdset = ft_gc_add(ps.gc, ft_array_new(50), &destroy_cmdset);
	if (ps.cmdset == NULL)
		exit_program(ps.gc, ERRCODE_BADALLOC);
	ps.stack_a = parse_cli(ac, av, ps.gc);
	generate(&ps);
	ft_array_foreach(ps.cmdset, print_instruction, NULL);
	exit_program(ps.gc, 0);
}
