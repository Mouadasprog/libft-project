/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:38:28 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 10:44:06 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
    return((c >= 65 && c <= 90) || c >= 97 && c <= 122);
}

int main(void)
{
    if(ft_isalpha(' '))
    {
        printf("is alpha\n");
    }
    else
    printf("is not alpha\n");
    return 0;
}