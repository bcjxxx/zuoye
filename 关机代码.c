#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	system("shutdown -s -t 60");
	char arr[60] = {""};
	while (1)
	{
		printf("��ĵ��Խ���10�����ڹػ�������������\n");
	scanf("%s", arr);
	if (strcmp(arr, "2569217433" )== 0)
	{
		system("shutdown -a");
		break;
	}
	
	}
	
	return 0;
}