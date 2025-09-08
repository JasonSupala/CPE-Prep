#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int a, b;
    vector <int> v; //to store the carry operations
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        int carries = 0; //carries = carry operations
        int carry = 0; //to check if there was a carry in the most recent operation or not
        while(a > 0 || b > 0){
            if((a % 10) + (b % 10) + carry >= 10){
                carries++;
                carry = 1;
            } else {
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }
        v.push_back(carries);
    }

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0){
            cout << "No carry operation." << endl;
        } else if(v[i] == 1){
            cout << v[i] << " carry operation." << endl;
        } else {
            cout << v[i] << " carry operations." << endl;
        }
    }

    return 0;
}