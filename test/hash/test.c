/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 16:26:10 by ale-batt          #+#    #+#             */
/*   Updated: 2016/09/01 09:30:26 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_add_some_values(t_hash **test)
{
	ft_add_hash(test, "key1", "val1");
	ft_add_hash(test, "key2", "val2");
	ft_add_hash(test, "key3", "val3");
	ft_add_hash(test, "key4", "val4");
	ft_add_hash(test, "key5", "val5");
	ft_add_hash(test, "key6", "val6");
}

int main(void)
{
	t_hash *test;

	test = NULL;
	test_add_some_values(&test);
 
	ft_read_hash(test);
	ft_free_hash(test);
	return (0);
}
