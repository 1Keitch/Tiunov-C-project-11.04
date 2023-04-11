#include <iostream>  //  стандартная библиотека
#include "H1.h" 

// Препроцессор - это программа которая производит некоторые \
а иногда весьма значинительные манипуляции с первональным текстом программы перед тем как он подвергается компиляции\
Директива препроцессора - команда указывающая препрцечссору на то, как именно должен быть изменен исходный текст программы\

//Этапы обработки программы

#define _PI 3.14
#define forever for (int fori = 0;; fori++)
#define begin {
#define end }
#define sum(a, b) a + b
#define print_arr(a, s) std::cout << '[';\
for (int i=0; i<s; i++)\
std::cout <<a[i] << ", ";\
std::cout <<"\b\b]\n"

#if 5 < 4

#define var 666
#elif 5 == 4
#else

#define show(p) std::cout << #p << std::endl
#define var(name) std::cout << #name << " = " << name << std::endl
#define concat(a, b) a ## b
#endif

#ifndef PI

void foo() {};

#endif
int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;

	//ПИ
	/*  
		std::cout << "PI= " << _PI << std::endl;   пи - заменяется на 3.14 после обработки предпроцессора
	PI=3; // ОШИБКА!
	
	forever begin 
		std::cout << '.';
	if (fori >= 20)
		break;

	Макроссы предпроцессора

	end
	*/

	//макросы
	/*
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << n << "+" << m << " = " << sum(n, m) << std::endl;
    const int size = 5;
	int arr[size]{ 4, 8, 15, 16, 23, };
	print_arr(arr, size);
	*/

	//Операторы предпроцессора\
	1. Оператор превращение в строку

	show(I LOVE C++);
	n = 2023;
	var(n);
	double tmp = 1.55;
	var(tmp);
	std::cout << "tmp = " << concat(t, mp) << std::endl;
	std::cout << _PI << std::endl;

#undef _PI

	#define _PI 3
	
	std::cout << _PI << std::endl;
	
	return 0;


}








