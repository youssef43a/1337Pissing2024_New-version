/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 05:37:48 by kali              #+#    #+#             */
/*   Updated: 2025/02/09 06:02:31 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str) {
    int i;
    i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122));
        else return 0;
        i++;
    }
    return 1;
}

// int main() {
//     #include <stdio.h>
//     printf("%d", ft_str_is_alpha("lajkdsd@"));
// }