/*
ID: ankit.s6
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    int a,b;
    int result1, result2;
    fin >> a >> b;
    for(int i=0; i<a.length(); i++){
        result1*=(static_cast<int>(a[i])-96);
    }
    for(int i=0; i<b.length(); i++){
        result2*=(static_cast<int>(b[i])-96);
    }
    if((result1)%47 == (result2)%47){
        fout << "GO" <<endl;
    }
    return 0;
}
