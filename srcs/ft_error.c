/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:32:38 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/18 19:14:34 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	ft_error(char *el, int k)
{
	if (k != 0)
	{
		ft_putstr("cat: ");
		ft_putstr(el);
		ft_putstr(": ");
		if (k == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}
