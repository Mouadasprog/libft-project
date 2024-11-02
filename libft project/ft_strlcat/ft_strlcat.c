/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:27:37 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 12:00:02 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dest,const char    *src,size_t size)
{
    size_t  i;
    int length_dest = strlen(dest);
    int length_src = strlen(src);
    int total_length = length_dest + length_src;
    i = 0;
    if(!dest || !src)
    {
        return 0;
    }
    while(i < size)
    {
        dest[length_dest + i] = src[i];
        i++;
    }
    dest[length_dest + i] = '\0';
    return (total_length);
}
int main(void)
{
    char    dest[20] = "Benmahmoud";
    char    src[20] = "Mouad";
    int length = ft_strlcat(dest,src,4);
    ft_strlcat(dest,src,4);
    printf("%s\n",dest);
    printf("%d\n",length);
    return 0;
}