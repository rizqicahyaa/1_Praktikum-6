#include <bits/stdc++.h>
using namespace std;

void printLebarChar(char set[], string huruf,int n, int k)
{
    if (k == 0)
    {
        cout << (huruf) ;
        cout << " ";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newHuruf;
        newHuruf = huruf + set[i];
        printLebarChar(set, newHuruf, n, k - 1);
    }
}

void inputLebarChar(char set[], int k,int n)
{
    printLebarChar(set, "", n, k);
}
int main()
{
    char set1[] = {'a', 'b', 'c'};
    int k = 3;
    cout << "Jumlah karakter :"  ;  
	cin >> k;

    inputLebarChar(set1, k, 3);
}
