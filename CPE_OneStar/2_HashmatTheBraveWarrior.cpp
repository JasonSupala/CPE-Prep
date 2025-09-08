#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int a, b;
    while(cin >> a >> b){
        cout << llabs(b-a) << endl;
    }

    return 0;
}