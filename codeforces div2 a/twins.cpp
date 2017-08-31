#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n, total, x, i, j, sum =0, remain, count=0, key;
    vector<int> a;
    cin >> n;
    for(i=0; i<n; ++i){
        cin >> x;
        a.push_back(x);
        total += x;
    }
    cout << "total = " << total <<endl;
    for(i=0; i<n; ++i){
        key = a[i];
        for(j=i-1; j>=0 && a[j]<key; j--){
            a[j+1] = a[j];
        }
        a[j+1] = key;
    }
    for(i=0; i<n; i++){
        cout << a[i]<<" " ;
    }
    cout << endl;

    for(i=0; i<n; i++){
        sum+=a[i];
        remain = total - sum;
        count+=1;
        cout << "count = " << count << endl;
        if(sum > remain)
            break;
    }
    cout<< "sum =" << sum <<" remain = " <<remain<<endl;
    cout << count;
} 