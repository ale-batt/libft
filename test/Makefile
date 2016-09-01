#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/09/01 12:23:36 by ale-batt          #+#    #+#             *#
#*   Updated: 2016/09/01 14:05:31 by ale-batt         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

CMOCKA = cmocka
CMOCKA_LIB = $(CMOCKA)/build/src/libcmocka.a

all: $(CMOCKA_LIB)

$(CMOCKA):
	git submodule init
	git submodule update

$(CMOCKA_LIB): $(CMOCKA)
	mkdir -p $(CMOCKA)/build && cd $_
	cmake .. -DWITH_STATIS_LIB=on && make

