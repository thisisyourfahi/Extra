/*  The formuula to calculate the binomial coefficient is 
    nCr = n! / (r! * (n - r)!)

    I have created two functions here. 'factorial' funtion return the factorial for a particular number. 
    The 'nCr' function returns the nCr.
*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
     int fact = 1;

     while(n > 0){
        fact *= n;
        n--;
     }
     return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_nmr * fact_r);
}

int main(){
    int n; 
    int r;
    cin >> n >> r;

    cout << nCr(n, r) << endl;
    return 0;
}
