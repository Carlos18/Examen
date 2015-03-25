#include <iostream>
using namespace std;

int main()
{
	unsigned int i,j,n,k;
	cout << "Programa para imprimir un triangulo" << endl;
	cout << "Ingrese dimensiones: ";
	cin >> n;
	for (i = 1; i< n+1; i++)
	{
		for (j = n-i; j > 0; j--)
		{
			cout << " ";
		}
		for (k = 1; k < 2*i; k++)
		{
			cout << "T";
		}
		cout << " " << endl;
	}
	return 0;
}
