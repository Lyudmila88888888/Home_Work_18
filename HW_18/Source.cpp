#include <iostream>



int sum(int a, int b = 0, int c = 0, int d = 0, int e = 0) { // Задача 1. 
	return a + b + c + d + e;
}

inline double average(double num1, double num2, double num3) { // Задача 2.
	return (num1 + num2 + num3) / 3.0;
}

int max(int num1, int num2, int num3) {   // Задача 3.
	std::cout << "Tree ints\n";
	return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

double max(double num1, double num2, double num3) {
	std::cout << "Tree doubles\n";
	return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

short max(short num1, short num2, short num3) {
	std::cout << "Tree shorts\n";
	return(num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << " { ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

template <typename T>
void arr_negative(T arr[], const int length) { // Задача 4.
	int negativ = -1;
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			negativ = i;
			break;
		}
	}
	if (negativ != -1) {
		for (int i = negativ + 1; i < length; i++) {
			arr[i] = 0;
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, r;

	// Задача 1.
	std::cout << " Введите число -> ";
	std::cin >> n;
	std::cout << " Сумма чисел = " << sum(n, 2, 3, 4, 5) << std::endl;

	// Задача 2.
	double m, r, c;
	std::cout << " Введите три числа -> ";
	std::cin >> m >> r >> c;

	double result = average(m, r, c);
	std::cout << " Среднее арифметическое чисел =  " << result << std::endl;

	// Задача 3.
	std::cout << max(7, 42, 15) << std::endl;
	std::cout << max(7.5, 42.6, 15.8) << std::endl;
	std::cout << max(58, 32158, 198536) << std::endl;// как вызвать short? они с int очень похожи

	// Задача 4.
	const int size = 10;
	int arr[size]{ 5, 26, 38, 74, -8, -9, 10, 4, 6, 9 };

	std::cout << " Изначальный массив: \n";
	print_arr(arr, size);

	std::cout << " обнуление элементов: \n";
	arr_negative(arr, size);
	print_arr(arr, size);

	return 0;
}