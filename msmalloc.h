#pragma once
#ifndef _MARK_H_
#define _MARK_H_
#include <stdlib.h>

void mark (void*);
void unmark (void*);
size_t get_mark (void*);
void sweep (void);
void trancfer_to_manual_object (void *);
void trancfer_to_automatic_objects (void *);
#endif

int isHeapPointer (void* p);
void printDlMallocInfo (void);