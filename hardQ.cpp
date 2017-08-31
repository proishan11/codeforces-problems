#include<iostream>
using namespace std;
int main(){
    int t,x,y,result;
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> y >> x;
        result = 100*y/(100 + x);
        cout << result << endl;
    }
}