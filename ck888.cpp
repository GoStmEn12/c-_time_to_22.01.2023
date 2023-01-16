// ck888.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "\t\tЛабораторная работа С++";
	float a;
	cout << "\n\tВведите первое число :";
	cin >> a;
	float b;
	cout << "\n\tВведите второе число :";
	cin >> b;
	float max =(a>b)? a:b;
	float c;
	cout<< "\n\tВведите третье число :";
	cin >> c;
	float max1 = (c > max) ? c : max;
	float d;
	cout << "\n\tВведите четвертое число :";
	cin >> d;
	float max2 = (d > max1) ? d : max1;
	float e;
	cout << "\n\tВведите пятое число :";
	cin >> e;
	float max3 = (e > max2) ? e : max2;
	float f;
	cout << "\n\tВведите шестое число :";
	cin >> f;
	float max4 = (f > max3) ? f : max3;
	float g;
	cout << "\n\tВведите седьмое число :";
	cin >> g;
    float max5 = (g > max4) ? g : max4;
	float i;
	cout << "\n\tВведите восьмое число :";
	cin >> i;
    float max6 = (i > max5) ? i : max5;
	cout << "\n\t Ответ  : " << max6;
	cout << "\n";
	return 0;

}

