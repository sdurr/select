/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:29:15 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:37:53 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_long_int(int n)
{
  int ret;

  ret = 1;
  if (n < 0)
    {
      ret++;
      n = n * -1;
    }
  while (n > 0)
    {
      n = n / 10;
      ret++;
    }
  return (ret);
}
