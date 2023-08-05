#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int l, b;
    cin>>l>>b;
    int perimeter, area;
    perimeter=2*(l+b);
    area=l*b;
    cout<<"The required length is "<<perimeter<<" m"<<"\n";
    cout<<"The required area of carpet is "<<area<<" sqm";
    return 0;
}
