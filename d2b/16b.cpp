/*done*/
/*b<10*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector< pair <int, int> > v;
    long n,m,x,y,count=0,r,result=0;
    cin >> n >> m;
    r = n;
    for(int i=0; i<m; ++i){
        cin >> x >> y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(), v.end());
    for(int i=m-1; i>=0; --i){
        x = v[i].first;
        y = v[i].second;
        if(y<=r){
            result+=x*y;
            r=r-y;
        }
        else{
            result+=x*r;
            break;
        }
    }
    cout<<result;
}

/*one more version by Ahmed*/

/*#include <iostream>
using namespace std;
//Here o is the list of no. of matchboxes containing matches equal to index of  o.
#include <iostream>
using namespace std;
int main() {
	long m,b,i,n,a,r=0,o[10]= {0};
	cin>>n>>m;
	for(i=0; i<m; i++)
		cin>>a>>b,o[b-1]+=a;
	for(i=10; i>0; i--)
		m= min(n,o[i-1]),n-=m,r+=(m*i);
	cout<<r;
	return 0;
}
	for(i=10; i>0; i--)
		m= min(n,o[i-1]),n-=m,r+=(m*i);
	cout<<r;
	return 0;
}*/