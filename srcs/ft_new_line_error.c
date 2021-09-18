/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_line_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <sopka13@mail.ru>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:07:43 by eyohn             #+#    #+#             */
/*   Updated: 2021/06/03 23:09:20 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int		ft_new_line_error(char *str, char a)
{
	int		i;

	i = -1;
	if (a == ';' || a == ' ')
		return (0);
	while (str[++i])
		if (str[i] == a && !str[i + 1])
			return (1);
	return (0);
}