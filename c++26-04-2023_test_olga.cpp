﻿// c++26-04-2023_test_olga.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	//1
	short i, a[20];
	i = sizeof(a);
	cout << "i = sizeof(a) =  " << i << "\n";
	//3
	int n, b[2][3];
	n = sizeof(b);
	cout << "n = sizeof(a) = " << n << "\n";
	//4
	int k = 5;
	int  pr = (k < 1) ? 1 : --k;
	cout << "int pr =fin1(5) = " << pr << "\n";
	//7
	int sa = 10;
	int* psa = &sa;
	int dsa = (*psa)++;
	cout << "dsa = " << dsa << "\n";
	//9
	char str[] = "\nGet\tmy\task";
	cout << "size array  = " << size(str) << "\n";
	//11
	int mass[3][3] = { { 2,3,4 }, { 3,4,8 }, { 1,0,9 } };
	cout << "element = " << mass[1][2] << "\n";
	//12
	long* p;
	cout << "adress1 = " << &p << "\t";
	p += 2;
	cout << "adress2 = " << &p <<"\n";
	//14
	int yo = 1;
	cout << ++yo + 1 + yo++ << "\n";
	//16
	float y = 1.5;
	cout << 2 / 3 * y - 1 << "\n";
	//20
	void oneF(int& z);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
