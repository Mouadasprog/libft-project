/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:03:24 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 11:16:38 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strlcpy(char *dest, const char   *src,size_t size)
{
    size_t  i;
    
    if(!dest || !src)
    {
        return 0;
    }
    if(size == 0)
    {
        return ft_strlen(src);
    }
    i = 0;
    while(i < size && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}
int main(void)
{
    char    buffer[20] = "Ben mahmoud mouad";
    char    dest[20];
    int total = ft_strlcpy(dest,buffer,9);
    printf("%d\n",total);
    printf("%s\n",dest);
    return 0;
}