#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
void SieveOfEratosthenes(int n)
{
    bool primes[n+1];

    memset(primes,true,sizeof(primes));
    for(int i=2;i<=n;i++)
    {
        if(primes[i])
        {
            for(int j=2;i*j<=n;j++)
            {
                primes[i*j]=false;
            }
        }
    }

    for(int i=100000;i<=n;i++)
    {
        if(primes[i])
        {
            v.push_back(i);
        }
    }


}
int main()
{
    long long  n,check=0;

    cin>>n;
    SieveOfEratosthenes(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";


    return 0;
}

