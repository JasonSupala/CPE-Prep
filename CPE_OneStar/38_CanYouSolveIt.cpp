#include <bits/stdc++.h>

using namespace std;

int fibsteps(int n){
    if(n == 1) return 1;
    if(n == 2) return 3;
    if(n % 2 != 0){
        int div = n/2 + 1;
        return n * div;
    } else if(n % 2 == 0){
        int div = n / 2;
        return (n * div) + div;
    }
}

int main(){
    int n;
    cin >> n;
    for(int l = 0; l < n; l++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long moves1 = 0, moves2 = 0; 
        moves1 = x1 + fibsteps(x1 + y1);
        moves2 = x2 + fibsteps(x2 + y2);
        long long moves = moves2 - moves1;
        cout << "Case " << l+1 << ": " << moves << endl;
    }
    return 0;
}