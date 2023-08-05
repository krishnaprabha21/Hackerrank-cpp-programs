#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int p,r,y;
    cin>>p>>r>>y;
    float si=(p*r*y)/100;
    float a=si+p;
    float d=si*0.02;
    float settle=a-d;
    cout<<fixed<<setprecision(2);
    cout<<si<<endl<<a<<endl<<d<<endl<<settle;
    return 0;
}


 
    
