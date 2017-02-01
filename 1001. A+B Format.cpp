#include<stdio.h>
#include<math.h>
int main() 
{
	int a,b,sum,c,i,j,count=0;
	char s[9]; 
	scanf("%d%d",&a,&b);
	sum=a+b;
	c=abs(sum);
	if(c<1000) 
	printf("%d",sum);
	else 
    {
    if(sum<0)
    {
    	printf("-");
    	sum=-sum;
	}
	for(i=0;i<=9;i++)
	{
	    s[i]=sum%10+48;
		sum=sum/10;
		count++;
		if(sum==0)break;
		if(count%3==0)
		s[++i]=',';
	}
	for(;i>=0;i--)
	printf("%c",s[i]);
    }
    return 0;
}
