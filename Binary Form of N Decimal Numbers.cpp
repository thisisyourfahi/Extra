// This program convert decimal number to it's binary form for a particular range.

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
    int x, y;
    cin >> x >> y;
    for(int i = x; i <= y; i++){
        cout << convert(i) << endl;
    }
    
    return 0;
}
