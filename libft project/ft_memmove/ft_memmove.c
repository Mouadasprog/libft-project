/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:28:58 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 10:58:01 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void    *dest,const void    *src,size_t n)
{
    unsigned char   *dest1 = (unsigned char *)dest;
    unsigned char   *src1 = (unsigned char *)src;
    size_t  i;
    i = 0;
    if(!src1 || !dest)
    {
        return NULL;
    }
    if(dest1 < src1)
    {
        while(i < n)
        {
            dest1[i] = src1[i];
            i++;
        }
    }
    else
    {
        i = n;
        while(i > 0)
        {
            dest1[i - 1] = src1[i - 1];
            i--;
        }

    }
    return dest;
}
int main(void)
{
    char src[10] = "hello";
    char dest[20];
    ft_memmove(dest,src,sizeof(src));
    printf("%s\n",dest);
    return 0;
}