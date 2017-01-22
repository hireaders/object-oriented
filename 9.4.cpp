#include<stdio.h>
void jh(struct Student *q,int k);
struct Student{char name[10];int total;int chn;int mth;int eng;}s[151],temp;
int main()
{
	int i,n,j;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	    scanf("%s%d%d%d",s[i].name,&s[i].chn,&s[i].mth,&s[i].eng);
	    s[i].total=s[i].chn+s[i].mth+s[i].eng;
     }

	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(s[j].total<s[j+1].total)
			   jh(s,j);
			if(s[j].total==s[j+1].total)
			{
			    if(s[j].chn<s[j+1].chn)
			      jh(s,j);
			    if(s[j].chn==s[j+1].chn)
			    {
			    	if(s[j].mth<s[j+1].mth)
			    	 jh(s,j);
			    	if(s[j].mth==s[j+1].mth)
			    	{
			    		if(s[j].eng<s[j+1].eng)
			    		jh(s,j);
					}
				}

			}
		}
	}
	for(i=1;i<=n;i++)
	printf("%s\n",s[i].name);
}

void jh(struct Student *q,int k)
{
     Student temp=*(q+k);
    *(q+k)=*(q+k+1);
    *(q+k+1)=temp;
}
