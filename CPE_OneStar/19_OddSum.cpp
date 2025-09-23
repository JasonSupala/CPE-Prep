#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a;
        cin >> b;
        if(a % 2 == 0){
            a += 1;
        }
        if(b % 2 == 0){
            b -= 1;
        }
        int sum = 0;
        for(int j = a; j <= b; j+=2){
            sum += j;
        }
        cout << "Case " << i+1 << ": " << sum << endl;
    }

    return 0;
}