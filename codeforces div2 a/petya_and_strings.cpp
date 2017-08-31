/*author : yagami.light */
/*status : submitted*/ 

#include<iostream>
#include<string>
#include<ctype.h>
#include<cstring>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int counter;
    for(int i=0; i<a.length(); ++i)
        a[i] = tolower(a[i]);
    
    for(int i=0; i<b.length(); ++i)
        b[i] = tolower(b[i]);
    
    cout << strcmp(a.c_str(),b.c_str());
}