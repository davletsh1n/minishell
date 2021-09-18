/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <sopka13@mail.ru>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 01:14:15 by eyohn             #+#    #+#             */
/*   Updated: 2021/06/04 00:21:49 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int			ft_export_in(t_vars *vars, char *str_1, char *str_2)
{
	vars->flags->status = 1;
	return (ft_write_and_ret(str_1, str_2, -1));
}
