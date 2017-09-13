#include<iostream>
using namespace std;
char a[] = {'R','O','Y','G','B','I','V'};
int main(){
    int n;
    int i=7;
    cin >> n;
    while(i){
        cout << a[i-1];
        n=n-1;
        if(n==0){break;}
        if(i==1){i=8;}
        i--;
    }
}