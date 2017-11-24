#include <iostream>

using namespace std;
bool Pr(int n)
{
    if (n == 2) return 1;
    if (n < 2 || n % 2 == 0) return 0;
    for (int i = 3; i*i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
   int N;
   cout << "How many elements in array? ";
   cin >> N;
  int A[N];
   for(int i=0;i<N;i++){
    cout << "input elemetn " << i+1 << endl;
    cin >> A[i];
   }
   cout << "new array: ";
   int s=0;
   for(int i=0; i<N; i++){
    if(Pr(A[i])==0){
        cout << A[i] << " ";
    }
    else{
        for (int j=0; j<N;j++){
            if(A[i]==A[j] && i!=j) s++;
        }
        if(s==0){
            cout << A[i] << " ";
        }
    }
    s=0;
   }
   delete []A;
    return 0;
}
