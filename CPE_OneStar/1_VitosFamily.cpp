#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int output[n];
    for(int i = 0; i < n; i++){
        int rels; //rels = number of relatives
        cin >> rels;
        int street[rels];
        for(int j = 0; j < rels; j++){
            cin >> street[j];
        }
        sort(street, street + rels); //use builtin sort for faster and more efficient processing
        int med = street[rels/2]; //use median for faster and more efficient processing
        int d = 0; //d = distance
        for(int j = 0; j < rels; j++){
            d += abs(street[j] - med);
        }
        output[i] = d;
    }
    for(int i = 0; i < n; i++){
        cout << output[i] << endl;
    }

}