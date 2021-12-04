#ifndef _MATRIX_OPERATION_H_
#define _MATRIX_OPERATION_H_

double** input_a(int& size); //Çàïîëíåíèå ìàòðèöû À

double** input_matrix(int size); //Ввод матрицы

double** matrix_multiplication(double** matrix_1, double** matrix_2, double** matrix_res, int size); //Óìíîæåíèå ìàòðèöû íà ìàòðèöó

double** matrix_multiplication_by_number(int k, double** matrix, int size); //Умножение матрицы на число

double** substraction_of_matrices(double** matrix_1, double** matrix_2, double** matrix_res, int size); //Ðàçíîñòü äâóõ ìàòðèö

double** zero_matrix(double** matrix, int size); //Îáíóëåíèå âñåõ ýëåìåíòîâ ìàòðèöû

double** polynominal_in_matrix(double** matrix_a, double** matrix_b, double** matrix_res, int size); //Многочлен от матрицы

double** copy_elements(double** matrix_1, double** matrix_2, int size); //Копирование элементов из одной матрицы в другую

void output(double** matrix, int size); //Вывод матрицы

void free(double** matrix, int size); //Очистка памяти матрицы

#endif //_MATRIX_OPERATION_H_
