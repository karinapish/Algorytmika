#include <iostream>
using namespace std;

int CalculatePowerRecursive(int podstawa, int wykladnik)
	{
		if (wykladnik == 0) {
			return 1;
		}
		else {
			return podstawa*CalculatePowerRecursive(podstawa, wykladnik-1);
		}
	
	}
	
	
int main()
{
	int podstawa;
	cout << "Podaj liczbe podstawowa: " << endl;
	cin >> podstawa;
	
	int wykladnik;
	cout << "Podaj wykladnik: " << endl;
	cin >> wykladnik;
	
	int wynik = CalculatePowerRecursive(podstawa, wykladnik);
	
	cout << podstawa << " do potegi " << wykladnik << " wynosi: " << wynik << endl;
	
	return 0;

}