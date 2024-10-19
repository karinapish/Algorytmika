#include <iostream>
using namespace std;

	int funkcja(int szukana, int tab[]){
	int l=0;
	int p=15;
	int sr=(l+p)/2;
		while(l<=p){
			if (tab[sr]==szukana){
				cout << "Liczba " << szukana <<" wystepuje w zbiorze w komorce o indeksie: " << sr << endl;
				return sr;}
			else if (tab[sr]>szukana){
				p=sr-1;
				sr=p;
			}
			else{
				l=sr+1;
				sr=l;
			}
		}
		//sr=(l+p)/2;
		cout << "Podana liczba nie wystêpuje w zbiorze :((";
		return -1;
	}
	
int main()
{
	int szukana; 
	cout << "Podaj liczbe ktora chcesz znalezc: " << endl;
	cin >> szukana;
	
	int tab[15]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	
	funkcja(szukana, tab);
	
	return 0;
}
