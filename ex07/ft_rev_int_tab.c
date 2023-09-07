/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:56:40 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/08/28 18:24:43 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	c;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		c = tab[start];
		tab[start] = tab[end];
		tab[end] = c;
		start++;
		end--;
	}
}
/*int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    ft_rev_int_tab(tab, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}*/