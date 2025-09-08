#include <iostream>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        int inpa = a;
        int inpb = b;
        if(a > b){
            swap(b, a);
        }
        int maxc = 0; // maxc = max cycle
        for(long long i = a; i <= b; i++){
            int c = 1; // c = cycle
            long long n = i;
            while(n != 1){
                if(n % 2 == 0 && n != 1){
                    n /= 2;
                    c++;
                } else {
                    n = ( 3 * n ) + 1;
                    c++;
                }
            }
            if(c > maxc){
                maxc = c;
            }
        }
        cout << inpa << " " << inpb << " " << maxc << endl;
    }

    return 0;
}