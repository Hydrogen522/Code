//先定义一个搜索函数；遍历找出位置；
//读入x，然后search
#include <stdio.h>

int search(int key, int a[], int length) {
	int i = 0;
	int ret = -1;
	for (i = 0;i < length;i++) {
		if (key == a[i]) {
			ret = i;
			break;
		}
	}
	return ret;
}

int main()
{
	int x;
	scanf_s("%d", &x);
	int a[] = { 2,4,6,7,1,3,5,9 };
	int loc = search(x, a, sizeof(a) / sizeof(a[0]));
	if (loc != -1) {
		printf("%d在%d上\n", x, loc);
	}
	else {
		printf("不存在\n");
	}
	return 0;
}
//数组表达时不用加[]