#include <iostream>
#include <conio.h>
using namespace std;
void hanoi(int n, char dari, char bantu, char tujuan){
if (n == 1){
cout << "Pindahkan disc " <<n << " dari pasak " << dari << " ke pasak "<< tujuan << "\n";
}
else
{
hanoi(n-1, dari, tujuan, bantu);
hanoi(1, dari, bantu, tujuan);
hanoi(n-1, bantu, dari, tujuan);
}
}

int main(){
int n;
cout << "Jumlah Disc: ";
cin >> n;
cout<<"Langkah-langkah nya adalah dengan : \n";
hanoi(n, 'A', 'B', 'C');
cout<<endl;
getch();
}

