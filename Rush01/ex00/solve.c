/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaday <khaday@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:34 by khaday            #+#    #+#             */
/*   Updated: 2026/07/05 20:17:20 by khaday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int grid[4][4], int row, int col, int num);
int	check_views(int grid[4][4], int *views);

int	solve_puzzle(int grid[4][4], int *views, int row, int col)
{
	int	num;

	if (row == 4)
	{
		if (check_views(grid, views) == 1)
			return (1);
		return (0);
	}
	if (col == 4)
		return (solve_puzzle(grid, views, row + 1, 0));
	num = 1;
	while (num <= 4)
	{
		if (check_double(grid, row, col, num) == 1)
		{
			grid[row][col] = num;
			if (solve_puzzle(grid, views, row, col + 1) == 1)
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
