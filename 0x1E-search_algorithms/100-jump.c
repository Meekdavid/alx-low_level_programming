#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: -1 if val not present or array NULL
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t j, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (j = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		j = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; j < jump && array[j] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
