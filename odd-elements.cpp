#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    long a[100],sum=0;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> a[i];
    }
    for(i=0;i<n;i++) {
        if(a[i]%2!=0) {
            sum=sum+a[i];
        }
    }
    cout << sum;
    return 0;
}
