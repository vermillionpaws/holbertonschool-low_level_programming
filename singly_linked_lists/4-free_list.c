#include "lists.h"
#include <stdlib.h>

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
