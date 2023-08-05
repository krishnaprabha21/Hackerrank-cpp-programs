#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<fixed<<setprecision(1);
    cout<<"Arun's house is located at("<<(float)(x1+x2)/2<<","<<(float)(y1+y2)/2<<")";
    return 0;
}

