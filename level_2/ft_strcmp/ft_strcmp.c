/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:15:27 by miwang            #+#    #+#             */
/*   Updated: 2018/07/12 18:23:31 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i; 

	i = 0;
	while (s1[i] = s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}