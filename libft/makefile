# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astefane <astefane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 15:12:33 by astefane          #+#    #+#              #
#    Updated: 2024/04/12 19:37:27 by astefane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = libft.a
INCLUDES = ../include
SRC_DIR  = src/
OBJS_DIR = obj/
CC       = gcc
CFLAGS   = -Wall -Werror -Wextra -I
RM       = rm -f
AR       = ar rcs

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(notdir $(basename $(SRC_FILES)))))

FTIS_DIR = ft_is/
FTIS     = ft_isalnum.c ft_isalpha.c ft_isascii.c \
           ft_isdigit.c ft_isprint.c

FTMEM_DIR = ft_mem/
FTMEM      = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c \
             ft_memcmp.c ft_memmove.c ft_memset.c

FTPUT_DIR = ft_put/
FTPUT     = ft_putchar_fd.c ft_putendl_fd.c \
            ft_putnbr_fd.c ft_putstr_fd.c

FTTO_DIR = ft_to/
FTTO     = ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

FTSTR_DIR = ft_str/
FTSTR     = ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
            ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
            ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
            ft_strtrim.c ft_substr.c

FTLST_DIR = ft_lst/
FTLST     = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
            ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \

SRC_FILES += $(addprefix $(FTIS_DIR), $(FTIS))
SRC_FILES += $(addprefix $(FTMEM_DIR), $(FTMEM))
SRC_FILES += $(addprefix $(FTPUT_DIR), $(FTPUT))
SRC_FILES += $(addprefix $(FTTO_DIR), $(FTTO))
SRC_FILES += $(addprefix $(FTSTR_DIR), $(FTSTR))
SRC_FILES += $(addprefix $(FTLST_DIR), $(FTLST))

SRC_FILES += $(wildcard $(SRC_DIR)*.c)

SRC  = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(basename $(SRC_FILES))))


all: $(NAME)

$(NAME):	$(OBJS_DIR) $(OBJS)
								$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)%.o: $(SRC_DIR)%.c | $(OBJS_DIR)
								$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)$(FTIS_DIR)
	mkdir -p $(OBJS_DIR)$(FTMEM_DIR)
	mkdir -p $(OBJS_DIR)$(FTPUT_DIR)
	mkdir -p $(OBJS_DIR)$(FTTO_DIR)
	mkdir -p $(OBJS_DIR)$(FTSTR_DIR)
	mkdir -p $(OBJS_DIR)$(FTLST_DIR)

clean:
	$(RM) -rf $(OBJS_DIR)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean re fclean