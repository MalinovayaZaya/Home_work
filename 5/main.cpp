#include <iostream>
using namespace std;
int main(){
   int n;
   cout << "Input numbers of array ";
   cin >> n;
   int a[n];
   for (int i=0; i<n; i++){
    cout << "Enter the element number " << i+1 << endl;
    cin >> a[i];
   }
   int s=0;
   cout << "Elements: " << endl;
   for (int i=0; i<n; i++){
        for (int j=1; j<=a[i]; j++){
             if (a[i]%j==0) s++;
          }
          if(s==3) cout << a[i] << endl;
          s=0;
        }
    delete[]a;
    return 0;
}
