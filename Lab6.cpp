//Гущиной Маргариты ПМИ-13БО
//ЛАБОРАТОРНАЯ РАБОТА №6. РАБОТА С МАТРИЦАМИ
//
//Задание 1. МАТРИЦЫ И ОПЕРАЦИИ НАД НИМИ
//Вариант 10. f(x) = 2x^3 − 2x^2 − x. Найти: f(f(A)).

#include <iostream>
#include <iomanip>
#include"matrix_operation.h"
using namespace std;

int main() {
	int size;
	double** matrix_a = input(size); //Заполнение матрицы А
	double** matrix_b = input_matrix(size); //Заполнение матрицы для вычислений
	double** matrix_res = input_matrix(size); //Заполнение матрицы для вычислений

	//Вычисление f(A) и вывод промежуточных результатов
	cout << "I. Function defination f(A)=2*A^3-2*A^2-A " << endl << endl;
	polynominal_in_matrix(matrix_a, matrix_b, matrix_res, size);

	copy_elements(matrix_res, matrix_a, size);
	zero_matrix(matrix_res, size);
	zero_matrix(matrix_b, size);

	//Вычисление f(f(A)) и вывод промежуточных результатов
	cout << endl << "II. Function defination f(f(A))=2*f(A)^3-2*f(A)^2-f(A) " << endl << endl;
	polynominal_in_matrix(matrix_a, matrix_b, matrix_res, size);

	//Вывод ответа
	cout << endl << endl << "ANSWER IS: " << endl;
	output(matrix_res, size);

	//Очистка памяти
	free(matrix_a, size);
	free(matrix_a, size);
	free(matrix_a, size);

	system("pause");
	return 0;
}