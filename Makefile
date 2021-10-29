NAME				?= rush-02

CC					= gcc
CFLAGS				?= -Wall -Wextra -Werror -g
RM					?= rm -f
MKDIR				?= mkdir -p

SRCS				:= 	ft_bzero.c\	
						ft_isalpha.c\
						ft_isalnum.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_memcpy.c\
						ft_memset.c\
						ft_strlen.c
OBJS 				:= $(SRCS_NAME:.c=.o)
HDRS				:= libft.h

# -----------------------------------------------------------------------------

all:				$(NAME)
					
$(NAME):			$(OBJS)
					@$(CC) $^ -o $@
					@echo "Complete."

$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS)
					@$(MKDIR) $(OBJS_PATH)
					$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

clean:		
					@$(RM) a.out
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(OBJS)
					@echo "Object files successfully deleted."

fclean:				clean	
					@$(RM) $(NAME)
					@echo "Binary files successfully deleted."

re:					fclean all

# -----------------------------------------------------------------------------
#  Partie Test

test:				$(SRCS)
					@$(CC) $^ main_test.c -o test.out

.PHONY:				all clean fclean re
