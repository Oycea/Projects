#include <iostream>
#include <iomanip>
#include"matrix_operation.h"
using namespace std;

//Заполнение матрицы А
double** input_a(int& size) {
	cout << "Enter the size of the matrix: ";
	cin >> size;
	cout << endl << "Enter the matrix: " << endl;
	double** matrix_a = new double*[size];
	for (int i = 0; i < size; i++)
		matrix_a[i] = new double[size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> matrix_a[i][j];
	return matrix_a;
}

//Создание нулевой матрицы
double** input_matrix(int size) {
	double** matrix = new double*[size];
	for (int i = 0; i < size; i++)
		matrix[i] = new double[size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = 0;
	return matrix;
}

//Умножение матрицы на матрицу
double** matrix_multiplication(double** matrix_1, double** matrix_2, double** matrix_res, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				matrix_res[i][j] += matrix_2[i][k] * matrix_1[k][j];
			}
		}
	}
	return matrix_res;
}

//Умножение матрицы на число
double** matrix_multiplication_by_number(int k, double** matrix, int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = matrix[i][j] * k;
	return matrix;
}

//Разность двух матриц
double** substraction_of_matrices(double** matrix_1, double** matrix_2, double** matrix_res, int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix_res[i][j] = matrix_1[i][j] - matrix_2[i][j];
	return matrix_res;
}

//Обнуление всех элементов матрицы
double** zero_matrix(double** matrix, int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = 0;
	return matrix;
}

//Многочлен от матрицы
double** polynominal_in_matrix(double** matrix_a, double** matrix_b, double** matrix_res, int size) {
	matrix_b = matrix_multiplication(matrix_a, matrix_a, matrix_b, size); //Матрица А в квадрате
	matrix_res = matrix_multiplication(matrix_a, matrix_b, matrix_res, size); //Матрица А в кубе
	cout << "1) A^3 = " << endl;
	output(matrix_res, size);
	cout << "2) 2*A^3 = " << endl;
	matrix_multiplication_by_number(2, matrix_res, size);
	output(matrix_res, size);
	cout << "3) A^2 = " << endl;
	output(matrix_b, size);
	cout << "4) 2*A^3 = " << endl;
	matrix_multiplication_by_number(2, matrix_b, size);
	output(matrix_b, size);
	cout << "5) 2*A^3-2*A^2 = " << endl;
	substraction_of_matrices(matrix_res, matrix_b, matrix_res, size);
	output(matrix_res, size);
	cout << "6) 2*A^3-2*A^2-A = " << endl;
	substraction_of_matrices(matrix_res, matrix_a, matrix_res, size);
	output(matrix_res, size);
	cout << endl << "Result is: " << endl;
	output(matrix_res, size);
	return matrix_res;
}

//Копирование элементов из одной матрицы в другую
double** copy_elements(double** matrix_1, double** matrix_2, int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix_2[i][j] = matrix_1[i][j];
	return matrix_2;
}

//Вывод матрицы
void output(double** matrix, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << setw(15) << matrix[i][j];
		cout << endl;
	}
}

//Освобождение памяти матрицы
void free(double**& matrix, int size) {
	for (int i = 0; i < size; i++)
		delete[] matrix[i];
	delete[] matrix;
	matrix = 0;
}