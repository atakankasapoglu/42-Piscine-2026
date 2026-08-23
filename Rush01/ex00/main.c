/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaday <khaday@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:25 by khaday            #+#    #+#             */
/*   Updated: 2026/07/05 20:17:18 by khaday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_error(void);
void	print_grid(int grid[4][4]);
int		*parse_input(char *str);
int		solve_puzzle(int grid[4][4], int *views, int row, int col);

int	main(int argc, char **argv)
{
	int	*views;
	int	grid[4][4];
	int	row;
	int	col;

	if (argc != 2)
		return (print_error(), 1);
	views = parse_input(argv[1]);
	if (!views)
		return (print_error(), 1);
	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
			grid[row][col] = 0;
	}
	if (solve_puzzle(grid, views, 0, 0) == 1)
		print_grid(grid);
	else
		print_error();
	return (free(views), 0);
}
