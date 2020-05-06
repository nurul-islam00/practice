// trying for git.
#include<bits/stdc++.h>
#include<vector>
#include<queue>
// Hello kdfkdslfkjdslkfj lkdss
using namespace std;
 vector<int>v[100000];
    int vis[100000];
void bfs()
{


    queue<int>x;
    int p,q,r,s,t,n;
    cin>>p;
    t=1;
    for(int i=1;i<=p;i++)
    {
        cin>>q>>r;
        if(i==1)
        {
            x.push(q);
        }

        v[q].push_back(r);
        v[r].push_back(q);
    }
    for(int i=0;i<100000;i++)
    {
        vis[i]=0;
    }
    int h=x.front();
    vis[h]=1;
    while(!x.empty())
    {

        h=x.front();


        x.pop();
        for(int i=0;i<v[h].size();i++)
        {
            if(vis[v[h][i]]==0)
            {

               if(vis[h]==1)
               {
                    n=v[h][i];
                   vis[n]=2;
               }
               else
               {
                   n=v[h][i];
                   vis[n]=1;
               }

                x.push(v[h][i]);
            }

            if(vis[h]==vis[v[h][i]])
            {
                t=0;
            }



        }


    }

    if(t==0)
    {
        cout<<"NOT BICOLORABLE."<<endl;
    }
    else
    {
        cout<<"BICOLORABLE."<<endl;
    }

  for(int b=0;b<100000;b++)
  {
      v[b].clear();
  }

}
int  main()
{

    int tc,b,c,d;

    while(cin>>tc)
    {
        if(tc==0)
        {
            break;
        }
        else
        {

        bfs();
        }
    }

return 0;
}
