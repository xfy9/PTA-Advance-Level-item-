#include <bits/stdc++.h>
using namespace std;
char number[11][15]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char s[1005];
vector<string> ans;
int main()
{
    scanf("%s",s);
    int len=strlen(s);
    int sum = 0;
    for (int i=0;i<len;i++)
    {
        sum=s[i]-'0'+sum;
    }
    if(sum==0)
    {
        printf("zero\n");
        return 0;
    }
    //string x;
    while(sum)
    {
        //x = number[sum%10];
        ans.push_back(number[sum%10]);
        sum/=10;
    }
    for (int i=ans.size()-1;i>=0;i--)
    {
            cout<<ans[i];
            printf("%c",i==0?'\n':' ');
    }
    return 0;
}
