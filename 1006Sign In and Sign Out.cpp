#include <bits/stdc++.h>
using namespace std;
int compare (int h1,int m1,int s1,int h2,int m2,int s2)
{
    if(h1<h2) return 0;
    if(h1==h2&&m1<m2) return 0;
    if(h1==h2&&m1==m2&&s1<s2) return 0;
    return 1;
}
int n;
struct peo
{
    char no[20];
    int h1,m1,s1,h2,m2,s2;
};
peo p[1005];
int main()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%s %d:%d:%d %d:%d:%d",p[i].no,&p[i].h1,&p[i].m1,&p[i].s1,&p[i].h2,&p[i].m2,&p[i].s2);
    }
    int sh=24,sm=60,ss=60,sloc=-1;
    int eh=0,em=0,es=0,eloc=-1;
    for (int i=0;i<n;i++)
    {
        if(compare(sh,sm,ss,p[i].h1,p[i].m1,p[i].s1))
        {
            sloc=i;
            sh=p[i].h1;
            sm=p[i].m1;
            ss=p[i].s1;
        }
        if(!compare(eh,em,es,p[i].h2,p[i].m2,p[i].s2))
        {
            eloc=i;
            eh=p[i].h2;
            em=p[i].m2;
            es=p[i].s2;
        }
    }
    printf("%s %s\n",p[sloc].no,p[eloc].no);
    return 0;
}
