/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:18:08 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/11 20:42:25 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	argc -= 1;
	while (argc > 0)
	{
		b = 0;
		while (argv[argc][b] != '\0')
		{
			write(1, &argv[argc][b], 1);
			b++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
