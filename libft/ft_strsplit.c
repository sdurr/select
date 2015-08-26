/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:17:09 by sdurr             #+#    #+#             */
/*   Updated: 2015/02/10 17:25:26 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int i;
	int j;
	int tmp;

	i = 0;
	j = 0;
	while (s[i])
	  {
	    while (s[i] && s[i] == c)
	      i++;
	    j++;
	    while (s[i] && s[i] != c)
	      i++;
	  }
	if (!(ret = (char **)malloc(sizeof(char *) * j + 1)))
	  return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	  {
	    while (s[i] && (s[i] == c))
	      i++;
	    tmp = i;
	    while (s[tmp] && s[tmp] != c)
	      tmp++;
	    tmp = tmp - i;
	    if (tmp > 0)
	      ret[j] = ft_strnew(tmp + 1);
	    tmp = 0;
	    while (s[i] && s[i] != c)
	      ret[j][tmp++] = s[i++];
	    j++;
	  }
	ret[j] = NULL;
	return (ret);
}
