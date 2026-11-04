// 顺序表：data[MAXSIZE] 存元素，length 存当前个数
#include <stdio.h>

#define MAXSIZE 100
typedef int ElemType;

typedef struct SeqList {
	ElemType data[MAXSIZE];
	int length;
}SeqList;
// 初始化
// 判空；length = 0
void initList(SeqList* L)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return;
	}

	L->length = 0;
}
// 尾部添加
// 判空；判满；data[length] = e；length++；返回1/0
int appendElem(SeqList* L, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}
	if (L->length >= MAXSIZE)
	{
		printf("列表已满\n");
		return 0;
	}

	L->data[L->length] = e;
	L->length++;
	return 1;
}
// 遍历输出
// 判空；循环打印 data[0] ~ data[length-1]；换行
void listElem(const SeqList* L)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return;
	}
	for (int i = 0;i < L->length;i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
	return;
}
// 插入元素
// 判空；判满；pos 范围 1 ~ length+1
// 从 length-1 到 pos-1 依次后移
// data[pos-1] = e；length++；返回1/0
int insertElem(SeqList* L, int pos, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}
	if (L->length >= MAXSIZE)//忘了写列表满了
	{
		printf("列表已满\n");
		return 0;
	}
	if (pos<1 || pos>L->length + 1)
	{
		printf("参数错误\n");
		return 0;
	}

	for (int i = L->length - 1;i >= pos - 1;i--)//此处大于等于pos-1
	{
		L->data[i + 1] = L->data[i];
	}
	L->data[pos - 1] = e;
	L->length++;
	return 1;
}
// 删除元素
// 判空、e判空；空表判断；pos 范围 1 ~ length
// *e = data[pos-1]
// 从 pos 到 length-1 依次前移
// length--；返回1/0
int deleteElem(SeqList* L, int pos, ElemType* e)
{
	if (L == NULL || e == NULL)
	{
		printf("参数错误\n");
		return 0;
	}
	if (L->length == 0 || pos<1 || pos>L->length) {//少写了一个判断等号
		printf("参数错误\n");
		return 0;
	}

	*e = L->data[pos - 1];
	for (int i = pos;i < L->length;i++)//用pos而不是pos-1，直接覆盖即可
	{
		L->data[i - 1] = L->data[i];//i-1=i
	}
	L->length--;
	return 1;
}
// 查找
// 判空；循环比较，找到返回 i+1
// 未找到返回 0
int findElem(const SeqList* L, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}
	for (int i = 0;i < L->length;i++)
	{
		if (L->data[i] == e) {
			return i + 1;
		}
	}
	return 0;
}
