/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaday <khaday@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:03:30 by khaday            #+#    #+#             */
/*   Updated: 2026/07/05 20:17:19 by khaday           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*parse_input(char *str)
{
	int	*views;
	int	i;
	int	count;

	views = (int *)malloc(sizeof(int) * 16);
	if (!views)
		return (NULL);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4' && count < 16)
		{
			views[count++] = str[i] - '0';
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (free(views), NULL);
		}
		else if (str[i] != ' ')
			return (free(views), NULL);
		i++;
	}
	if (count != 16)
		return (free(views), NULL);
	return (views);
}
