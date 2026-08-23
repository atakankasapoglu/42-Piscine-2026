/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:23:05 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/12 23:48:12 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	a;

	a = 0;
	a = nb;
	if (nb < 2 || nb > 2147483646)
	{
		return (0);
	}
	else
	{
		while (--nb != 1)
		{
			if (a % nb == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
