#include <cmath>
int ger_first_negative_value_index(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			return i;
		}
	}
	return -1;
}

int sum_absolute_value_after_first_negative_value(int* array, int size) {
	int index = ger_first_negative_value_index(array, size);

	if (index < 0)
	{
		return 0;
	}
	int sum = 0;

	for (int i = index; i < size; i++)
	{
		sum += abs(array[i]);
	}

	return sum;
}