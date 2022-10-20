#include<iostream>
#include<string>
using namespace std;
/*学一门语言，c、c++ ；第一动手；第二内存布局学习很重要；第三调试很重要 */
/*数据结构，听懂实践 */
/*操作系统+计算机网络 */
/*数据库+脚本语言 */

/*前面20多节课是初识系列，直接看初识指针*/
/*指针初识：指针就是地址！
* int a = 10;
* int* p = &a; *代表p是一个指针变量；int 是指向的对象类型；&用来取地址；
* 指针标量用来存放地址，那它占用几个字节？答：一般32位系统占4个，64位系统占8个；
*/
//int main()
//{
//	int a = 10;
//	cout<<&a<< endl; //&符号是用来取地址的；
//	int* p = &a;  //定义一个指针变量 指向 a
//	cout<<*p<<endl;  //对指针变量进行取值操作（解引用操作），为10
//	system("pause");
//	return 0;
//}


//冒泡排序的实现
//1.正常：
//void Rank(int arr[],int len)
//{
//	int t = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = i+1; j < len ; j++)
//		{
//			if (arr[i]> arr[j])
//			{
//				t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {10,2, 1,3,8,4,5,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Rank(arr,len);
//	int k=0;
//	for (k=0 ; k< len; k++)
//	{
//		cout << arr[k] << ", ";
//	}
//	return 0;
//}
// 
//2.指针：错误！将在指针与数组章节学习；
//void Rank(int *p, int len)
//{
//	int t = 0;
//	for (int i = 0; i < len - 1; i++,p++)
//	{
//		if (*p > *(p + 1))
//
//		{
//			t = *p;
//			*p = *(p + 1);
//			*(p + 1) = t;
//		}   
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,10,1,3,8,4,5,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Rank(arr, len);
//
//	int k = 0;
//	for (k = 0; k < len; k++)
//	{
//		cout << arr[k] << ", ";
//	}
//	return 0;
//}