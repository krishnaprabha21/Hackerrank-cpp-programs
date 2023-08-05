#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int a,b,c,sum;
    cin>>a;
    b=a/1000;
    c=a%10;
    sum=b+c;
    if(sum<=0){
        sum=1;
    }
    cout<<sum;
    return 0;
}
