/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaday <khaday@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:19 by khaday            #+#    #+#             */
/*   Updated: 2026/07/05 20:17:17 by khaday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	get_value(int grid[4][4], int i, int j, int type)
{
	if (type == 0)
		return (grid[j][i]);
	else if (type == 1)
		return (grid[3 - j][i]);
	else if (type == 2)
		return (grid[i][j]);
	else
		return (grid[i][3 - j]);
}

int	count_visible(int grid[4][4], int i, int type)
{
	int	max;
	int	vis;
	int	j;
	int	val;

	max = 0;
	vis = 0;
	j = -1;
	while (++j < 4)
	{
		val = get_value(grid, i, j, type);
		if (val > max)
		{
			max = val;
			vis++;
		}
	}
	return (vis);
}

int	check_views(int grid[4][4], int *views)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (count_visible(grid, i, 0) != views[i])
			return (0);
		if (count_visible(grid, i, 1) != views[i + 4])
			return (0);
		if (count_visible(grid, i, 2) != views[i + 8])
			return (0);
		if (count_visible(grid, i, 3) != views[i + 12])
			return (0);
	}
	return (1);
}
