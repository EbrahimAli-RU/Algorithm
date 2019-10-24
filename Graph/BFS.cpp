#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

vector<int>v[100];

int BFS(int startNode)
{
    bool vis[100];
    int level[100],Count=0;
    level[startNode]=0;
    memset(vis , false, sizeof(vis));
    queue<int>q;
    q.push(startNode);
    vis[startNode]=true;

    while(!q.empty())
    {
        int Front=q.front();
        q.pop();
        for(int i=0;i<v[Front].size();i++)
        {
            //int d=;
            if(vis[v[Front][i]]==false)
            {
                q.push(v[Front][i]);
                level[v[Front][i]]=level[Front]+1;
                vis[v[Front][i]]=true;
            }
        }
        cout<<Front<<" ";
    }
}

int main()
{
   int nodes,n,m,x;
   cin>>nodes;
   for(int i=0;i<nodes-1;i++)
   {
       cin>>n>>m;
       v[n].push_back(m);
       v[m].push_back(n);
   }
   BFS(1);

   return 0;
}
