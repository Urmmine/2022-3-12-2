#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////指针
//int main()
//{
//	int a = 10;//a在内存中分配空间 - 4个字节
//	printf("%p\n", &a);//%p 专门用于打印地址
//	//&a 取地址a
//	int* pa = &a;//pa用于存放地址，在C语言中叫指针变量
//	//*说明pa是指针变量 int说明pa执行的对象是int类型
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}


////指针就是地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;//需求：通过pa的地址找到a的地址
//
//	*pa = 20;//* 解引用操作 *pa就是通过pa里的地址找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
////均为4个字节
////指针的大小相同 用于存放地址（32个bit 即4byte）


