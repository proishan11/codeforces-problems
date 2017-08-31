#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

bool isVovel(char a){
    if (a=='a')
        return true;
    else if(a == 'e')
        return true;
    else if(a == 'i')
        return true;
    else if(a == 'o')
        return true;
    else if(a == 'u')
        return true;
    else if(a == 'y')
        return true;
    else
        return false;
}


int main(){
    string a, output;
    cin >> a;
    for(int i=0; i<a.length(); ++i){
        a[i] = tolower(a[i]);
        if(!isVovel(a[i])){
            output.push_back('.');
            output.push_back(a[i]);
        }
    }
    cout << output << endl;
    return 0;
}