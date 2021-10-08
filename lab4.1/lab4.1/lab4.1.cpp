// lab4.2.cpp
// Сташкевич Владислав
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, k, N; 
	double sum = 0;

	cout << "Enter k: "; cin >> k;
	cout << "Enter N: "; cin >> N;

	i = k;

	while (i <= N) {
		sum += sin(i) * cos(i) / (1 + pow(sin(i), 2));
		i++;
	}

	cout << "Result 1: " << sum << endl;
	sum = 0;
	i = k;

	do {
		sum += sin(i) * cos(i) / (1 + pow(sin(i), 2));
		i++;
	} while (i <= N);

	cout << "Result 2: " << sum << endl;
	sum = 0;

	for (i = k; i <= N; i++) {
		sum += sin(i) * cos(i) / (1 + pow(sin(i), 2));
	}

	cout << "Result 3: " << sum << endl;
	sum = 0;

	for (i = N; i >= k; i--) {
		sum += sin(i) * cos(i) / (1 + pow(sin(i), 2));
	}

	cout << "Result 4: " << sum << endl;

	return 0;
}