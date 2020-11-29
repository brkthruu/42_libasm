/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:21:35 by hjung             #+#    #+#             */
/*   Updated: 2020/11/29 19:57:49 by hjung            ###   ########.fr       */
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
    printf("result of strcmp : %d\n", ft_strcmp("\0", "\200"));

    printf("result of strcmp : %d\n", strcmp("j", "a"));
    printf("result of strcmp : %d\n", ft_strcmp("\200", "a"));
    return (0);
}