# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2021/11/01 16:41:18 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?= libft.a

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror
AR 					?= ar
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS				:= 	ft_atoi.c\
						ft_bzero.c\
						ft_calloc.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_itoa.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_memset.c\
						ft_putchar_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_putstr_fd.c\
						ft_split.c\
						ft_strchr.c\
						ft_strdup.c\
						ft_striteri.c\
						ft_strjoin.c\
						ft_strlcat.c\
						ft_strlcpy.c\
						ft_strlen.c\
						ft_strmapi.c\
						ft_strncmp.c\
						ft_strnstr.c\
						ft_strrchr.c\
						ft_strtrim.c\
						ft_substr.c\
						ft_tolower.c\
						ft_toupper.c
OBJS 				:= $(SRCS:.c=.o)
SRCS_BONUS			:= 	ft_lstadd_front.c\
						ft_lstnew.c\
						ft_lstsize.c
OBJS_BONUS			:= $(SRCS_BONUS:.c=.o)
HDRS				:= libft.h

# -----------------------------------------------------------------------------

all:				$(NAME)
					
%.o: 				%.c $(HDRS)
					@$(CC) -o $@ -c $< -I $(HDRS) $(CFLAGS)

$(NAME):			$(OBJS)
					@$(AR) rcs $@ $^ 
					@echo "Complete."

bonus:				$(OBJS_BONUS) $(OBJS)
					@$(AR) rcs $(NAME) $^

clean:		
					@$(RM) $(OBJS)
					@$(RM) $(OBJS_BONUS)

fclean:				clean	
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re