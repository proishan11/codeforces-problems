#include<bits/stdc++.h>

using namespace std;
int a[11] = {0};

int factorial(int n){
	if(n >= 0){
		a[0] = 1;
		for(int i=1; i<=n; ++i){
			a[i] = i*a[i-1];
		}
	return a[n];
	}
}

int main(){
	//cout<<factorial(5);
	long double result=-1,den;
	int i,a_p=0, a_m=0, b_p=0, b_m=0;
	int q=0,num,length;
	string a;
	string b;
	cin>>a>>b;
	length = a.length();
	for(i=0; i<length; ++i)
		if(a[i] == '+')
			a_p++;
	for(i=0; i<length; ++i)
		if(a[i] == '-')
			a_m++;
	for(i=0; i<length; ++i)
		if(b[i] == '+')
			b_p++;
	for(i=0; i<length; ++i)
		if(b[i] == '-')
			b_m++;
	for(i=0; i<length; ++i)
		if(b[i]=='?')
			q++;
	if(a_p==b_p && a_m==b_m)
		result = 1.0;
	if(a_p>b_p+q || a_m>b_m+q)
		result = 0;
	if(q==0 &&(a_p!=b_p || a_m!=b_m))
		result = 0;
	if(result<0){
		den = pow(2,q);
		num = factorial(static_cast<int>(q))/(factorial(a_p-b_p)*factorial(a_m - b_m));
		result = num/den;
	}

	printf("%.9Lf\n", result);

}