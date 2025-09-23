#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int x;
    while(cin >> x){
        cin.ignore();
        string line;
        getline(cin, line);
        stringstream ss(line);
        int a;
        vector <int> v;
        while(ss >> a){
            v.push_back(a);
        }
        int dv = 0;
        int poly = 1;
        long long power = 1;
        for(int i = v.size() - 2; i >= 0; i--){
            dv += poly * v[i] * power;
            poly++;
            power *= x;
        }
        cout << dv << endl;
    }

    return 0;
}