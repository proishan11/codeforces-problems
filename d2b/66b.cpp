#include<iostream>
using namespace std;
int a[1000];

int main(){
    int n,count=0, max_count=0, key, j;
    cin >> n;
    for(int i=0; i<n; ++i){cin >> a[i];}
    for(int i=0; i<n; ++i){
        key = a[i];
        j=i;
        while(j>=0){
            if(a[j]<=key){
                count+=1;
                key = a[j];
            }
            else{break;}
            j--;
        }
        key = a[i];
        j=i+1;
        while(j<n){
            if(a[j]<=key){
                count+=1;
                key = a[j];
            }
            else{break;}
            j++;
        }
        max_count = max(count, max_count);
        count = 0;
        }
    cout<<max_count;
    }
    
