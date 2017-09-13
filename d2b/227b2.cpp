//optimal 592ms

#include<iostream>
using namespace std;
int pos[100000];
int main(){
    int n,m,x,y;
    long long count1=0, count2=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x;
        pos[x] = i+1;
    }
    cin >> m;
    for(int i=0; i<m; ++i){
        cin >> y;
        count1 += pos[y];
        count2 += n-pos[y]+1;
    }
    cout << count1 <<" "<<count2; 
}   