#include<iostream>
using namespace std;
int a[100000];
int main(){
    int n,diff;
    cin >> n;
    for(int i=0; i<n; ++i){cin >> a[i];}
    for(int i=0; i<n-1; ++i){
        diff += a[i]-a[i+1];
        //cout << diff << " ";
    }
    //cout << endl;
    if(diff<0){cout << a[0]-diff;}
    else{cout<<a[0];}
}