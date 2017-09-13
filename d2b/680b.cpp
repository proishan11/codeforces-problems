#include<iostream>
using namespace std;
int ar[100];
int main(){
    int n,a,d,f,b,count=0,i;
    cin >> n >> a;
    int j=a-1;
    //cout<<j<<endl;
    for(i=0; i<n; ++i){cin>>ar[i];}
    for(i=1; j+i<n && j-i>=0; ++i){
        f = ar[j+i];
        b = ar[j-i];
        if(f==1 && b==1){count+=2;}
    }
    //cout << i<<endl;
    while(a-1+i < n){
        if(ar[a-1+i] == 1)
            count++;
        //cout << "count = " << count << endl;    
        i++;
    }
    while(a-1-i >=0){
        if(ar[a-1-i] == 1)
            count++;
        i++;
    }
    if(ar[a-1]==1)
        cout<<count+1;
    else
        cout<<count;
}