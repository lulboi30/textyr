/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 lulboi30
 */

#include "tx.h"

void txTriggerEvent(char *title, unsigned char event) {
	if (event == E_APPROACH) {
		printf("%s Approaches you\n", title);
		return;
	}

	else if (event == E_APPEAR) {
		printf("%s Appears\n", title);
		return;
	}

	else if (event == E_LUNGES) {
		printf("%s Lunges At You\n", title);
		return;
	}

	else if (event == E_ACROSS) {
		printf("You Come Across %s\n", title);
		return;
	
	}
	else if (event == E_FIND) {
		printf("You Find %s\n", title);
		return;
	}
}

 void txDescribe(char *description) {
	puts(description);
}

int txAction(char **actions) {
	int action;
	txNews("What Will You Do?");

	int size = _txPrintStrArray(actions);

	printf("] ");
	scanf("%i", &action);

	while (action > size) {
		size = _txPrintStrArray(actions);
		printf("] ");
		scanf("%i", &action);
	}

	return action;
}

void txNews(char *news) {
	putchar('\n');
	puts(news);
}

char txRandomChoice() {
	return rand() & 1;
}

void txInit() {
	srand(time(NULL));
}

/* private area */

int _txPrintStrArray(char **strarray) {
	int size;
	for (size = 0; strarray[size] != NULL; size++) {
		printf("	%hu) %s\n", i + 1, strarray[size]);
	}
	size++;
	return size;
}
