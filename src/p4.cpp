// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分
#include <iostream>
using namespace std;

int fib(int n, int count)
{
    for(int i=0 ; i<count ; i++){
      cout << "\t";
    }
    
    cout << "SEARCH fib(" << n << ")" << endl;
    
    int num=0;
    if(n>2){
      num = fib(n-1, 1+count)+fib(n-2, 1+count);
    }
    else{
      num = 1;
    }
    for(int i=0 ; i<count ; i++){
      cout << "\t";
    }
    cout << "GET fib(" << n << ") = " << num << endl;
    return num;
}

int main() {
    int n; cin >> n;
    fib(n, 0);
    return 0;
}
