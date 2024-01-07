#include <iostream>
#include <cmath>
#include <limits>
#include <stdlib.h> 
#include <limits.h>
using namespace::std;

int main() {
    int rr,ll=0;
    int o = INT_MAX;
    const int n = 4;
    int A[n][n] = {
        {1, 6, 5, 3},
        {4, 3, 7, 9},
        {3, 8, 2, 4},
        {6, 9, 5, 7}
    };
    for(int c= 0; c<n;c++){
        for(int r = 0;r<n;r++){
            if(r<n-1 && abs(A[c][r] - A[c][r+1])< o){
                o = abs(A[c][r] - A[c][r+1]);
                rr = A[c][r];
                ll = A[c][r+1];
            }
        }
    }
    cout  << o<<" ("<<rr<<","<<ll<<")";

    return 0;
}
