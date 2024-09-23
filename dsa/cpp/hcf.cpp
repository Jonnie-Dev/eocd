#include <iostream>

using namespace std;

#include <stdio.h>

// Function to return the GCD of a and b
int gcd(int a, int b) {
    if (b == 0)
        return a;
    if (a == 0)
        return b;

    if (a == b) 
        return a;

    if (a > b) {
        return gcd(a - b, b); 
    }

    return gcd(a, b-a);
}


int main() {
    int a, b;
    cin >> a >> b;
    int min_num;
    long res;

    if (a == b) {
        res = a;
    } else {   
        // Loop approach
        // if (a < b) {
        //     min_num = a;
        // } else {
        //     min_num = b;
        // }
        
        // for(int i = 1; i <= b; i++) {
        //     if (a % i == 0 && b % i == 0 ) {
        //         res = i;
        //     }
        // }
        res = gcd(a,b);
    }
    
    cout << res << "\n";
    return 0;
}