#include "logic.h"


int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "Input size if square matrix: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "Matrix:\n" << convert(matrix, size);

	cout << "Max element up main diagonale is " << get_extreme_elements_up_main_diagonale(matrix, size) << endl;

	cout << "Max element up main diagonale is " << count_even_elements_down_main_diagonale(matrix, size) << endl;
	system("pause");


	return 0;
}