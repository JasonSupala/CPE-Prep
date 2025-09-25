#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int l = 0; l < t; l++){
        char c, eq;
        int n;
        cin >> c >> eq >> n;
        long long a;
        long long m[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a;
                m[i][j] = a;
            }
        }
        bool symmetric = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(m[i][j] != m[n - 1 - i][n - 1 - j] || m[i][j] < 0 || m[n-1-i][n-1-j] < 0){
                    symmetric = false;
                    break;
                }
            }
        }
        cout << "Test #" << l+1 << ": ";
        if(symmetric){
            cout << "Symmetric." << endl;
        } else {
            cout << "Non-symmetric." << endl;
        }

    }

    return 0;
}