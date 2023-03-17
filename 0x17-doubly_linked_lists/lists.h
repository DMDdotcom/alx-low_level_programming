#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
Prototype: size_t print_dlistint(const dlistint_t *h);
Prototype: size_t dlistint_len(const dlistint_t *h);
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Prototype: void free_dlistint(dlistint_t *head);
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
Prototype: int sum_dlistint(dlistint_t *head);
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
