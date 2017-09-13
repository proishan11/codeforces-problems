#include<iostream>
using namespace std;
int a[150000];
int main(){
    int n,k,sum=0,m=0,minIndex=0;
    cin >> n >> k;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=0; i<k; ++i){sum+=a[i];}
    m = sum;
    for(int i=1; i<=n-k; ++i){
        sum -= a[i-1];
        sum += a[i+k-1];
        ///cout << "sum =" << sum << " " << " m = " << m<<endl;
        if(m>sum){
            m = sum;
            minIndex = i;
        }
        
    }
    cout << minIndex+1;
}