#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//创建一个有规律的数组
int k = 7;//要查找的数
int sz = sizeof (arr) / sizeof arr[0];//算出元素个数
int left = 0; //定义左下标
int right = sz - 1; //定义右下标
while (right >= left)//如果右下标大于或等于左下标，代表这个数组还没有查找完
{
int mid = (left + right) / 2;// 定义中间元素下标 中间元素等于左下标+右下标
if (mid > k)//如果中间元素下标大于要找的元素，所以要找的元素在中间元素的左边
{
right = mid - 1;//调整右下标 用中间元素-1；
}
else if (mid < k)//如果中间元素下标小于要找的元素，所以要找的元素在中间元素的右边
{
left = mid + 1;//调整左下标，用中间元素+1
}
else //如果前两种都不满足，那只能是找到了
{
printf("找到了下标是：%d", mid);
break;//找到了 跳出循环
}
}
if (left > right)//如果左下标大于右下标，这个数组已经找完了，未发现目标元素，就找不到
{
printf("找不到");
}


return 0;
}