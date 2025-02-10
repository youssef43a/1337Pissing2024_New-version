/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 04:23:15 by kali              #+#    #+#             */
/*   Updated: 2025/02/10 05:01:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str) {
    int i = 0;
    while(str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
            
        i++;
    }
    return str;
}

// int main() {
//     #include <stdio.h>
//     char ar[] = "qwertyuiopasdfghjkllzxcvbn";
//     char ab[] = "\nHi Ian 123qwertyuiopasdfghjkllzxcvbnAAAAA";
//     printf("%s", ft_strupcase(ar));
//     printf("%s", ft_strupcase(ab));
// }