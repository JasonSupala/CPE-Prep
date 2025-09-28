#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m;
    while(cin >> n >> m){
        if (n < 1 || m < 1) {
            cout << "Boring!" << endl;
            continue;
        }

        if (m == 1) {
            if (n == 1) cout << "1\n";
            else cout << "Boring!\n";
            continue;
        }
        
        vector <long long> v;
        v.push_back(n);
        bool boring = false;
        while(n > 1){
            if(n % m == 0){
                n /= m;
                v.push_back(n);
            } else {
                boring = true;
                break;
            }
        }
        if(boring || v.back() != 1){
            cout << "Boring!" << endl;
        } else {
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
                if(i < v.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}