#include<iostream>
using namespace std;

int main(){
    int n, x, y, z, c=0, result=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x >> y >> z;
        if(x==1){c++;}
        if(y==1){c++;}
        if(z==1){c++;}
        if(c>=2){result++;}
        c = 0;
    }
    cout << result;
}
