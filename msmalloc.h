#pragma once
#ifndef _MARK_H_
#define _MARK_H_
#include <stdlib.h>

#endif

extern "C"{
	void mark (void *);
	void unmark (void *);
	size_t get_mark (void *);
	void sweep (void);
	void transfer_to_manual_object (void *);
	void transfer_to_automatic_objects (void *);
	int is_heap_pointer (void *);
	void printDlMallocInfo (void);
}