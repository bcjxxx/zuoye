#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
// �˷��ھ���
/*{
int i = 0;
int j = 0;
int o = 0;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= i; j++)
{
o = i * j;
printf("%d*%d=%d ",j, i, o);
}
printf("\n");
}
}*/


//��ӡ3�ı���
/*{
int i = 0;
for (i = 3; i <= 100; i++)
{
if (i % 3 == 0)
printf("%d\n", i);
}


return 0;
}*/

//���ֲ���
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 10;
	int sz = sizeof (arr) / sizeof arr[0];
	int left = 0;
	int right = sz - 1;
	while (right >= left)
	{
		int maid = (left + right) / 2;
		if (arr[maid] > k)
		{
			right = maid - 1;
		}
		else if (arr[maid] < k)
		{
			left = maid + 1;
		}
		else
		{
			printf("�ҵ����±��� %d ", maid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����\n");
	return 0;

}