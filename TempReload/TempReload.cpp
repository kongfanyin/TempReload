#define _CRT_SECURE_NO_WARNINGS 1

template<class T>void ShowArray(T arr[],int n);
template<class T>void ShowArray(T* arr[], int n);
#include<string>
#include<fstream>
#include<iostream>
struct debts
{
	char name[20];
	double amount;
};

int main(char argc, char** argv)
{
	using namespace std;
	int things[6] = { 133,255,643,345,23,433 };
	debts Mre[3]=
	{
		{"Ima",2400.0},
	{"Ura",1300.0},
	{"Iby",1800.0}
	};
	double* pd[3];
	//set pointers to the amount members of structures in Mre
	for (int i = 0; i < 3; i++)
	{
		pd[i] = &Mre[i].amount;
	}
	cout << "listing MRe's count of things: \n";
	//things is an Array of int
	ShowArray(things, sizeof(things)/sizeof(things[0]));
	//pd is an Array point to double
	ShowArray(pd, sizeof(pd) / sizeof(pd[0]));
	return 0;
}
template<class T>void ShowArray(T* arr[], int n)
{
	using namespace std;
	cout << "tempalate B" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *arr[i] << "," ;
	}
}
template<class T>void ShowArray(T arr[], int n)
{
	using namespace std;
	cout << "use template A"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ",";
	}
}