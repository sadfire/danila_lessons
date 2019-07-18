/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:25:07 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/18 19:14:25 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

int		ft_cat(char *el)
{
	char	buf[BUFF_SIZE + 1];
	int		len;
	int		fd;

	len = 0;
	if ((fd = open(el, O_RDONLY)) == -1)
		return (errno);
	while ((len == read(fd, buf, BUFF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
