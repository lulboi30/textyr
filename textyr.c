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

extern void txDescribe(char *description) {
	puts(description);
}

unsigned short txAction(char **actions) {
	unsigned short action;
	txNews("What Will You Do?");

	_txPrintStrArray(actions);

	printf("] ");
	scanf("%hu", &action);

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

void _txPrintStrArray(char **strarray) {
	for (unsigned short i = 0; strarray[i] != NULL; i++) {
		printf("	%hu) %s\n", i + 1, strarray[i]);
	}
}
