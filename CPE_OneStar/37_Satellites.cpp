#include <bits/stdc++.h>

using namespace std;

int main(){
    const double PI = 3.14159265358979323846;
    int s, a;
    string str;
    while(cin >> s >> a >> str){
        double angle = a;
        if(str == "min"){
            angle /= 60.0;
        }
        while(angle > 360){
            angle -= 360.0;
        }
        while(angle < 0){
            angle += 360.0;
        }
        if(angle > 180){
            angle = 360 - angle;
        }
        double r = 6440.0 + s;
        double rad = (angle/180.0) * PI;
        double arc = r * rad;
        double chord = 2 * r * sin(rad / 2);
        cout << fixed << setprecision(6) << arc << " " << chord << endl;
    }

    return 0;
}