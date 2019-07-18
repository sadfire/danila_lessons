/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:18:45 by tmyrcell          #+#    #+#             */
/*   Updated: 2019/07/18 19:16:33 by tmyrcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/stat.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *el, int k);
int		ft_cat(char *el);

#endif
