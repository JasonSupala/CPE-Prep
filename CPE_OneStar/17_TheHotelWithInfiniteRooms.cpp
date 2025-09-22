#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    while(cin >> a && cin >> b){
        long long currentDay = 1;
        while(true){
            long long lastDay = currentDay + a - 1;
            if(b <= lastDay){
                cout << a << endl;
                break;
            }
            currentDay = lastDay + 1;
            a++;
        }
    }


    return 0;
}