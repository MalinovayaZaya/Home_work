/*Напишите программу заполняющую двумерный массив размера N×N диагоналями, как показано в примере.
           N=4
4 3 2 1
3 4 3 2
2 3 4 3
1 2 3 4 */

#include <iostream>
using namespace std;
  int main (){
   int n;
   cout << "enter the number of rows and columns ";
   cin >> n;
   int s=n;
   int A [n][n];
    for (int i = 0; i<n; i++){
    for (int j = i; j<n; j++){
        A[i][j] = s;
        s--;
        }
        s=n;
        }
   int d=1;
   int u=d;
   for(int i=n-1; i>0; i--){
    for(int j=0; j<i; j++){
        A[i][j]=d;
        d++;
    }
    u++;
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
