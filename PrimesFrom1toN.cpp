#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
int is_prime[mx];
vector<int>primes;

void primeGen(int n){
    fill(is_prime, is_prime +mx, 1);
    is_prime[0]=0;
    is_prime[1]=0;

    for(int i = 2;i<=n;i++){
        for(int j = i*i;j<=n;j+=i){
            is_prime[j]=0;
        }
    }

    for(int i =2;i<=n;i++)
    {
        if(is_prime[i]==1){
            primes.push_back(i);
        }
    }

    for(auto u : primes){
        cout<<u<<" ";
        cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;
    primeGen(n);


}
