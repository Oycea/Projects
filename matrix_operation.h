#ifndef _MATRIX_OPERATION_H_
#define _MATRIX_OPERATION_H_

double** input_a(int& size); //���������� ������� �
double** input_matrix(int size); //���������� ��������������� ������� �
double** matrix_multiplication(double** matrix_1, double** matrix_2, double** matrix_res, int size); //��������� ������� �� �������
double** matrix_multiplication_by_number(int k, double** matrix, int size); //��������� ������� �� �����
double** substraction_of_matrices(double** matrix_1, double** matrix_2, double** matrix_res, int size); //�������� ���� ������
double** zero_matrix(double** matrix, int size); //��������� ���� ��������� �������
double** polynominal_in_matrix(double** matrix_a, double** matrix_b, double** matrix_res, int size); //��������� �� �������
double** copy_elements(double** matrix_1, double** matrix_2, int size); //����������� ��������� �� ����� ������� � ������
void output(double** matrix, int size); //����� ������� �
void free(double**& matrix, int size); //������������ ������ �������

#endif //_MATRIX_OPERATION_H_
