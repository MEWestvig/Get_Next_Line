/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:42:21 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/30 12:15:38 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

ssize_t read(int fd, void *buf, size_t count);

int get_next_line(const int fd, char **line)
{
	ssize_t	num_read;
	char	buffer[BUFF_SIZE + 1];
	int		i;

	if (fd < 0 || !line || read(fd, buffer, 0) < 0)
		return (-1);
	num_read = read(fd, buffer, BUFF_SIZE);
	if (num_read == 0)
		return (0);
	//deal with thingy.
	while (i < (int)num_read)
	{
	}
	//take in the buffer of BUFF_SIZE and go until it hits /n or /0
	//set the line into "line"
	//return whether the line could be read or not.
	//1 for line read, 0 for reading complete, -1 for error.
}
