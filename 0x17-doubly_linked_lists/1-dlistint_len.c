#include "lists.h"
/**
 * author: omidoyin idowu
 * dlistint_len - Return list
 * @h: struct list
 * Return: list_len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
