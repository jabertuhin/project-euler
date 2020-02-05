#include <bits/stdc++.h>
using namespace std;

#define Max 1000000
bool prime[Max];

void primeGen(){
    memset(prime, true, sizeof(prime));
    int n = sqrt(Max);
    for(int i = 3; i<=n; i += 2){
        if(prime[i]){
            for(int j = i*i; j<=Max; j += 2*i){
                prime[j] = false;
            }
        }
    }
}

vector<int> primeNumbers;

void primePusher(){
    primeNumbers.push_back(2);
    
    for(int i = 3; i<= Max; i += 2){
        if(prime[i]) primeNumbers.push_back(i);
    }
}

long long int getLargestPrime(long long int num){
    int primeNumberCount = primeNumbers.size();
    long long int largestPrime = 0;
    for(int i = 0; i<primeNumberCount && num != 1 && primeNumbers[i]*primeNumbers[i]<= num; i++){
        int x = primeNumbers[i];
        if(num%x == 0){
            while(num%x == 0){
                num /= x;
            }
            largestPrime = x;
        }
    }
    if(num > 1) largestPrime = num;

    return largestPrime;
}

int main() {
    primeGen();
    primePusher();
    
    int test;
    scanf("%d", &test);

    for(int i = 1; i<=test; i++){
        long long int num;
        scanf("%lld", &num);

        printf("%lld\n", getLargestPrime(num));
    }    
    
    return 0;
}