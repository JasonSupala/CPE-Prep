#include <iostream>
#include <string>

using namespace std;

int main(){
   string inp;
    while(1){
        cin >> inp;
        if(inp == "0"){
            break;
        }
        int odd = 0;
        int even = 0;
        int dig;
        for(int i = 0; i < inp.length(); i++){
            dig = inp[i] - '0';
            if(i % 2 == 0){
                even += dig;
            } else {
                odd += dig;
            }
        }
        if((even - odd) % 11 == 0){
            cout << inp << " is a multiple of 11." << endl;
        } else {
            cout << inp << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}