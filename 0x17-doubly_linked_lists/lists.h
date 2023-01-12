#ifndef LISTS_H 
 #define LISTS_H 
  
 #include <stdlib.h> 
 #include <stdio.h> 
 #include <unistd.h>

/*
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number pf nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
