# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 12:46:56 by kglebows          #+#    #+#              #
#    Updated: 2023/05/10 15:42:06 by kglebows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = 	ft_printf.c ft_printf_c.c ft_printf_n.c ft_printf_p.c ft_printf_s.c \
		ft_printf_x.c ft_printf_u.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all

norm: $(SRCS)
	$(shell norminette | grep Error)

.PHONY: all clean fclean norm re