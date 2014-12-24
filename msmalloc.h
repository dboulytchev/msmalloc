#pragma once
#ifndef _MARK_H_
#define _MARK_H_
#include <stdlib.h>

#endif

extern "C"{
	void init(size_t);
	void __init_spaces (void);
	void * my_malloc2 (size_t bytes);
	void * my_malloc3 (size_t bytes, int i);
	void * m_a_s (void);
	void sweep (void);
	void mark (void *);
	size_t get_mark (void *);
	void transfer_to_automatic_objects (void *);
	void transfer_to_manual_object (void *);
	int is_heap_pointer (void *);
	void printDlMallocInfo (void);
	// void * no_space_malloc (size_t);
	// void * space_based_malloc (size_t);
	// void * timed_malloc (size_t size);
	// void * stupid_malloc (size_t size);
	int mark_after_overflow (void);
}