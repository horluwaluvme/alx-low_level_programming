#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @i: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *i)
{
	size_t j = 0;

	while (i)
	{
		if (!i->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", i->len, i->str);
		i = i->next;		
		j++;
	}

	return (s);
}
