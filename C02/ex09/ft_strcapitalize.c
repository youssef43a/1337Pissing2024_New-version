/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 05:31:24 by kali              #+#    #+#             */
/*   Updated: 2025/02/10 08:27:27 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_chekIsFirstLetter(char *str, int i) {
    return (str[i - 1] >=  '0' && str[i - 1] <= '9') ||
           (str[i - 1] >=  'A' && str[i - 1] <= 'Z') ||
           (str[i - 1] >=  'a' && str[i - 1] <= 'z');
}

int ft_char_is_lowcase(char c)
{
    return (c >= 'a' && c <= 'z');
}

char *ft_strcapitalize(char *str) {
    int i = 0;
    while (str[i]) {
        if (i == 0 || !ft_chekIsFirstLetter(str, i)) {
            if(ft_char_is_lowcase(str[i]))
                str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}

// int main() {
//     #include <stdio.h>
//     char ar[] = "salut, commeNt tu vas ? 42mots quarante-deux; cinquante+et+un";
//     char ab[] = "\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
//     printf("%s", ft_strcapitalize(ar));
//     printf("%s", ab);
// }