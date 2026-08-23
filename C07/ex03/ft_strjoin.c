/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasapog <akasapog@student.42istanbul.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 22:02:37 by akasapog          #+#    #+#             */
/*   Updated: 2026/07/15 23:35:34 by akasapog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_str_len(int size, char **strs, char *sep)
{
	int	sep_len;
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
			len++;
		i++;
	}
	sep_len = 0;
	while (sep[sep_len] != '\0')
		sep_len++;
	len = len + (size - 1) * sep_len;
	return (len);
}

void	join(char *dest, char *src, int *i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
		dest[(*i)++] = src[j++];
	return ;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_len;
	int		count;
	int		i;

	str_len = get_str_len(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (count < size)
	{
		join(str, strs[count], &i);
		if (count != size - 1)
			join(str, sep, &i);
		count++;
	}
	return (str);
}
