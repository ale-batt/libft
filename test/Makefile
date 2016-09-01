#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/09/01 12:23:36 by ale-batt          #+#    #+#             *#
#*   Updated: 2016/09/01 14:25:41 by ale-batt         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

CMOCKA_DIR = cmocka
CMOCKA_BUILD = $(CMOCKA_DIR)/build
CMOCKA_LIB = $(CMOCKA_BUILD)/src/libcmocka.a

.PHONY: all

all:	$(CMOCKA_LIB)

$(CMOCKA_BUILD):
	git submodule init
	git submodule update

$(CMOCKA_LIB): $(CMOCKA_BUILD)
	mkdir -p $(CMOCKA_BUILD) && cd $(CMOCKA_BUILD) && cmake .. -DWITH_STATIC_LIB=on && make

