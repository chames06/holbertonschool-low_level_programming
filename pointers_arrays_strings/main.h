/* 0-reset_to_98.c */
#include "main.h"
#include <stddef.h>   /* <-- Ajouté */

void reset_to_98(int *n)
{
    if (n == NULL)   /* protection contre un pointeur nul */
        return;
    *n = 98;         /* mise à jour de la valeur pointée */
}
