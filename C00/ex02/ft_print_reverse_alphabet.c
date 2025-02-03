/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 06:30:20 by kali              #+#    #+#             */
/*   Updated: 2025/02/03 06:34:56 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(0, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    int alph = 122;

    while (alph > 96) {
        ft_putchar(alph);
        alph--;
    }
}