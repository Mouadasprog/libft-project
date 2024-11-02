/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:36:53 by mouad             #+#    #+#             */
/*   Updated: 2024/11/02 11:06:27 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_strnstr(const char  *haystack,const char    *needle,size_t len)
{
    size_t  i;
    size_t  j;
    if(*needle == '\0')
    {
        return(char *)haystack;
    }
    i = 0;
    while(haystack[i] && i < len)
    {
        j = 0;
        while(haystack[i + j] == needle[j])
        {
            j++;
            if(needle[i] == '\0')
            {
                return (char *)&haystack[i];
            }
        }
        i++;
    }
    return NULL;
}
int main(void)
{
    char    *haystack = "hello world";
    char    *needle = "mouad";
    char    *result = ft_strnstr(haystack,needle,8);
    printf("%s\n",strnstr(haystack,needle,8));
    printf("%s\n",result);
    return 0;
}
