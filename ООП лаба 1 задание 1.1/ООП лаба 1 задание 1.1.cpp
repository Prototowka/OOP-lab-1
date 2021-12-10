#include <iostream>
#include <time.h>
#include <locale>
#include <fstream>

using namespace std;

int minimum(int a[10])
{
	int i, b = 1000;
	for (i = 0; i < 10; i++)
	{
		if (a[i] < b) { b = a[i]; }
	}
	return b;
}

int main()
{
	setlocale(LC_ALL, "ru");
	//Задание №1
	cout << endl << "Задание №1" << endl;
	int i, j=0;
	int n = 3;// Кол-во слагаемых
	float sum=0, f,x = 3;

	f = 1 / x;

	for (i = 0; i < n; i++)
	{
		sum += f;
		j++;
		f = f / (x + j);
	}
	cout << "sum=" << sum << endl;

	//Задание №2
	cout << endl << "Задание №2" << endl;
	int mas[10], min;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		mas[i] = rand() % 999;
		cout << mas[i] << endl;;
	}
	min = minimum(mas);
    cout << "min=" << min << endl;

	//Задание №3
	cout << endl << "Задание №3" << endl;
    int h[10], f1[10], f2[10];
    ifstream a;
    ofstream b;

    setlocale(LC_ALL, "RUSSIAN");

    cout << "f1=";
    a.open("f2.txt");
    for (i = 0; i < 10; i++)
    {
        a >> f1[i];
        cout << f1[i]<<" ";
    }
    a.close();
    cout << endl;
    cout << "f2=";
    a.open("f1.txt");
    for (i = 0; i < 10; i++)
    {
        a >> f2[i];
        cout << f2[i]<<" ";
    }
    a.close();
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        h[i] = f1[i];
        f1[i] = f2[i];
        f2[i] = h[i];
    }
    cout << endl << "Измененные файлы:" << endl << "f1=";
    b.open("f1.txt");
    for (i = 0; i < 10; i++)
    {
        b << f1[i] << " ";
        cout << f1[i]<< " ";
    }
    b.close();
    cout << endl << "f2=";
    b.open("f2.txt");
    for (i = 0; i < 10; i++)
    {
        b << f2[i] << " ";
        cout << f2[i]<< " ";
    }
    b.close();

    return 0;
}