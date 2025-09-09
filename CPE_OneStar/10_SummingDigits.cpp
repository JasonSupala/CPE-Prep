#include <iostream>
#include <string>

using namespace std;

int main(){
    string inp;
    while(cin >> inp){
        if(inp == "0"){
            break;
        }
        while(inp.length() > 1){
            int sum = 0;
            for(int i = 0; i < inp.length(); i++){
                int num = inp[i] - '0';
                sum += num; 
            }
            inp = to_string(sum);
        }
        cout << inp << endl;
    }
    
    return 0;
}