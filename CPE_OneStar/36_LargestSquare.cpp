#include <bits/stdc++.h>

using namespace std;

int check(int a, int b, vector <string>& matrix, char c, int m, int n){
    int rad = 0;
    int length = 0;
    while(1){
        if(a - rad < 0 || a + rad >= m || b - rad < 0 || b + rad >= n) break;
        bool fail = false;
        for(int i = a - rad; i <= a + rad; i++){
            for(int j = b - rad; j <= b + rad; j++){
                if(matrix[i][j] != c){
                    fail = true;
                    break;
                }
            }
            if(fail) break;
        }
        if(fail) break;
        length = rad * 2 + 1;
        rad++;
    }
    return length;
}

int main(){
    int x;
    cin >> x;
    for(int l = 0; l < x; l++){
        int m, n, q;
        cin >> m >> n >> q;
        vector <string> matrix(m);
        for(int i = 0; i < m; i++){
            cin >> matrix[i];
        }
        cout << m << " " << n << " " << q << endl;
        for(int i = 0; i < q; i++){
            int a, b;
            cin >> a >> b;
            char c = matrix[a][b];
            int length = check(a, b, matrix, c, m, n);
            cout << length << endl;
        }
    }

    return 0;
}