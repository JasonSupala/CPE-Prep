#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string line;
    map <char, int> letters; //let = letter
    int maxc = 0; //find max count
    for(int i = 0; i < n; i++){
        getline(cin, line);
        for(int j = 0; j < line.length(); j++){
            if(isalpha(line[j])){
                char letter = toupper(line[j]);
                letters[letter] += 1;
                if(letters[letter] > maxc){
                    maxc = letters[letter];
                }
            }
        }
    }
    for(int i = maxc; i > 0; i--){
        for(auto &p : letters){
            if(p.second == i){
                cout << p.first << " " << p.second << endl;
            }
        }
    }

    return 0;
}