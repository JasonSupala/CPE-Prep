#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    int test = 1;
    while(cin >> n){
        vector <int> v;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        //cin.ignore();
        if(cin.peek() == '\n'){
            cin.ignore();
        }
        map <int, int> index;
        bool seq = true;
        for(int i = 0; i < n; i++){
            if((i > 0 && v[i-1] >= v[i]) || v[i] < 1){
                seq = false;
                break; 
            }
            for(int j = i; j < n; j++){
                index[v[i] + v[j]]++;
                if(index[v[i] + v[j]] > 1){
                    seq = false;
                    break;
                }
            }
            if(!seq){
                break;
            }
        }
        cout << "Case #" << test << ": It is ";
        if(!seq){
            cout << "not ";
        }
        cout << "a B2-Sequence." << endl << endl;
        test++;
    }

    return 0;
}