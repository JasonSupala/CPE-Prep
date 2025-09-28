#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int reverse(int n){
    int newn = 0;
    while(n > 0){
        newn = newn * 10 + n % 10;
        n /= 10;
    }
    return newn;
}

int main(){
    int n;
    while(cin >> n){
        bool prime = isPrime(n);
        bool emirp = false;
        if(prime){
            int rev = reverse(n);
            if(rev != n && isPrime(rev)) emirp = true;
        }
        if(emirp){
            cout << n << " is emirp." << endl;
        } else if(prime && !emirp){
            cout << n << " is prime." << endl;
        } else {
            cout << n << " is not prime." << endl;
        }
    }

    return 0;
}