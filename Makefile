# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2022/12/06 05:11:20 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?=	libft.a

CC					=	gcc
CFLAGS				?=	-Wall -Wextra -Werror
AR 					?=	ar
RM					?=	rm -f
MKDIR				?=	mkdir -p
ECHO				?=	echo

RWILDCARD			=	$(foreach d,\
						$(wildcard $(1:=/*)),\
						$(call RWILDCARD,$d,$2) $(filter $(subst *,%,$2),$d))

# ********************************* F O N T S *********************************

EOC					:=	"\033[0m"
LIGHT				:=	"\033[1m"
DARK				:=	"\033[2m"

ITALIC				:=	"\033[3m"
UNDERLINE			:=	"\033[4m"

BLACK				:=	"\033[30m"
RED					:=	"\033[31m"
GREEN				:=	"\033[32m"
BLUE				:=	"\033[34m"
PURPLE				:=	"\033[35m"
CYAN				:=	"\033[36m"
WHITE				:=	"\033[37m"

# ********************************* P A T H S *********************************

SRCS_PATH			:=	src
OBJS_PATH			:=	bin
HDRS_PATH			:=	include

# ********************************* N A M E S *********************************

SRCS				:=	$(call RWILDCARD,$(SRCS_PATH),*.c)
OBJS 				:=	$(addprefix $(OBJS_PATH)/, $(SRCS:$(SRCS_PATH)/%.c=%.o))

# ********************************* R U L E S *********************************

all:				$(NAME)
					
$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS_PATH)
					@$(MKDIR) $(dir $@)
					@$(ECHO)\
					$(WHITE)$(DARK)"Compiling $<"$(EOC)
					@$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

$(NAME):			$(OBJS)
					@$(AR) rcs $@ $^ 
					@$(ECHO)\
					$(CYAN)$(UNDERLINE)"$@"$(EOC)": "$(GREEN)"complete"$(EOC)

clean:		
					@$(ECHO)\
					$(RED)"Deleting binary files"$(EOC)
					@$(RM) $(OBJS)

fclean:				clean	
					@$(ECHO)\
					$(RED)"Deleting static library file"$(EOC)
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
