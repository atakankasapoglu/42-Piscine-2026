/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaday <khaday@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:38 by khaday            #+#    #+#             */
/*   Updated: 2026/07/05 20:17:21 by khaday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_grid(int grid[4][4])
{
	int		row;
	int		col;
	char	c;

	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
