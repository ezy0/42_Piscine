# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 08:35:52 by migmoren          #+#    #+#              #
#    Updated: 2022/08/30 08:40:12 by migmoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin./bash
gcc -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c
ft_swap.c && ar -rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o