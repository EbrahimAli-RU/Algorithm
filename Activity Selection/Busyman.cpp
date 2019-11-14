#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int> >v;
    int n,a,b,testCase,n1;
    cin>>testCase;
    while(testCase--)
    {
        cin>>n;
       int Count=1;
    n1=n;
    while(n1--)
    {
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());

    int j=0;
    for(int i=1;i<n;i++)
    {

        if(v[j].first<=v[i].second)
        {//cout<<v[j].first<<" "<<v[i].second<<endl;
            Count++;
            j=i;
        }
    }

    cout<<Count<<endl;
    v.clear();
    }



    return 0;
}
