#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long ax,ay,bx,by,cx,cy,d;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    long long m[3][3] = {
        {2*ax, 2*ay, 1},
        {2*bx, 2*by, 1},
        {2*cx, 2*cy, 1}
    };
    
    d = m[0][0]*(m[1][1]*m[2][2] - m[2][1]*m[1][2]) 
        - m[0][1]*(m[1][0]*m[2][2] - m[2][0]*m[1][2])
        + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
    double dist1 = sqrt(pow((ax-bx),2) + pow((ay-by),2));
    double dist2 = sqrt(pow((bx-cx),2) + pow((by-cy),2));

    if(d == 0){
        {cout<<"No";}
    }
    else{
        if(dist1-dist2 < 0.001)
        {cout << "Yes";}
        else{cout<< "No";}
    }
}

