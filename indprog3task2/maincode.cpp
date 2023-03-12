#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");

	int size;
	cout << "Ââåäèòå êîëè÷åñòâî äðîáåé -> "; cin >> size;
	cout << "\n";
	rational* arr = new rational[size];
	int a, b;

	cout << "Ââîäèòü ÷èñëà íóæíî ñòðîãî ÷åðåç ïðîáåë\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Ââåäèòå ÷èñëèòåëü è çíàìèíàòåëü äðîáè íîìåð " << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a,b);
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\nÄðîáü íîìåð " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << "\n";

	delete[] arr;

	return 0;
}
