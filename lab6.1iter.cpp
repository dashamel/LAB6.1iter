#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Mas(int c[], int size, int Law, int High) 
{
	for (int i = 0; i < size; i++)
		c[i] = rand() % (High - Law + 1) + Law;

}
void Print(int c[], int size)
{
	for( int i = 0; i < size; i++) 
		cout << c[i] << " ";
	cout << endl; 

}
int Count(int c[], int size)
{
	int count = 0;
	for( int i = 0; i < size; i++) 
		if (!(c[i] % 2 == 0 || i % 13 == 0)) 
		{
			count++;
		}
	return count;
 
}
int Summ(int c[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		if (!(c[i] % 2 == 0 || i % 13 == 0))
		{
			sum += c[i];
		}
	return sum;
}
void Zero(int c[], int size)
{
	for (int i = 0; i < size; i++)
		if (!(c[i] % 2 == 0 || i % 13 == 0))
		{
			c[i] = 0;
		}
}

int main()
{
	const int size = 21; 
	const int High = 15; 
	const int Law = 85; 
	int c[size];

	srand(static_cast<unsigned>(time(0))); 

	Mas(c, size, High, Law); 
	cout << "Origin Mas: "; 
	Print(c, size);  

	int count = Count(c, size);  
	cout << "Count: " << count << endl; 

	int sum = Summ(c, size);
	cout << "Summ: " << sum << endl;

	Zero(c, size);

	cout << "Modified Mas:  ";   
	Print(c, size);

	return 0;
}