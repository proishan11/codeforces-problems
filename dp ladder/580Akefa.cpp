#include<iostream>
using namespace std;
int main(){
    int n,best=0,curr_best=0;
    cin >> n;
    long long a[n],current;
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    current = a[0];
    for(int i=1; i<n; ++i){
        if(a[i]>=current){
            curr_best += 1;
        }
        else{
            best = max(best, curr_best);
            curr_best = 0;
        }
        current = a[i];
        
    }
    best = max(best, curr_best);
    cout << best+1;
}