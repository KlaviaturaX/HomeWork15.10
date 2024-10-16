#include <iostream>
#include <string>
#include <Windows.h>
#include "antonov.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int data[] = { 12, 4, 7, 18, 22, 6, 18, 19, 21 };
	int razmer = size(data);
	int s = sum(data, razmer);
	cout << s << endl << endl;

    int** matricaA = Razmernost(2, 2);
    int** matricaB = Razmernost(2, 2);

    matricaA[0][0] = 1; matricaA[0][1] = 2;
    matricaA[1][0] = 3; matricaA[1][1] = 4;

    matricaB[0][0] = 5; matricaB[0][1] = 6;
    matricaB[1][0] = 7; matricaB[1][1] = 8;

    int** resultMatrix = SlochenieMatric(matricaA, matricaB, 2, 2);
    VivodMatrici(resultMatrix, 2, 2);

    ydalenieMatrici(matricaA, 2);
    ydalenieMatrici(matricaB, 2);
    ydalenieMatrici(resultMatrix, 2);

    return 0;
}