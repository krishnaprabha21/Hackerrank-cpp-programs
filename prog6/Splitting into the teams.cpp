#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int tot;
    int no;
    cin>>tot>>no;
    int team, left;
    team=tot/no;
    left=tot%no;
    cout<<"The number of friends in each team is "<<floor(team)<<" and left out is "<<left;
    return 0;
}
