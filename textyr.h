/*
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2026 lulboi30
 */

#ifndef _TBAG_H
#define _TBAG_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

#define E_APPROACH 1
#define E_APPEAR 2
#define E_LUNGES 3
#define E_ACROSS 4
#define E_FIND 5

extern void txTriggerEvent(char *title, unsigned char event);
extern void txDescribe(char *description);
extern unsigned short txAction(char **actions);
extern void txNews(char *news);
extern char txRandomChoice();
extern void txInit();

/* private area */

extern void _txPrintStrArray(char **strarray);

#endif
