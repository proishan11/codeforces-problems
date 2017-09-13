/*#include<iostream>
using namespace std;
int a[100][100] = {0};
int count[100] = {0};
int temp[100];

int fun(int n){
    int c=0; 
    int exc=0;
    for(int i=0; i<n; ++i){
        c=0;
    for(int i=0; i<n; ++i){
        
        if(count[i] == 1 && temp[i] == count[i]){
            c+=1;
            count[i] = 0;
            for(int j=0; j<n; ++j){
                if (a[i][j] == 1){
                    //a[i][j] = 0;
                    a[j][i] = 0;
                    count[j]--;
                }
            }
        }
        int flag=0;
        for(int i=0; i<n; ++i){
            temp[i] = count[i];
            if(!temp[i]){flag++;}
            cout << temp[i] << " ";
        }
        if(flag==0){return exc;}
        //cout << exc;
        cout << endl;

    }
    if(c!=0){exc++;}
    }
    return exc;
    }

int main(){
    int n,m;
    int i,j;
    cin >> n >> m;
    for(int x=0; x<m; ++x){
        cin >> i >> j;
        a[i-1][j-1] = 1;
        a[j-1][i-1] = 1;
        count[i-1]++;
        count[j-1]++;
        temp[i-1]=count[i-1]; temp[j-1]=count[j-1];
    }
    
    //print adjacency matrix
    /*for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout << a[i][j] <<" ";
            //if(a[i][j] == 1){count[i] += 1;}
        }
        cout << endl;
    }
    //print count matrix
    //for(int i=0; i<n; ++i){cout << count[i] << " ";}
    //cout << endl;
    int result = fun(n);
    cout << result;


}
*/

	

//TEjusesh
#include <iostream>
using namespace std;
int num[100],temp[100],pt[100][100];
int main(){
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		num[a-1]++,num[b-1]++;
		pt[a-1][b-1]++;pt[b-1][a-1]++;
		temp[a-1]=num[a-1];temp[b-1]=num[b-1];
	}
	int count1=0,hamaracount=0,flag=0,tme=0;
	for(int i=0;i<n;i++){
		flag=1;
		count1=0;
		for(int i=0;i<n;i++){
			if(temp[i]==1&&temp[i]==num[i]){
				count1++;
				temp[i]=0;
				for(int j=0;j<n;j++){
					if(pt[i][j]){temp[j]--;pt[i][j]=0;pt[j][i]=0;}
				}
			}
		}
		for(int i=0;i<n;i++){num[i]=temp[i];}
		if(count1){hamaracount++;}
		tme=0;
	}
	cout<<hamaracount;
}