//Напишите программу заполняющую квадратный двумерный массив, как показано в примере. На главной диагонали стоят нули, а на остальных - удаление от главной диагонали.
#include <iostream>
#include <math.h>
using namespace std;
bool palindrom(long long int N) {
long long a, b = 0;
for (a = N; a > 0; a /= 10)
b = b * 10 + a % 10;
return b == N;
}
void palindrom(long long int n){
if (n == 1){
cout << 9;
return;
}
if (n == 2){
cout << 99;
return;
}
long long A = 0;
if (n % 2 == 0)
A = pow(10, n - 1) + 1 + 88 * (pow(10, n / 2 - 1));
else
A = pow(10, n - 1) + 1 + 7 * (pow(10, n / 2));
long long M = pow(10, n);
for (A; A < M; A += 9) {
if (palindrom(A) == true) {
cout << A << "  is a palindrome which is divided into 9 " << endl;
}
}
}
int main(){
long long n;
cout << "Enter the length of the palindromes :";
cin >> n;
palindrom(n);
return 0;
}
