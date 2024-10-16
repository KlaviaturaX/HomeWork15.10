#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int sum(int* arr, int size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int** Razmernost(int rows, int cols) 
{
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void ydalenieMatrici(int** matrix, int rows) 
{
    for (int i = 0; i < rows; i++) 
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void VivodMatrici(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int** SlochenieMatric(int** A, int** B, int rows, int cols) 
{
    int** result = Razmernost(rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}