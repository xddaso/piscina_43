/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:09:47 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/12 14:15:12 by fdelucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[20] = "holaasdqwe";
	char	dest[10];
	unsigned int	n = 10;
	char	*res;

	res = ft_strncpy(dest, src, n);
	printf("res: %s", res);
	//printf("src: %s\ndest: %s", src, dest);
}
