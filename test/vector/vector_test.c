/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:12:52 by ale-batt          #+#    #+#             */
/*   Updated: 2017/08/07 19:02:28 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

typedef struct s_foo {
	int		a;
	char	b;
}				t_foo;

int main() {
	t_vector vec;
	t_foo 	bar;

	vec = vec_init(10, sizeof(t_foo));
	int i = 0;
	while (i < 15) {
		bar.a = i;
		bar.b = 'a' + i;
		vec_add(&vec, &bar);
		i++;
	}

	t_foo *barr = vec.data;
	i = 0;
	while (i < 15) {
		printf("%d %c \n", barr[i].a, barr[i].b);
		i++;
	}

	t_foo *a = vec_remove(&vec, 4);
	printf("\t%d %c\n", a->a, a->b);
	t_foo *b = vec_remove(&vec, 0);
	printf("------------------\n");
	printf("\t%d %c\n", b->a, b->b);
	printf("------------------\n");
	i = 0;
	while (i < 15 - 2) {
		printf("%d %c \n", barr[i].a, barr[i].b);
		i++;
	}
	i = 0;
	t_foo *ptr = vec.data;
	printf("%d\n", vec.len);
	while (ptr) {
		ptr = (t_foo *)vec_delete(&vec, (void *)ptr);
		printf("%d %p\n", vec.len, ptr);
		i++;
	}

	return 0;
}
