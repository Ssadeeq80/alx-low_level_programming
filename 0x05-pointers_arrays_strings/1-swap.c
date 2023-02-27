/**
 * swap_int - Swaps integers values of passed pointers
 *
 * @a: First Pointer to an integer
 * @b: Second Pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
