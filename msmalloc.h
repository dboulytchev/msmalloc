#pragma once
#ifndef _MARK_H_
#define _MARK_H_
#include <stdlib.h>

#endif

extern "C"{
	void	__mark							(void *);
	void	__unmark						(void *);
	size_t	__get_mark						(void *);
	void	__transfer_to_manual_object		(void *);
	void	__transfer_to_automatic_objects	(void *);
	int		__mark_after_overflow			(void);
	int		__is_heap_pointer				(void *);
	void	__init_spaces					(void);
	void *	my_malloc3						(size_t bytes, int i);
	void *	my_malloc2						(size_t bytes);
	void	__printDlMallocInfo				(void);
	void	__copy_objects					(void);
}