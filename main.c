/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:21:35 by hjung             #+#    #+#             */
/*   Updated: 2020/11/30 16:02:21 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libasm.h"

int main()
{
    printf("length : %d\n", (int)strlen("Pizza"));
    printf("length : %d\n", (int)ft_strlen("Pizza"));

    printf("result of strcmp : %d\n", strcmp("\0", "\200"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("\0", "\200"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("\200", "\0"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("\200", "\0"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("aa", "aa"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("aa", "aa"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("j", "a"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("j", "a"));
    printf("---------------------------\n");
    
    printf("result of strcmp : %d\n", strcmp("a", "j"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("a", "j"));
    printf("---------------------------\n");

    printf("result of strcmp : %d\n", strcmp("a\200\0", "abcd"));
    printf("result of ft_strcmp : %d\n", ft_strcmp("a\200\0", "abcd"));
    printf("---------------------------\n");
    return (0);
}