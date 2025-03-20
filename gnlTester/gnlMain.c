/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnlMain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tursescu <tursescu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:29:12 by tursescu          #+#    #+#             */
/*   Updated: 2025/03/20 16:15:31 by tursescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../get_next_line.h"


int main(void)
{
	int fd;
	char *next_line;
	int count;

	fd = open("./gnlTester/file.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }
	count = 0;
	
	while (count < 20)
	{
		next_line = get_next_line(fd);
		count++;
		printf("[%d]:%s", count, next_line);
		free(next_line);
	}
	close(fd);
	
	return (0);
}
