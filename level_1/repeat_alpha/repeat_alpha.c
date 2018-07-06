/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 01:16:36 by miwang            #+#    #+#             */
/*   Updated: 2018/07/06 02:07:28 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		repeat_time(char c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else
		i = 1;
	return (i);
}

void	repeat_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while (j < repeat_time(str[i]))
		{
			write(1, &str[i], 1);
			j++;		
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
