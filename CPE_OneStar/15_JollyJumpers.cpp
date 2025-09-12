#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string inp;
    int n;
    while(getline(cin, inp)){
        stringstream ss(inp);
        ss >> n;
        vector <int> v;
        vector <int> dif;
        for(int i = 0; i < n; i++){
            int x;
            ss >> x;
            v.push_back(x);
            if(i >= 1){
                dif.push_back(abs(v[i] - v[i-1]));
            }
        }
        sort(dif.begin(), dif.end());
        bool jolly = true;
        for(int i = 1; i < dif.size(); i++){
            if(dif[i - 1] + 1 != dif[i]){
                jolly = false;
                break;
            }
        }
        if(jolly){
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }


    return 0;
}