#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @array: int pointer
 * @size: size of the array
 * @action: function pointer
 * Return: void
 * **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
		if (array && action)
			for (i = 0; i < size; i++)
				action(array[i]);
}
