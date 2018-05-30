/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:42:21 by mwestvig          #+#    #+#             */
/*   Updated: 2018/05/29 11:34:25 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

ssize_t read(int fd, void *buf, size_t count);

int get_next_line(const int fd, char **line)
{
	ssize_t	num_read;
	void	*buffer;
	int		i;

	buffer = (void *)malloc(BUFF_SIZE + 1);
	num_read = read(fd, buffer, BUFF_SIZE);
	while (i < (int)num_read)
	{
	}
	//take in the buffer of BUFF_SIZE and go until it hits /n or /0
	//set each line as the next part of the double array "line"
}
