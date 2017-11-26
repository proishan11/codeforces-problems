#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,y,counter=0,count_1=0,result=0;
	cin>>n>>m;
	int length[n],temp[n];
	for(int i=0; i<n; ++i){
		length[i] = 0;
		temp[i] = 0;
	}

	vector<int> a[n];
	while(m--){
		cin >> x >> y;
		length[x-1]++;
		length[y-1]++;
		temp[x-1]++;
		temp[y-1]++;
		a[x-1].push_back(y);
		a[y-1].push_back(x);
	}
	do{
		count_1=0;
		for(int i=0; i<n; ++i){
			if(temp[i] == 1){
				count_1++;
				for(int j=0; j<a[i].size(); ++j){
					if(length[a[i][j]-1] > 0) length[a[i][j]-1]--;
				}
				length[i]--;
			}
		}
		for(int i=0; i<n; ++i){
			temp[i] = length[i];
		}
		if(count_1){result++;}
	}while(count_1>=1);
	cout<<result<<endl;
}