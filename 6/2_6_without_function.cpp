// Напишите программу заполняющую квадратный двумерный массив, как показано в примере. На главной диагонали стоят нули, а на остальных - удаление от главной диагонали.
#include <iostream>
using namespace std;
  int main (){
   int n;
   cout << "enter the number of rows and columns ";
   cin >> n;
   int s=0;
   int A [n][n];
    for (int i = 0; i<n; i++){
    for (int j = i; j<n; j++){
        A[i][j] = s;
        s++;
        }
        s=0;
        }
   int d=n-1;
   int u=d;
   for(int i=n-1; i>0; i--){
    for(int j=0; j<i; j++){
        A[i][j]=d;
        d--;
    }
    u--;
    d=u;
   }
    cout<<"Array:  "<< endl;
    for (int i = 0; i < n; i++){
    cout<<endl;
        for (int j = 0; j < n; j++){
            cout << A[i][j] << " ";
    }
}
return 0;
}
