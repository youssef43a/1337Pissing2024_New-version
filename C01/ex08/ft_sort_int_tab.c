/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 05:50:19 by kali              #+#    #+#             */
/*   Updated: 2025/02/06 12:45:58 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    int j;
    while (i < size) {
            // ft_swap(&tab[i], &tab[i +1]);
            j = 0;
            while (j < size - 1 - i) {
                if(tab[j] > tab[j + 1]) {
                    ft_swap(&tab[j], &tab[j +1]);
                }
                j++;
            }
        i++;
    }
}

// #include <stdio.h>
// int main() {
//     int nb[6] = {169, 807, 192, 33, 4422, 115};
//     int i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
//     printf("\n");
//     ft_sort_int_tab(nb, 6);

//     i = 0;
//     while(i < 6) {
//         printf("%d ", nb[i]);
//         i++;
//     }
// }