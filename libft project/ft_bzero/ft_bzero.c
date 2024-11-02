/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:07:04 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 09:46:14 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    ft_bzero(void   *s,size_t n)
{
    unsigned char   *s1;
    s1 = s;
    if(s == NULL)
    {
        return;
    }
    size_t  i = 0;

    while(i < n)
    {
        s1[i] = 0;
        i++;
    }
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
int main(void) {
    unsigned char buffer[1] = "a";  // Initialize buffer with a string
    ft_bzero(buffer,0);
    printf("\n");
    return 0;
}
