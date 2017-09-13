/*done*/
#include<iostream>
using namespace std;
int a[100000];
int main(){
    int n,maxVal;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        if(i==0){maxVal = a[i];}
        else{maxVal = max(a[i],maxVal);}
    }
    cout << maxVal;
    
}