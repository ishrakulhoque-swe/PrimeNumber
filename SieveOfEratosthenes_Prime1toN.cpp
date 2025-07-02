#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);


const int mx = 1e6 + 123;
int is_prime[mx];
vector<int>primes;


void primeGen( int n)
{

    for(int i = 1;i<=n;i++) is_prime[i]=1;


    is_prime[0]=0;
    is_prime[1]=0;
    is_prime[2]=1;


    for(int i = 3;i*i<=n;i+=2)
    {

        if(is_prime[i]==1){

            for(int j = i*i ;j<=n;j+=(i+i)){
                is_prime[j]=0;
            }
        }
    }

    primes.push_back(2);

    for(int i =3 ;i<=n;i+=2){
        if(is_prime[i]==1)
        {

            primes.push_back(i);
        }
    }
}

int main()
{

    optimize();
    int n;
    cin>>n;
    primeGen(n);

    for(auto u : primes)
    {

        cout<<u<<" ";
    }
    cout<<endl;



return 0;
}
