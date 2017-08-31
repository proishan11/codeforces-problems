// Problem 2 way to long words
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n, length;
    cin >> n;
    string a[n], test;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for (int i=0; i<n; ++i){
        test = a[i];
        if(test.length() <= 10)
            cout << test << endl;
        else{
            length = test.length();
            cout <<test[0]<<(length-2)<<test[length-1]<<endl; 
        }
    }
}