/*status : done */
/* interesting way to use insertion sort */
#include<iostream>
#include<string>

using namespace std;

int main(){
    int key, j, i;
    string a;
    cin >> a;
    for(i=2; i<a.length(); i=i+2){
        key = int(a[i]);
        for(j=i-2; j>=0 && int(a[j])>key; j=j-2){
            a[j+2] = a[j];
        }
        a[j+2] = key;
    }
    cout << a ;
}