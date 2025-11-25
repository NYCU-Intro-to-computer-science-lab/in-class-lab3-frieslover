#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int aux)
{
    if((from==1 && to==3) || (from==3 && to==1)){
      hanoi(n, from, aux, to);
      hanoi(n, aux, to, from);
    }
    else{
      if(n==1){
        cout << "Move disk 1 from " << from << " to " << to << endl;
      }
      else{
        hanoi(n-1, from, aux, to);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        hanoi(n-1, aux, to, from);
      }
    }
    
    
}

int main() {
    int n; cin >> n;
    hanoi(n, 1, 3, 2);

    return 0;
}
