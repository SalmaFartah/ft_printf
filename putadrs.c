/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putadrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:52:38 by sfartah           #+#    #+#             */
/*   Updated: 2024/12/01 21:36:55 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putadrs(void *p, char c)
{
	int	t;

	t = 0;
	t += write(1, "0x", 2);
	t += puthex((unsigned long)p, c);
	return (t);
}
