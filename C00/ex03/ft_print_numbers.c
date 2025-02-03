/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 06:35:23 by kali              #+#    #+#             */
/*   Updated: 2025/02/03 06:37:50 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(0, &c, 1);
}

void ft_print_numbers(void) {
    int alph = 48;

    while (alph < 58) {
        ft_putchar(alph);
        alph++;
    }
}