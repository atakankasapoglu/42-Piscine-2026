/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 22:49:38 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/12 23:44:00 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	temp;

	temp = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		temp = nb * temp;
		nb--;
	}
	nb = temp;
	return (nb);
}
