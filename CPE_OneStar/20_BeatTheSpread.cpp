#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int s, d;
        cin >> s >> d;
        if(d > s || (s + d) % 2 == 1){
            cout << "impossible" << endl;
            continue;
        }
        int x;
        x = (s - d) / 2;
        cout << x + d << " " << x << endl;
    }


    return 0;
}