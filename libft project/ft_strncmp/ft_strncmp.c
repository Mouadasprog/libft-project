/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:15:50 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 09:40:28 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char   *s1, const char   *s2,size_t    n)
{
    int i;
    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
        {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return 0;
}
int main(void)
{
    char    s1[20] = "benthbythetrgddsedmahmodud mouad";
    char    s2[20] = "bewwnmahmoudfvdfvssd mouka";
    printf("%d\n",ft_strncmp(s1,s2,20));
    printf("%d\n",strncmp(s1,s2,20));
    return 0;
}