/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 06:45:54 by kali              #+#    #+#             */
/*   Updated: 2025/02/05 06:50:26 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str) {
    int i;
    
    i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}