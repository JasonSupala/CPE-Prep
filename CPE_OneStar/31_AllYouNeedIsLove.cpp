#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    for(int l = 0; l < n; l++){
        string a, b;
        cin >> a;
        cin >> b;
        int vala = stoi(a, nullptr, 2);
        int valb = stoi(b, nullptr, 2);
        cout << "Pair #" << l + 1 << ": ";
        if(gcd(vala, valb) > 1){
            cout << "All you need is love!" << endl;
        } else {
            cout << "Love is not all you need!" << endl;
        }
    }

    return 0;
}