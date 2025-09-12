#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int n;
    string days[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int mdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for(int i = 0; i < n; i++){
        int m, d;
        cin >> m >> d;
        int tdays = 0;
        for(int j = 0; j < m - 1; j++){
            tdays += mdays[j];
        }
        tdays += d;
        cout << days[(tdays % 7)] << endl;
    }

    return 0;
}