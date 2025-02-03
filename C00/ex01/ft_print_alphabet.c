/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 06:22:17 by kali              #+#    #+#             */
/*   Updated: 2025/02/03 06:32:32 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(0, &c, 1);
}

void ft_print_alphabet(void) {
    int alph = 97;

    while (alph < 123) {
        ft_putchar(alph);
        alph++;
    }
}