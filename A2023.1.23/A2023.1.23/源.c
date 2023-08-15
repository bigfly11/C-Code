#include<stdio.h>
//模拟qsort冒泡排序
//void print(int arr[10000],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Swap(char*buff1,char*buff2,int wideth)
//{
//	int i = 0;
//	for (i = 0; i < wideth; i++)
//	{
//		char tmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = tmp;
//		buff1++;
//		buff2++;
//	}
//}
//void bubble_sort(void*base,int sz ,int wideth,int (*cmp)(const void*e1,const void*e2))//*cmp为函数地址第51行向里面传地址，传什么地址，用什么函数
//                                                                                      //函数指针的方便之处
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//行数 
//	{
//		//一趟排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			if (cmp((char*)base + (j)* wideth, (char*)base + (j+1) * wideth) > 0)//转化为char因为char最细了
//			{
//				//交换大于0交换
//				Swap((char*)base + j * wideth, (char*)base + (j + 1) * wideth,wideth);
//			}
//		}
//	}
//}
//int cmp_int(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int wideth = sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, wideth, cmp_int);//放入什么函数，就引用什么函数，所以就可以多次放入
//	print(arr, sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
	//printf("%d", sizeof(a)); // 16 这时a为整个数组地址
//	printf("%d", sizeof(a+0));// 4/8 这时a为首元素地址sizeof(a+0)计算时地址的大小
//	printf("%d", sizeof(*a));//一个地址大小
//	printf("%d", sizeof(a+1));//a+1第二个元素地址
//	printf("%d", sizeof(a[1]));//第二个元素大小
	//printf("%d", sizeof(&a));// 4/8  &a虽然是数组地址，但也是地址，则计算的是一个地址的大小
//	printf("%d", sizeof(*&a));// 16 找到的是整个数组 
//	printf("%d", sizeof(&a+1));// 4/8 +1跳过的是整个数组，是数组后面空间的地址
//	printf("%d", sizeof(&a[0]));// 4/8 
//	printf("%d", sizeof(&a[0]+1));// 4/8 
//	char b[] = { 'a','b','c','d','e','f' };
//	printf("%d", sizeof(b));//6
//	printf("%d", sizeof(b+0));// 4/8求的是求的是第一个元素地址大小
//	printf("%d", sizeof(*b));// 1 找到的是第一个元素大小
//	printf("%d", sizeof(b[1]));// 1
//	printf("%d", sizeof(&b));//4/8
//	printf("%d", sizeof(&b+1));//4/8
//	printf("%d", sizeof(&b[0]+1));// 4/8 &b[0]得到的是第一个元素地址，+1则第二个元素地址，算的是地址的大小
//	//strlen找\0,b数组中没有/0，则继续在内存中找所以为随机值
//	//给strlen穿的都是地址，算这个地址后边的，直到找到\0,所以第86，87行传过去的都不是地址，就会报错
//	printf("%d", strlen(b));//随机值
//	printf("%d", strlen(b+0));//随机值
//	printf("%d", strlen(*b));//错误
//	printf("%d", strlen(b[1]));//错误
//	printf("%d", strlen(&b));//随机值
//	printf("%d", strlen(&b+1));//随机值-6，+1跳过整个数组（重点看）
//	printf("%d", strlen(&b[0]+1));//随机值
	//char arr[] = "abcdef";//arr中有啊{a,b,c,d,e,f,\0}
//	printf("%d", sizeof(arr));//7
//	printf("%d", sizeof(arr+0));//4/8
	//printf("%d", sizeof(*arr));// 1 算的就是首元素大小
