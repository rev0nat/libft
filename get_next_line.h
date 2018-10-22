/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 12:58:08 by aguillot          #+#    #+#             */
/*   Updated: 2018/10/22 14:53:36 by aguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# define ERROR "Error. Closing prgrm."
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

int	get_next_line(const int fd, char **line);

#endif
