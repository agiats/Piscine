/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 02:04:22 by tsomeya           #+#    #+#             */
/*   Updated: 2021/02/01 02:24:30 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}

void	ft_putptr(void *str)
{
	printf("pointer = %p\n", str);
}

int		main(void)
{
	t_list *list;

	char *strs[5];
	strs[0] = "data4";
	strs[1] = "data3";
	strs[2] = "data2";
	strs[3] = "data1";
	strs[4] = "data0";
	list = ft_list_push_strs(5, strs);
	printf("pointer of strs[2] = %p\n", strs[2]);
	ft_list_foreach_if(list, ft_putptr, "data2", ft_strcmp);
	return (0);
}