//	printf("%d", sizeof(arr[1]));//1
//	printf("%d", sizeof(&arr));//4/8
//	printf("%d", sizeof(&arr+1));//4/8  +1跳过7个字符（重点看）
//	printf("%d", sizeof(&arr[0]+1));//4/8  
//	printf("%d", strlen(arr));//6
//	printf("%d", strlen(arr+0));//6
//	printf("%d", strlen(*arr));//错误
//	printf("%d", strlen(arr[1]));//错误
//	printf("%d", strlen(&arr));//6
//	printf("%d", strlen(&arr+1));//随机值  +1已经跳过整个数组（重点看）
//	printf("%d", strlen(&arr[0]+1));//5
//	char* p = "abcdef";//相当于将数组首元素地址a放入p中
//	printf("%d", sizeof(p));//4/8
//	printf("%d", sizeof(p+1));//4/8
//	printf("%d", sizeof(*p));//1 拿出一个地址解引用
//	printf("%d", sizeof(p[0]));//1 在此时p[0]相当于*（p+0）
//	printf("%d", sizeof(&p));//4/8
//	printf("%d", sizeof(&p+1));//4/8
//	printf("%d", sizeof(&p[0]+1));//4/8
//	printf("%d", strlen(p));//6
//	printf("%d", strlen(p+1));//5
//	printf("%d", strlen(*p));//错误
//	printf("%d", strlen(p[0]));//错误
//	printf("%d", strlen(&p));//随机值（重点看）传进来是p的地址不是数组地址了
//	printf("%d", strlen(&p+1));//随机值，传进来的还是p的地址（重点看）
//	printf("%d", strlen(&p[0]+1));//5
//
//	//二维数组
//	int c[3][4] = { 0 };
//	printf("%d", sizeof(c));//48
//	printf("%d", sizeof(c[0][0]));//4
//	printf("%d", sizeof(c[0]));//c[0]代表第一行，sizeof(c[0])则就是第一行大小
//	printf("%d", sizeof(c[0]+1));//  4/8 重点，只要不是单独放入sizeof内部，也没有&，就代表首元素地址%%%%
//	                                     //所以c[0]+1，就是第一行第二个元素地址
//	printf("%d", sizeof(*(c[0]+1)));// 4 代表第一行第二个元素
//	printf("%d", sizeof(a+1));// 4/8  重点，只要不是单独放入sizeof内部，也没有&，a就代表首元素地址%%%%
//	                             //二维数组首元素是第一行a+1就是第二行地址
//	printf("%d", sizeof(*(c+1)));// 16 c+1是第二行地址 解引用后就是第二行数组，所以计算的是第二行大小
//	printf("%d", sizeof(&c[0]+1));// 4/8 c[0]是第一行数组名，&c[0]取出的就是第一行地址
//	                                     //&a[0]+1就是第二行地址
//	printf("%d", sizeof(*(c[0]+1)));// 16 与第132行一样  &c[0]+1为第二行地址，计算的是第二行大小
//	printf("%d", sizeof(*c));// 16 a作为二维数组的数组名，没有&，没有单独放在sizeof内部，a就是首元素的地址
//	                               //及第一行地址，所以*a就是第一行，计算的是第一行大小
//	printf("%d", sizeof(c[3]));// 16 a[3]其实是第四行的数组名（如果存在），其实不存在，也能通过类型计算大小
//	return 0;
//}
//int main()
//{
//	short a = 3;
//	int b = 5;
//	sizeof(a = b + 5);//答案为 2 整个表达式最终由a说的算
//	printf("%d", a);// sizeof内部表达式不参与计算所以a的值不变
////}
//int main()
//{
//	int c = 5;
//	int a[5] = { 1,2,3,4,5 };
//	int* b = (int*)(&a + 1);//&a取出的是整个数组的地址，+1则跳过整个数组，若没有&则代表首元素地址
//	                        //强制转换为int*是因为&a是数组的指针，不是int*类型
//	printf("%d%d", *(a + 1), *(b - 1));
//	return 0;
//}
//重点看,结构体指针为20字节
//struct test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p为0x100000，计算下列表达式
////一直结构体类型指针变量大小为20字节。
////仔细读题，沉下心
//int main()
//{
//	printf("%p", p+0x1);//0x100014 p为结构体指针，+1则加20字节
//	printf("%p", (unsigned long)p+0x1);//p此时为长整型，+1则就直接加一
//	printf("%p", (unsigned int*)p+0x1);//此时p为int型指针，+1则加4个字节
//
//	return 0;
//}
