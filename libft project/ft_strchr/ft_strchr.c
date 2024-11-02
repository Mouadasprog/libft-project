/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:07:30 by mouad             #+#    #+#             */
/*   Updated: 2024/11/02 11:17:02 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strchr(char    *str,int c)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] == (char)c)
        return &str[i];
        i++;
    }
    if(c == '\0')
    return &str[i];
    return (NULL);
}
int main(void)
{
    char str[20] = "Mouad ben mahmoud";
    char *result = ft_strchr(str,'o');
    char *result1 = strchr(str,'o');
    printf("%s\n",result);
    printf("%s\n",result1);

    
}