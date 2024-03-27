#include<iostream>
using namespace std;
int fib(int n) {
    if ((n == 1) || (n == 0))
    {
        return n;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}
int main() {
    int x, i = 0;
    cin >> x;
   
    while (i <= x)
    {
        cout<< fib(i)<<" ";
        i++;
    }
    return 0;
}