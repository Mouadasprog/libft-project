/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:04:36 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 14:18:07 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
void    *ft_calloc(size_t  num,size_t  size)
{
    size_t total_size = size * num;

    void    *ptr = malloc(total_size);
    if(ptr ==   NULL)
    {
        return NULL;
    }
    ft_memset(ptr,0,total_size);
    return ptr;

}

int main(void)
{
    char    *buffer = (char *)ft_calloc(5,sizeof(char));
    if(buffer != NULL)
    {
        printf("values :\n");
        for(int i = 0;i < 5;i++)
        {
            printf("%d\n",buffer[i]);
        }
    }
    else
    printf("allocation failed !\n");
    return 0;
}