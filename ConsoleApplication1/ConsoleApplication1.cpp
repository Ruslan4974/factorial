//Вычисление факториала числа
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	unsigned long long int N;
	cout << "N = ";
	cin >> N;

	srand(time(0));
	unsigned long long int F = 1;
	for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}

	if (N >= 0)
	{
		cout << "Time in sec. = " << clock() / 1000.0 << endl; // время работы программы      
		cout << F; 
	}

	return 0;
}