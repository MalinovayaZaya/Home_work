#include <iostream>
using namespace std;
int phi (int n) {
if (n==1) return 0;
else{
int result = n;
for (int i=2; i*i<=n; ++i)
if (n % i == 0) {
while (n % i == 0)
n /= i;
result -= result / i;
}
if (n > 1)
result -= result / n;
return result;
}
}
int main()
{int n;
cout<<"Enter the denominator ";
cin>>n;
cout<<n-phi(n);
return 0;
}
