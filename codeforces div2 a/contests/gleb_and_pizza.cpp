#include<iostream>
#include<vector>

using namespace std;

int main(){
    int r, d, n, x, y, t_r;
    vector< vector<int> > data;
    vector<int> inp;
    cin >> r >> d >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> t_r;
        inp.push_back(x);
        inp.push_back(y);
        inp.push_back(t_r);
        data.push_back(inp);
    }
    
    
}