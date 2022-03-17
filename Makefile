
LIGHTPURPLE    = $(shell tput -Txterm setaf 4)
RED            = $(shell tput -Txterm setaf 1)
RESET        = $(shell tput -Txterm sgr0)
GREEN        = $(shell tput -Txterm setaf 2)
YELLOW        = $(shell tput -Txterm setaf 3)

NAME = libft.a
NAMEPROG = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f



FILES = ft_strrchr \
		ft_atoi \
		ft_bzero \
		ft_isalnum \
		ft_isalpha \
		ft_isdigit \
		ft_isascii \
		ft_isprint \
		ft_memchr \
		ft_memcmp \
		ft_memcpy \
		ft_memmove \
		ft_memset \
		ft_strlcat \
		ft_strlen \
		ft_strncmp \
		ft_strrchr \
		ft_tolower \
		ft_toupper \
		ft_strnstr \
		ft_calloc \
		ft_strdup \
		ft_strjoin \
		ft_putchar_fd \
		ft_putnbr_fd \
		ft_putstr_fd \

FILES_B = 	ft_ \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	@$(CC) $(CFLAGS) -c -I./ -o $@ $<

$(NAME): $(OBJS)
	@echo "${LIGHTPURPLE}Compilation ... :)${RESET}"
	@echo "${GREEN}SUCCES${RESET}"
	@echo "${YELLOW}============================================================================================================${RESET}"
	$(AR) $@ $^
	@echo "${YELLOW}============================================================================================================${RESET}"

bonus: $(OBJS_B)
	@$(AR) $(NAME) $^
	@echo "${LIGHTPURPLE}Bonus ${GREEN}	ADD${RESET}"

all: $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJS_B)
	@echo "${RED}File .o deleted${RESET}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${RED}libft.a deleted${RESET}"
aclean:
	@$(RM) $(NAMEPROG)
	@echo "${RED}a.out deleted${RESET}"


re: clean all

.PHONY: bonus all clean fclean re