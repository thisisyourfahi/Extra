#include <bits/stdc++.h>
using namespace std;

int convert(int n){
    int ans = 0; 
    int pow = 1;

    while(n > 0){
        int rem = n % 10;
        n = n / 10;
        ans += rem * pow;
        pow = pow * 2;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << convert(n) << endl;
    return 0;
}
