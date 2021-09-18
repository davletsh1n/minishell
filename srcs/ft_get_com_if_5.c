/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_com_if_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <sopka13@mail.ru>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:07:38 by eyohn             #+#    #+#             */
/*   Updated: 2021/06/03 23:27:56 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int			ft_get_com_if_5(char *str, char a, t_temp_1 *tp)
{
	if (a == ' ' && (int)ft_strlen(tp->strk[tp->i]) == 0 && (str[tp->k] == a ||
		str[tp->k] == '\t'))
		return (1);
	return (0);
}