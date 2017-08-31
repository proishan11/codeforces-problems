#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int r, d, n, x, y, ri, result=0, temp;
    cin >> r >> d >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> ri;
        if(sqrt(x*x+y*y)+ri <= r && sqrt(x*x + y*y)-ri >= (r-d))
            result++;
    }
    cout << result;
}