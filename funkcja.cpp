#include <iostream>
using namespace std;

void MaxFun(int tab[]){
int max;
for(int i=0; i<5; i++)
        max = tab[i];
	//return ;
}


int main()
{
    
    int liczby[5];
    cout << "Podaj 5 liczb: ";
    for(int i=0; i<5; i++)
        cin >> liczby[i];
    MaxFun(liczby);
    cout << "Najwieksza liczba: " << endl;
//	for(int i=0; i<5; i++)
//        cout << liczby[i];
    system("pause");
    return 0;
}