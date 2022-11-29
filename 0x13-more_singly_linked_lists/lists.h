#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	* struct list_s - singly linked list
 *
 *	* @str: string - (malloc'ed string)
 *
 *	* @len: length of the string
 *
 *	* @next: points to the next node
 *
 *	* Description: singly linked list node structure
 *
 *	* for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
