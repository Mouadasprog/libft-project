/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:20:10 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 14:33:40 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *str)
{
    size_t  i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
char    *ft_strdup(const char   *s)
{
    size_t  size ;
    size_t  i;
    size = ft_strlen(s);
    char    *duplicate = malloc(size + 1);
    if(duplicate == NULL)
    {
        return NULL;
    }
    i = 0;
    while(i < size)
    {
        duplicate[i] = s[i];
        i++;
    }
    duplicate[i] = '\0';

    return duplicate;
}
int main(void)
{
    char    buffer[10] = "mouad";
    char    *buffer2 = ft_strdup(buffer);
    printf("%s\n",buffer2);
    return 0;
}