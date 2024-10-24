#include <iostream>
using namespace std;

	int funkcja(int a, int n){
		
		if (n==0){
			return 1;}	
		else if (n%2==0){
			return funkcja(a*a, n/2);}
		else {
			return a*funkcja(a, n-1);}
			
		
	}
	
int main()
{
	int a;
	cout << "Podaj baze (a): " << endl;
	cin >> a;
	
	int n;
	cout << "Podaj wykladnik (n): " << endl;
	cin >> n;
	
	int wynik=funkcja(a, n);
	cout << wynik << endl;
	
	return 0;
}