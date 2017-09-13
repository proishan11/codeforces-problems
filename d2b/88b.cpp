#include<iostream>
#include<vector>
#include<ctype.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n,m,x,q,count=0;
    vector< pair<int, int> > s;
    vector<char> buffer;
    cin >> n >> m >> x
    char **a = new char*[n]
    for(int i=0; i<n; ++i){
        a[i] = new char[m];
    }
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j){
            cin >> a[i][j];
            if(a[i][j] == 'S')
                s.push_back(make_pair(i,j));
            buffer.push_back(tolower(a[i][j]));
        }
    cin >> q;
    char *list = new char[q];
    for(int i=0; i<q; ++i){
        cin >> list[i];
        int x = list[i];
        if(isupper(x) && s.size() == 0){
            cout << -1;
            return(0);        
        }
        if(!(find(buffer.begin(), buffer.end(), tolower(x)) != buffer.end())){
            cout << -1;
            return(0);
        }
    }
}