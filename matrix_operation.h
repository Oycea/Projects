#ifndef _MATRIX_OPERATION_H_
#define _MATRIX_OPERATION_H_

//Выделение памяти для матрицы
double** memory_allocation_matrix(int size);

//Заполнение матрицы
double** input(int& size); 

//Заполнение вспомогательной матрицы В
double** input_matrix(int size); 

//Умножение матрицы на матрицу
double** matrix_multiplication(double** matrix_1, double** matrix_2, double** matrix_res, int size); 

//Умножение матрицы на число
double** matrix_multiplication_by_number(int k, double** matrix, int size); 

//Разность двух матриц
double** substraction_of_matrices(double** matrix_1, double** matrix_2, double** matrix_res, int size); 

//Обнуление всех элементов матрицы
double** zero_matrix(double** matrix, int size); 

//Многочлен от матрицы
double** polynominal_in_matrix(double** matrix_a, double** matrix_b, double** matrix_res, int size); 

//Копирование элементов из одной матрицы в другую
double** copy_elements(double** matrix_1, double** matrix_2, int size); 

//Вывод матрицы А
void output(double** matrix, int size); 

//Освобождение памяти матрицы
void free(double** matrix, int size); 

#endif //_MATRIX_OPERATION_H_
