#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string line;
    map <string, int> Countries;
    for(int i = 0; i < n; i++){
        getline(cin, line);
        string country;
        stringstream ss(line);
        ss >> country;
        Countries[country] += 1;
    }
    for(auto &p : Countries){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}