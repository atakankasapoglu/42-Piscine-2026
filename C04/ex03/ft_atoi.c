/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:52:26 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/10 00:29:28 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	temp;

	temp = 0;
	sign = 1;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
			temp = (temp * 10) + (str[i] - '0');
		if (!(str[i] <= '9' && str[i] >= '0') || (str[i] == '-'))
			return (temp * sign);
		i++;
	}
	return (temp * sign);
}
