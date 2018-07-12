/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:59:40 by miwang            #+#    #+#             */
/*   Updated: 2018/07/12 16:44:16 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[0])
			write(1, &s3[0], 1);
		else
			write(1, &s1[i], 1);	
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4)
		if (!(av[2][1] != '\0' && av[3][1] != '\0'))
			search_and_replace(av[1], av[2], av[3]);
	write(1, "\n", 1);
	return (0);
}
