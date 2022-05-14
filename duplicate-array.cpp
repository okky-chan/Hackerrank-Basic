#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, j,n;
    long long a[100];
    cin >> n;
    for (i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i] == a[j]) {
                cout << a[i];
            }
        }
    }
    return 0;
}
