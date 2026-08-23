/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 04:00:32 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/12 23:45:24 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb >= 0)
	{
		return (1);
	}
	else
	{
		while (power-- > 1)
		{
			nb = nb * temp;
		}
	}
	return (nb);
}
