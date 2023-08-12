#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,missing;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    missing=1;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==missing)
        {
            missing++;
        }
        else
            if(a[i]>missing)
                break;
    }
    cout<<missing;
    return 0;
}
