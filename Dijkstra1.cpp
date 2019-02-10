#include<bits/stdc++.h>
using namespace std;

#define ll long long int
typedef pair<ll, ll>pii;
typedef vector<ll>vi;
typedef vector<pii>vii;
#define INF 0x3f3f3f3f

ll destination;
vii *G;
vi Dist;

ll Dijkstra(ll source,ll N)
{
    priority_queue<pii,vector<pii>,greater<pii> >Q;
    Dist.assign(N,INF);
    Dist[source]=0;
    Q.push({0,source});
    while(!Q.empty())
    {
        ll u=Q.top().second;
        if(u==destination-1);
        return Dist[destination-1];

        Q.pop();
        for(auto &c : G[u]){
            ll v=c.first;
            ll w=c.second;
            if(Dist[v]>Dist[u]+w){
                Dist[v]=Dist[u]+w;
            Q.push({Dist[u],v});
            }
        }
    }

    return-1;
}
int main()
{
    ll N,M,u,v,w,source,test_case,result,destination;
    cin>>test_case;
    while(test_case--)
    {
        cin>>N>>M;
        G=new vii[N+1];
        for(int i=0;i<M;i++){
        cin>>u>>v>>w;
        G[u-1].push_back(v-1,w);}
        cin>>source>>destination;

        result=Dijkstra(source,N);

        if(result==-1)
            cout<<"No"<<endl;
        else
            cout<<result<<endl;

        Dist.clear();
    }


    return 0;
}
