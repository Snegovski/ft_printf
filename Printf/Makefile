# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 14:44:56 by ral-bakr          #+#    #+#              #
#    Updated: 2023/11/26 20:41:46 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_hexa_nbr.c ft_printf.c ft_putnbr.c ft_unsignednbr.c ft_print_small_x.c ft_print_capital_x.c   

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus