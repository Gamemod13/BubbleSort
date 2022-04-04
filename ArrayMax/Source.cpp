#include <iostream>
#include <utility>

void bubbleSort(int length, int array[]) {
	int min = 0;
	int iter = 0;
	for (int iteration = 0; iteration < length - 1; ++iteration) {
		min = array[0];
		iter = iteration + 1;
		for (int index = 1; index < length; ++index) {
			if (array[index] < array[index - 1]) {
				min = array[index];
				std::swap(array[index], array[index - 1]);
			}
		}
		if (min == array[0])
			break;
	}
	std::cout << "Iteration is: " << iter << std::endl;
	
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
}


int main() {
	const int length = 9;
	int array[length]{ 1, 5, 6, 4, 9, 8, 2, 7, 3 };
	
	return 0;
}
