/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:40:59 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 09:03:37 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *s, int c,size_t n)
{
    unsigned char   *s1 = s;
    size_t  i = 0;
    if(s == NULL)
    {
        return NULL;
    }
    while(i < n)
    {
        s1[i] = (unsigned char)c;
        i++;
    }
    return s;
}

int main(void)
{
    char    buffer[20] = "hello";
    ft_memset(buffer + 1,'A',strlen(buffer));
    printf("%s\n",buffer);
    return 0;
}