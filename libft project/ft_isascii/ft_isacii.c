/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isacii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:12:11 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 11:15:28 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int  c)
{
    return (c >= 0 && c <= 127);
}
int main(void) {
    int test_chars[] = {65, 90, 97, 122, 128, -1, 0, 127};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++) {
        if (ft_isascii(test_chars[i])) {
            printf("%d is an ASCII character\n", test_chars[i]);
        } else {
            printf("%d is not an ASCII character\n", test_chars[i]);
        }
    }
    
    return 0;
}
