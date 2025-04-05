#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list and all its nodes
 * @head: Pointer to the head of the list to be freed
 *
 * Description: This function iterates through a linked list starting from
 * the head, freeing the string content of each node and then the node itself.
 * It handles the case where the list is empty by returning immediately.
 *
 * Return: Nothing (void)
 */

void free_list(list_t *head) {
  list_t *temp;

  if (head == NULL || head == NULL)
    return;

  while (head != NULL) {
    temp = head;
    head = (head)->next;
    free(temp->str);
    free(temp);
  }
}
