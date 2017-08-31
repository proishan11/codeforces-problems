/*done*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m, ans=9999;
    cin >>n>>m;
    int a[m];
    for(int i=0; i<m; ++i){scanf("%d",&a[i]);}
    sort(a, a+m);
    for(int i=0; i<m-n+1; ++i){
        ans = min(ans, a[i+n-1]-a[i]);
    }
    printf("%d",ans);
}