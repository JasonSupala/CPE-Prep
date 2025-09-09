#include <iostream>
#include <string>

using namespace std;

int main(){
    string num = "`1234567890-=";
    string top = "qwertyuiop[]\\";
    string mid = "asdfghjkl;'";
    string bot = "zxcvbnm,./";
    char c;
    while(cin.get(c)){
        c = tolower(c);
        for(int i = 0; i < 13; i++){
            if(c == num[i]){
                c = num[i - 2];
            } else if(c == top[i]){
                c = top[i - 2];
            } else if(c == mid[i]){
                c = mid[i - 2];
            } else if(c == bot[i]){
                c = bot[i - 2];
            }
        }
        cout << c;
    }


    return 0;
}