#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        int inp = a;
        vector <int> fib;
        fib.push_back(1);
        fib.push_back(1);
        while(fib.back() < a){
            fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
        }
        string output = "";
        bool inserted = false;
        for(int j = fib.size() - 1; j > 0; j--){
            if(a >= fib[j] && !inserted){
                a -= fib[j];
                output += "1";
                inserted = true;
            } else {
                output += "0";
                inserted = false;
            }
        }
        int one;
        output = output.substr(output.find('1'));
        cout << inp << " = " << output << " (fib)" << endl;
    }


    return 0;
}