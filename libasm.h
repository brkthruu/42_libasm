/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjung <hjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 19:26:26 by hjung             #+#    #+#             */
/*   Updated: 2020/12/06 02:21:50 by hjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
#include <stdlib.h>

size_t		ft_strlen(const char *s);
int 		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char * dst, const char * src);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t  	ft_read(int fildes, void *buf, size_t nbyte);
char		*ft_strdup(const char *s1);
#endif
