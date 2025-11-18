#include "main.h"

/**
 * reset_to_98 - Change the value pointed to by n to 98.
 *
 * @n: Pointer to an int that will be modified.
 */
void reset_to_98(int *n)
{
    if (n == NULL)   /* protection contre un pointeur nul */
        return;
    *n = 98;         /* mise à jour de la valeur pointée */
}
