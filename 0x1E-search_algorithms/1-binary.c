#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted list
 * by a binary search algorithm
 * @array: list that search the value in
 * @size: size of the array
 * @value: the value that we search of
 * Return: the value that was found
 * or -1 if no value was found
*/
int binary_search(int *array, size_t size, int value)
{
int start = 0;
int end = size - 1;
int i, mid;

while (start <= end)
{
printf("Searching in array: ");
mid = start + (end - start) / 2;
for (i = start; i < end; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[end]);
printf("\n");
if (array[mid] == value)
return (mid);

if (array[mid] < value)
start = mid + 1;
else
end = mid - 1;
}

return (-1);
}
