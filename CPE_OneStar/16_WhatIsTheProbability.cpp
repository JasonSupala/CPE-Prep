#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int s;
    cin >> s;
    for(int i = 0; i < s; i++){
        int n;
        double p;
        int player; 
        cin >> n >> p >> player;
        if(p == 0){
            cout << fixed << setprecision(4) << 0.0 << endl;
            continue;
        }
        double q = 1 - p;
        double chance = (pow(q, player - 1) * p) / (1 - pow(q, n));
        cout << fixed << setprecision(4) << chance << endl;
    }
    
    return 0;
}