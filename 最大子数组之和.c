#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int n;//�������
	int a[10000];//�洢����
	int i;//����
	int sub_sum=0;//�ֶκ�
	int maxsum=0;//��¼���ֶκ�
	clock_t start,finish;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		start=clock();//��ʼʱ��
		maxsum=a[0];
		sub_sum=a[0];
		//�ҳ����ֶκ�
		for(i=1;i<n;i++)
		{
			if(sub_sum<0)
				sub_sum=a[i];
			else
				sub_sum+=a[i];
			if(maxsum<sub_sum)
				maxsum=sub_sum;
		}
        finish=clock();//����ʱ��
		printf("%f s\n",(double)(finish-start)/CLOCKS_PER_SEC);//����ʱ��
		printf("%d\n",maxsum);//��ӡ���ֶκ�
	}
	return 0;
}



