# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmyrcell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 18:37:08 by tmyrcell          #+#    #+#              #
#    Updated: 2019/07/18 18:47:56 by tmyrcell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_error.c srcs/main.c srcs/ft_cat.c

OBJECTS = ft_putchar.o ft_putstr.o ft_error.o main.o ft_cat.o

FLAGS = -Wall -Wextra -Werror -c -I

INCLUDES = includes/

LIB = libft.a

all : $(LIB)

$(LIB):
	gcc $(FLAGS) $(INCLUDES) $(SRCS)
	ar rc $(LIB) $(OBJECTS)
	ranlib $(LIB)
	gcc -o $(NAME) $(LIB)

clean: 
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(LIB) ./$(NAME)

re: fclean all
