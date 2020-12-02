/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:21:35 by hjung             #+#    #+#             */
/*   Updated: 2020/12/02 19:54:17 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libasm.h"

int main()
{
    char    dest1[10];
    char    dest2[10];
    
    printf("length : %d\n", (int)strlen("Pizza"));
    printf("length : %d\n", (int)ft_strlen("Pizza"));

    printf("-------FT_STRCMP-----------\n");
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

    printf("-------FT_STRCPY-----------\n");
    printf("result of strcpy : %s\n", strcpy(dest1, "abcd"));
    printf("result of ft_strcpy : %s\n", ft_strcpy(dest2, "abcd"));
    return (0);
}