#include<iostream>
#include<string>
#include <cassert>
using namespace std;
//Peng哥C语言，作业部分记录；


//***1.求字符串的长度；
//int main()
//{
//	char a[] = { 'b','i','t'};        //1
//	char b[] = { 'b','i','t' ,'\0' }; //2
//	char c[] = "bit";                 //3
//	cout<<strlen(a)<<"," << strlen(b) << "," << strlen(c) << endl;  //结果 19,3,3；
	//原因：b和c都是正经的c风格字符串，求长度都有'\0'终止，只是一个存放字符的数组，求长度没个停止信号；
	//题外话：define不是关键字，是预处理指令；
//}


//***2.static修饰；
//static可以修饰函数，局部变量，全局变量；只改变变量的生命周期，不是说修饰的东西不能更改；
//int plus_test(int a)
//{
//	static int b = 0;
//	b += 2;
//	return a + b;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		cout<<i<<":" << endl;
//		cout<<plus_test(a)<<endl; //输出的是2,4,6；而不是2,2,2；因为b看似每次进入函数被重新定义，
//	}                             //但是被static修饰，生命周期变长，上一次的结果进入下一次函数还在起作用；
//	cout<<i<<endl; //小测试，在main里定义的，在for里和这里都能用；这for里创建的，在for外不能用；
//}
//小练习，算小于某个数的所有2的次幂；
//int test1(int i)
//{
//	int ret = 1;
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		ret *= 2;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int a;
//	int k = 0;
//	cin >> a;
//	for (k = 1;test1(k)<a; k++)
//	{
//		cout<<test1(k)<<" ";
//	}
//
//	return 0;
//}


//***3.注意逗号表达式，test((V1,V2),(V3,V4),V5,V6) //逗号表达式算最后面那个；


//***4.逆序；
//4.1普通实现；
//int main()
//{
//	char a[] = "abcde";
//	char b = '\0';
//	int len = strlen(a);
//	cout <<len;
//	int i = 0;
//	for (i = 0; i < len / 2; i++)
//	{
//		b = a[i];
//		a[i] = a[len - i - 1];
//		a[len - i - 1] = b;
//	}
//	cout << a;
//	return 0;
//}


//5.***求各位之和(递归)
//int sum(int a)
//{
//	if (a != 0)
//	{
//		return (a % 10) + sum(a / 10);
//	}
//	else   //很关键，递归到最后一步那个函数也要输出一个值撒，这个是自己定义出来的，还剩一位，就输出那一位，都不剩了，输出0；
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	cin >> a;
//	cout<<sum(a);
//	return 0;
//}


//***6.递归实现n的k次方；
//int test_2(int n,int k)
//{
//	if (k!=0)
//	{
//		return test_2(n,k-1)*n;
//	}
// else
//	    return 1;
//}
//
//int main()
//{
//	int n,k;
//	cin >> n>>k;
//	cout<<test_2(n,k);
//}