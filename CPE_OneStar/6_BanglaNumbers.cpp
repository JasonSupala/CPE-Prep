#include <iostream>

using namespace std;

void bangla(long long int num, bool &first){
    if(num >= 10000000){
        bangla(num / 10000000, first);
        cout << (first ? "" : " ") << "kuti";
        num %= 10000000;
        first = false;
    } 
    if(num >= 100000){
        cout << (first ? "" : " ") << num / 100000 << " lakh";
        num %= 100000;
        first = false;
    }
    if(num >= 1000){
        cout << (first ? "" : " ") <<  num / 1000 << " hajar";
        num %= 1000;
        first = false;
    }
    if(num >= 100){
        cout << (first ? "" : " ") << num / 100 << " shata";
        num %= 100;
        first = false;
    }
    if(num > 0){
        cout << (first ? "" : " ") << num;
        first = false;
    }
}

int main(){
    long long int inp, kuti = 10000000;
    int count = 0;
    while(cin >> inp){
        count++;
        printf("%/4d. ", count);
        if(inp == 0){
            cout << "0";
        } else {
            bool first = true;
            bangla(inp, first);
        }
        cout << endl;
    }
    
    return 0;
}