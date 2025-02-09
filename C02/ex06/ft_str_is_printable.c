/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 06:49:56 by kali              #+#    #+#             */
/*   Updated: 2025/02/09 07:08:55 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str) {
    int i = 0;
    while (str[i]) {
        if(str[i] < 32) return 0;
        i++;
    }
    return 1;
}

// int main() {
//     #include <stdio.h>
//     printf("%d", ft_str_is_printable("Dd2!?<."));
//     printf("%d", ft_str_is_printable("\n"));
// }