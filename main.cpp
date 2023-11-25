#include "main.hpp"

int main()
{
	const int N = 10;
	Students s[N];

	makeStudents(s, N);
	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
	bubbleSort(s, N);
	cout << "After Sorting \n";
	printStudents(s, N);
}