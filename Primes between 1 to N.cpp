#include <bits/stdc++.h>
using namespace std;

bool PrimeChecker(int i){
    for(int j = 2; j * j <= i; j++){
        if(i % j == 0){
            return false;
        }
    }
    return true;
}

void PrintThePrimes(int n){
    for(int i = 2; i <= n; i++){
        if(PrimeChecker(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;

    if(n < 2){
        cout << "Nop prime number in this range." << endl;
        return 0;
    }
    
    cout << "Prime numbers between 1 to " << n << " : " << endl;
    PrintThePrimes(n);
    return 0;
}
