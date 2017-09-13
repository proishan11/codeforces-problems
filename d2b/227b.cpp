#include<iostream>
using namespace std;
int a[100000];
int buffer1[100000] = {0};
int buffer2[100000] = {0};
int main(){
    int n,m,count1=0,count2=0,x;
    cin >> n;
    for(int i=0; i<n; ++i){cin >> a[i];}
    cin >> m;
    for(int i=0; i<m; ++i){
        cin >> x;
        if(buffer1[x]!=0){count1+=buffer1[x];
            //cout <<"c1 = " << count1;
        }
        else{
            for(int j=0; j<n; ++j){
                if(a[j] == x){
                    count1 += j+1;
                    buffer1[x] = j+1;
                    //cout << "count1" << " "<< count1;
                    break;
                }
            }
        }
        if(buffer2[x]!=0){count2+=buffer2[x];}
        else{
            for(int j=n-1; j>=0; --j){
                if(a[j] == x){
                    count2 += n-j;
                    buffer2[x] = n-j;
                    break;
                }
            }
        }
    }
    cout << count1 << " " << count2;
}