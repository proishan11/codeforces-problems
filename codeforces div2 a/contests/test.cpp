#include<iostream>
using namespace std;
int main(){
    long int l,r,x,y,k;
    double temp;
    cin >> l>>r>>x>>y>>k;
    
    for(int i=l; i<=r; ++i){
        for(int j=x; j<=y; ++j){
            if(l/j > k || r /j < k){break;}
            temp = static_cast<double>(i)/j;
            if(temp == k){
                cout << "YES";
                exit(0); 
            }
        }
    }
    cout << "NO";
}
