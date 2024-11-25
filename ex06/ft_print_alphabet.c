/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:04 by japostad          #+#    #+#             */
/*   Updated: 2024/11/25 18:38:12 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_print_alphabet(void)
{
  int i;
  i = 'a';

  while(i <= 'z')
  {
    write(1, &i, 1);
    i++;
  }
}
/*
int main()
{
  ft_print_alphabet();
}
*/
