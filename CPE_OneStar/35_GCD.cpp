#include <bits/stdc++.h>

using namespace std;

long long gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
} 

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        long long g = 0;
        for(int i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                g += gcd(i, j);
            }
        }   
        cout << g << endl; 
    }

    return 0;
}