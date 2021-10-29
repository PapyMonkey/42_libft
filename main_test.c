/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 04:59:49 by aguiri            #+#    #+#             */
/*   Updated: 2021/10/24 06:23:16 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	// Test isascii
	printf("%d\n", isascii(128));
}
