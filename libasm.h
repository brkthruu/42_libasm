/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:26:26 by hjung             #+#    #+#             */
/*   Updated: 2020/12/03 15:57:54 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
#include <stdlib.h>

size_t		ft_strlen(const char *s);
int 		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char * dst, const char * src);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);

#endif
