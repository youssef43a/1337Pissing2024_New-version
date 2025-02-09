/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 05:22:55 by kali              #+#    #+#             */
/*   Updated: 2025/02/09 05:35:50 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int i = 0;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    return dest;
}

// int ft_strlen(char *str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         i++;
//     }
//     return i;
// }
// int main() {
//     char a[] = "hello evreyone";
//     char b[100];
//     ft_strncpy(b, a, 5);
//     #include <stdio.h>
//     printf("%s", b);
// }