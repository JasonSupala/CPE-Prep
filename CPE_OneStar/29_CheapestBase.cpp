#include <bits/stdc++.h>
#include <vector>
#include <climits>

using namespace std;

int calculateCost(int n, int b, int cost[36]){
    if(n == 0){
        return cost[0];
    }
    int total = 0;
    int x = n;
    while(x > 0){
        int dig = x % b;
        total += cost[dig];
        x /= b;
    }
    return total;
}

int main(){
    int n;
    cin >> n;
    for(int l = 0; l < n; l++){
        int cost[36];
        for(int i = 0; i < 36; i++){
            cin >> cost[i];
        }
        int t;
        cin >> t;
        int num;
        cout << "Case " << l + 1 << ":" << endl;
        for(int i = 0; i < t; i++){
            cin >> num;
            int min = INT_MAX;
            vector <int> v;
            for(int j = 2; j <= 36; j++){
                int totalCost = calculateCost(num, j, cost);
                if(totalCost < min){
                    min = totalCost;
                    v.clear();
                    v.push_back(j);
                } else if(totalCost == min){
                    v.push_back(j);
                }
            }
            cout << "Cheapest base(s) for number " << num << ": ";
            for(int j = 0; j < v.size(); j++){
                cout << v[j];
                if(j < v.size() - 1) cout << " ";
            }
            cout << endl;
        }
        if(l < n - 1) cout << endl;

    }

    return 0;
}