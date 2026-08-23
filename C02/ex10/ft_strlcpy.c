/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 02:05:47 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/14 16:46:40 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	str_length;
	unsigned int	i;

	i = 0;
	str_length = 0;
	while (src[str_length] != '\0')
	{
		str_length++;
	}
	if (size == 0)
	{
		return (str_length);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_length);
}
