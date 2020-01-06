/*
Problem Link: https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long int sumOfSeries(long long int n){
    return (n*(n+1))/2;
}

int main() {
    int test;
    scanf("%d", &test);

    for(int i = 1; i<=test; i++){
        int n;
        scanf("%d", &n);
        n--;    //we have to solve for the below given number(n -> n-1)

        long long int ans = 3*sumOfSeries(n/3) + 5*sumOfSeries(n/5) - 15*sumOfSeries(n/15);        

        printf("%lld\n", ans);
    }

    return 0;
}
