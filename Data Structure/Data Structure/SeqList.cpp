#include <stdio.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct SeqList {
	ElemType data[MAXSIZE];
	int length;
}SeqList;

//初始化
void initList(SeqList* L)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return;
	}

	L->length = 0;
}
//尾部添加
int appendElem(SeqList* L, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}

	if (L->length >= MAXSIZE)
	{
		printf("顺序表已满\n");
		return 0;
	}
	L->data[L->length] = e;
	L->length++;
	return 1;
}
//遍历输出
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
}
//插入元素
int insertElem(SeqList* L, int pos, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}

	if (L->length >= MAXSIZE)
	{
		printf("表已经满了\n");
		return 0;
	}

	if (pos<1 || pos>L->length + 1)//最后插入为L+1
	{
		printf("插入位置错误\n");
		return 0;
	}

	for (int i = L->length - 1;i >= pos - 1;i--)
	{
		L->data[i + 1] = L->data[i];
	}

	//当pos==l+1时，为尾部插入
	L->data[pos - 1] = e;
	L->length++;

	return 1;
}
//删除元素
int deleteElem(SeqList* L, int pos, ElemType* e)
{
	if (L == NULL || e == NULL)
	{
		printf("参数错误\n");
		return 0;
	}

	if (L->length == 0)
	{
		printf("表为空，不能删除\n");
		return 0;
	}

	if (pos<1 || pos>L->length)
	{
		printf("删除位置错误\n");
		return 0;
	}

	*e = L->data[pos - 1];

	for (int i = pos;i < L->length;i++)
	{
		L->data[i - 1] = L->data[i];
	}

	L->length--;
	return 1;
}
//查找
int findElem(const SeqList* L, ElemType e)
{
	if (L == NULL)
	{
		printf("参数错误\n");
		return 0;
	}

	for (int i = 0;i < L->length;i++)
	{
		if (L->data[i] == e)
		{
			return i + 1;
		}
	}
	return 0;
}

int main(void)
{
	SeqList L;
	initList(&L);

	appendElem(&L, 10);
	appendElem(&L, 20);
	appendElem(&L, 30);
	listElem(&L);              // 10 20 30

	insertElem(&L, 2, 15);
	listElem(&L);              // 10 15 20 30

	insertElem(&L, 5, 40);     // 表尾插入
	listElem(&L);              // 10 15 20 30 40

	ElemType x;
	deleteElem(&L, 1, &x);
	printf("删除 %d\n", x);    // 删除 10
	listElem(&L);              // 15 20 30 40

	deleteElem(&L, 4, &x);
	printf("删除 %d\n", x);    // 删除 40
	listElem(&L);              // 15 20 30

	printf("20 的位置: %d\n", findElem(&L, 20));  // 2
	printf("99 的位置: %d\n", findElem(&L, 99));  // 0

	return 0;
}