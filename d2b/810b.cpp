#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;
vector< pair<long long,long long> >a;
bool sortbydiff(const pair<long long,long long>&a 
                , const pair<long long, long long>&b)
    {
    long long diff1 = abs(a.second - a.first), diff2 = abs(b.second-b.first);
    return diff1 < diff2;

}

int main(){
    int n,f;
    long long k,l;
    scanf("%d %d",&n,&f);
    for(int i=0; i<n; ++i){
        cin >> k >> l;
        a.push_back(make_pair(2*k,l));
    }
    sort(a.begin(),a.end(), sortbydiff);
    for(int i=0; i<n; ++i){
        cout << a[i].first <<" " << a[i].second << endl;
    }
}