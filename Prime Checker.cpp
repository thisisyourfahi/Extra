// This code checks if the given number is a prime or not. 

#include <bits/stdc++.h>
using namespace std;

bool PrimeChecker(int n){
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    bool is_prime = PrimeChecker(n);

    if(is_prime){
        cout << "The number is a prime number." << endl;
    }
    else{
        cout << "The number is not a prime number." << endl;
    }
    return 0;
}
