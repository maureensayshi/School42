/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 00:29:30 by miwang            #+#    #+#             */
/*   Updated: 2018/07/06 00:48:55 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_first_param(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac >= 2)
	{
		aff_first_param(av[1]);
		write(1, "\n", 1);
	}
	if (ac < 2)
		write(1, "\n", 1);
	return (0);
}
