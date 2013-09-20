#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int n;//输入个数
	int a[10000];//存储数据
	int i;//遍历
	int sub_sum=0;//分段和
	int maxsum=0;//记录最大分段和
	clock_t start,finish;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		start=clock();//开始时间
		maxsum=a[0];
		sub_sum=a[0];
		//找出最大分段和
		for(i=1;i<n;i++)
		{
			if(sub_sum<0)
				sub_sum=a[i];
			else
				sub_sum+=a[i];
			if(maxsum<sub_sum)
				maxsum=sub_sum;
		}
        finish=clock();//结束时间
		printf("%f s\n",(double)(finish-start)/CLOCKS_PER_SEC);//测量时间
		printf("%d\n",maxsum);//打印最大分段和
	}
	return 0;
}



