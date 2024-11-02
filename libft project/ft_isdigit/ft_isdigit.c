/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:47:39 by mouad             #+#    #+#             */
/*   Updated: 2024/11/01 10:56:06 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int  c)
{
    return (c >= '0' && c <= '9');
}
int main(void)
{
    if(ft_isdigit("12"))
    {
        printf("is digit\n");
    }
    else
    printf("is not digit\n");
    return 0;
}