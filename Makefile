# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2021/10/30 17:33:52 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?= libft.a

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror
AR 					?= ar
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS				:= 	ft_bzero.c\
						ft_calloc.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_memset.c\
						ft_putchar_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_putstr_fd.c\
						ft_strdup.c\
						ft_striteri.c\
						ft_strlen.c\
						ft_strmapi.c\
						ft_strncmp.c\
						ft_tolower.c\
						ft_toupper.c
OBJS 				:= $(SRCS:.c=.o)
HDRS				:= libft.h

#OBJS_PATH			:= bin

# -----------------------------------------------------------------------------

all:				$(NAME)
					
$(NAME):			$(OBJS)
					@$(AR) rcs $@ $^ 
					@echo "Complete."

%.o: 				%.c $(HDRS)
					@$(CC) -o $@ -c $< -I $(HDRS) $(CFLAGS)

clean:		
					@$(RM) $(OBJS)

fclean:				clean	
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re