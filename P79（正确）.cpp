#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main()
{
	int n[100] ;//最多有100局 
	char s1[15],s2[15],ans[100] ;//单词最长是15个字符 ,ans用来存放结果
	int i=0;
	
	while(scanf("%d",&n[i])&&n[i]!=-1)
	{
		scanf("%s%s",s1,s2);
		int len1=strlen(s1);
		int len2=strlen(s2);
		int j,k,l;
		int len11=len1;
		int count=0;
		for(j=0;j<len2;j++)
		{
			if(strchr(s1,s2[j])==NULL)	//如果该字母没有在答案中出现 
				count++;//那就记录下来错误+1 
			else //不然这个字母就在答案中出现了 
				for(k=0;k<len1;k++)//依次查找答案中的这个字母  
				{
					if(s1[k]==s2[j])//如果出现
					{
						s1[k]=' ';
						len11--;
					} 
				}
			if(len11==0)
			{
				ans[i]='W';
				break;
			}			
		}
		if(count>=7)
			ans[i]='L';
		else if(ans[i]!='W')
			ans[i]='C';		
		i++;
	}
	int m;
	for(m=0;m<i;m++)
	{
		printf("Round %d\n",n[m]);
		if(ans[m]=='W')
			printf("You win.\n");
		if(ans[m]=='L')
			printf("You lose.\n");
		if(ans[m]=='C')
			printf("You chickened out.\n");
	}
	
	

	
	
	return 0;	
	
}
