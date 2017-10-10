#include<iostream>
using namespace std;
int main(){
	int t,n,p,x,count_c=0, count_h=0;
	cin >> t;
	for(int i=0; i<t; ++i){
		cin >> n >> p;
		for(int j=0; j<n; ++j){
			cin >> x;
			if(x>=p/2){count_c++;}
			if(x<=p/10){count_h++;}
			//cout << "Yo" <<count_c << " " << count_h << endl;
		}

		if(count_c==1 && count_h==2){cout <<"yes\n";}
		else{cout << "no\n";}
		count_c=0;
		count_h=0;
	}
}