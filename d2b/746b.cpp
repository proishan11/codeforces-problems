#include<iostream>
#include<string>
using namespace std;



int main(){
    int n;
    string result;
    cin >> n;
    string s;
    cin >> s;
    if(n%2 == 0){
        for(int i=0; i<n; ++i){
            if(i%2 != 0){
                result.push_back(s[i]);
                
            }
            else{result.insert(0,1,s[i]);}
        }
    }
    else{
        for(int i=0; i<n; ++i){
            if(i%2 != 0){result.insert(0,1,s[i]);}
            else{result.push_back(s[i]);}
        }
    }
    cout << result;
        
    
    
}