//Напишите программу, находящую все натуральные составные числа не превосходящие N. Программа должна быть эффективной по времени. 

#include <iostream>

using namespace std;

int main()
{   int n;
    cout << "Input N ";
    cin >> n;
    int*A=new int[n];
    for( int i=0; i<n; i++){
    A[i]=i;
        }
   int s=0;
for(int i=0; i<n;i++){
        for(int k=2;  k<(A[i]) ; k++){
            if(A[i]%k==0){
                s++;
            }
        }
  if(s!=0){
    cout << A[i] << "  ";
    s = 0;
  }
        }
        delete []A;
    return 0;
}
