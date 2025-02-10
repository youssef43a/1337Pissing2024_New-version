/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 05:04:13 by kali              #+#    #+#             */
/*   Updated: 2025/02/10 05:07:03 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str) {
    int i = 0;
    while(str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }   
        i++;
    }
    return str;
}

// int main() {
//     #include <stdio.h>
//     char ar[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
//     char ab[] = "\nHi Ian 123qwertyuiopasdfghjkllzxcvbnAAAAA";
//     printf("%s", ft_strlowcase(ar));
//     printf("%s", ft_strlowcase(ab));
// }