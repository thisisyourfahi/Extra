// This program convert a decimal number to it's binary form manually

#include <bits/stdc++.h>
using namespace std;

int convert(int n){
    int ans = 0;
    int pow = 1;

    while(n > 0){
        int rem = n % 2;
        n /= 2;
        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << convert(n) << endl;
    return 0;
}
