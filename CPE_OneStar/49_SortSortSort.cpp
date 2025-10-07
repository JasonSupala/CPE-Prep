#include <bits/stdc++.h>

using namespace std;

int n, m;
bool cmp(int a, int b){
    if(a % m == b % m){
        if((a&1) == 1 && (b&1) == 1){
            return a > b;
        } else if( (a&1) == 0 && (b&1) == 0){
            return a < b;
        } else{
            return (a&1) == 1;
        }
    }
    return a % m < b % m;
}

int main(){
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n, cmp);
        cout << n << " " << m << endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << endl;
        }
    }
    cout << "0 0" << endl;

    return 0;
}