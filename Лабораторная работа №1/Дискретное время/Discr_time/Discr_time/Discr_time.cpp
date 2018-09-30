#define _CRT_SECURE_NO_WARNINGS // игнорируем предупреждения
#include "stdafx.h"   
#include <iostream>    
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));   //подключение ГСЧ
	/*
		n - количество вершин (состояний)
		i,j - обход матриц
		Position - 
		Rpp - десятичная дробь

		T - матрица переходов
		P0 - вектор начальных состояний
		sumVh[i] - вектор вхождений в каждое состояние


	*/

	int n, Position, j, i;
	int sumVh[100], sum;
	float Rpp, Sum, PromRes;

	double Procent;
	float T[100][100], P0[100], sum_rez[100];
	//Случайное число от 0 до 1
	float a = rand() % 100; // Рандомим число для отрезка (берем последние две цифры)
	Rpp = a / 100.0;        // Делаем число десятичной дробью
	cout << "Введите количество вершин:\n";
	cin >> n;

	
	//Обнуляем вектор вхождений в каждое состояние
	for (int i = 0; i < n; i++)
	{
		sumVh[i] = 0;
	}
	/*

	//Задание и вывод матрицы переходов и вектора начальных состояний
	cout << "Матрица переходов:\n";
	for (int i = 0; i < n; i++)
	{
		int Count = 100; // литерал для обеспечения остатка от деления на 100 на первый элемент новой строки матрицы переходов T
		for (j = 0; j < n - 1; j++)
		{
			T[i][j] = (rand() % Count) / 100.0; // Заполняем матрицу переходов числами от 0 до 1
			Count -= (int)(T[i][j] * 100);     // Для рандомизации элементов матрицы T
			cout << T[i][j] << " ";
		}
		cout << endl<< j << endl;
		T[i][j] = Count / 100.0;   // Последний элемент строки матрицы T
		cout << T[i][j] << "\n";
	}


	cout << "Вектор начальных состояний:\n";
	int Count = 100;
	for (i = 0; i < n - 1; i++)
	{
		P0[i] = (rand() % Count) / 100.0;
		Count -= (int)(P0[i] * 100);
		cout << P0[i];
		cout << " ";
	}


	P0[i] = (Count % 100) / 100.0;
	cout << P0[i];
	for (int i = 0; i < n; i++)
	{
		if ((Rpp = Rpp - P0[i]) < 0)
		{
			Position = i;
			sumVh[i]++;
			//cout << "\n" << Position << " " << sumVh[i] << "\n";
			break;
		}
	}
	//КОЛИЧЕСТВО ЭКСПЕРИМЕНТОВ ДЛЯ МАТРИЦЫ
	cout << "\nВведите количество экспериментов:\n";
	sum;
	cin >> sum;
	for (int g = 0; g < sum; g++)
	{
		float a = rand() % 100;
		Rpp = a / 100.0;
		//cout << "\n" << Rpp << "\n";
		for (int j = 0; j < n; j++)
		{
			if ((Rpp = Rpp - T[Position][j]) < 0)
			{
				Position = j;
				sumVh[j]++;
				//cout << "\n" << Rpp << " " << sumVh[j] <<" " << j << "\n";
				break;
			}
		}
	}
	for (i = 0; i < n; i++)
		sum_rez[i] = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum_rez[i] += P0[j] * T[j][i];
		}
	}
	cout << "\nВывод о вероятности перехода в состояние, полученный экспериментально: \n";
	for (int i = 0; i < n; i++)
	{
		Procent = ((double)sumVh[i] / (double)(sum + 1)) * 100;
		cout << (Procent) << "% ";
	}
	cout << "\nВывод о вероятности перехода в состояние, полученный аналитически: \n";
	for (i = 0; i < n; i++)
	{
		cout << (sum_rez[i] * 10) / 10. * 100 << "% ";
	}
	cout << "\n";*/
	system("pause");
	return 0;
}