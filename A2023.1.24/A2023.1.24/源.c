//int main()
//{
//	int a[4] = { 1,2,3,4 };//这四位地址一定有这样规律  100000002000000030000000这样规律
//	int* ptr1 = (int*)(&a + 1);    
//	int* ptr2 = (int*)((int)a + 1);//数组中的数组地址是挨着的，转化为int类型，+1后实际上还是16进制数向后移动一位，
//	                               //再从移动后的地址中找4为访问
//	printf("%x%x", ptr1[-1], *ptr2);//ptr1[-1]实际上为*（ptr1-1）
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//正常放入数组中的，应该是{{}，{}}而题中则是逗号表达式
//	int * p= a[0];//一个地址只有有&或单独放入sizeof中才表达整个数组地址，其余都是首元素地址
//	              //那么a[0]代表是第一行，由于上边说明，所以代表第一个元素。
//	printf("%d", p[0]);
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//&aa 是整个数组地址
//	int* ptr2 = (int*)(*(aa + 1));//aa此时表示首元素地址，即第一行地址，+1后表示第二行地址
//	                              //解引用后就是第二行数组，强制转化为int*类型后还是第二行地址
//	                              //没有&，不单独在sizeof中，则表示首元素地址
//	printf("%d%d", *(ptr1 - 1), *(ptr2 - 1));//10 ，5
//	return 0;
//}
//此题注意cpp位置变化第34，35有变化以后则要在这基础分析。
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s", **++cpp);
//	printf("%s", *--*++cpp+3);//注意此时cpp自加自减位置已经变化
//	                          //两层解引用都完成后再+3就要根据字符le
//	                          //以此为例都解完后进入enter,则此时就是enter的首元素地址加三打印到最后就是ER
//
//	printf("%s", *cpp[-2]+3);// 相当于**(cpp-2)+3这时的cpp以及下一行cpp要根据上边的自增自减判断位置
//	printf("%s", cpp[-1][-1]+1);//相当于8(*(cpp-1)-1）+1
//	return 0;
//}
//除了sizeof（arr）和&arr中的数组名，表示整个数组，其他地方的数组名arr都是首元素地址  