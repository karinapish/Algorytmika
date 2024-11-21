#include <iostream>
using namespace std;

	int funkcja(int n) {
		int k = 2;
		while (n > 1){
			while (n%k==0){
				cout << k << " ";
				n = n/k;
			}
			k++;
		}
		return 0;	
	}

	
int main()
{
	int n;
	cout << "Podaj liczbe: " << endl;
	cin >> n;
	
	cout << "Czynniki pierwsze to: " ;
	funkcja(n);
	
	return 0;

}