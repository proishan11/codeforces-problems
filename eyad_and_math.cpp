/*incomplete*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    long long a,b,c,d;
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> a>>b>>c>>d;
        if(b*log(a) > d*log(c)){cout << ">";}
        else{cout << "<" <<endl;}
    }
}