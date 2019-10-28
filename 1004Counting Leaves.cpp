#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
int n,m;
int par[maxn];
vector<int>v[maxn];
vector<int> re;
void traverse()
{
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
        int Size = q.size();
        int num=0;
        while(Size--)
        {
            int top = q.front();
            q.pop();
            if(v[top].size()==0) num++;
            else
            {
                for (int i=0;i<v[top].size();i++)
                {
                    q.push(v[top][i]);
                }
            }
        }
        re.push_back(num);
    }
    for (int i=0;i<re.size();i++)
    {
        printf("%d%c",re[i],i==re.size()-1? '\n':' ');
    }
}
int main()
{
    memset (par,-1,sizeof(par));
    scanf("%d%d",&n,&m);
    for (int i=0;i<m;i++)
    {
        int id,num;
        scanf("%d%d",&id,&num);
        while(num--)
        {
            int x;
            scanf("%d",&x);
            v[id].push_back(x);
        }
    }
    traverse();
	return 0;
}
