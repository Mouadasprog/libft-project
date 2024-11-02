/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:29:57 by mouad             #+#    #+#             */
/*   Updated: 2024/10/31 13:55:12 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *str)
{
    size_t i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
char    *ft_strrchr(const char *str,int c)
{
    int i;
    int str_length = ft_strlen(str);
    i = str_length;
    while(i >= 0)
    {
        if(str[i] == (unsigned char)c)
        return (unsigned char *)&str[i];
        i--;
    }
    return NULL;
}
int main(void)
{
    char str[20] = "Hello";
    char *result = ft_strrchr(str,'\0');
    char *result1 = strrchr(str,'\0');
    printf("%s\n",result1);
    printf("%s\n",result1);
    return 0;
}