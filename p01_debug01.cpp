#include<iostream>
#include<string>
#include <cassert>
using namespace std;
//Peng哥C语言教程 记录
//degub 调试技巧；


//***1.用一个例子学习怎么调试；
//F5：启动调试，经常用来跳到下一个断点；
//F9：在任意位置创建和取消断点，可以使程序在想要的地方停止执行，再一步步执行下去；
//常和F5配合使用，先用F9设置断点，再用F5直接跳到断点处；
//F10：逐过程，处理过程，可以是一个语句或者一个函数；
//F11：逐语句，进入函数内部；
// shift+F5，退出调试；
//CTRL+F5：开始执行（不调试），让程序直接运行而不调试；
//总结 ，F10和F11用来粗调和细调，F9和F5配合快速跳到断点处，ctrl+F5只执行，不调试；
/*bool judge(int a) 
{
	for (int i = 2; i <=sqrt(a); i++) 
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int x = 200;
	cout << "0-" << x << "内所有的素数有：" << endl;
	for (int i = 2; i <= x; i++) 
	{
		if (judge(i))
			cout << i << ", ";
		else
			continue;
	}
	return 0;
} */   
//调试的时候知道每一步大概的预计值，在调试的时候哪一步不符合预计，则出错在相应段；


//***2.条件断点：
//int main() {
//	int arr[5] = { 0 };
//	for (int i = 0; i <= 5; i++)
//	{
//		*(arr + i) = i;//设置断点后，在断点处再具体设置断点的条件，更加细化断点；
//	}
//	return 0;
//}


//***3.突然想总结一下数组传参后的调用；
//void test1(int arr[])
//{
//	cout<<*(arr+1)<<endl;   //这句话验证
//	cout<<arr[1]<<endl;
//	arr[2] = 0;   //这句话为了验证这种方式的传递看似传值，本质还是传址，arr就是首元素地址！
//}                       //即使写了arr[i],也会转化成*(arr+i)去访问，因为在这里居然可以改值！
//void test2(int *p)    //用指针接收；
//{
//	cout << p[1] << endl;//居然可以这么用，因为arr=p，都是首元素地址，所以arr[i]=p[i];
//	cout<<*(p+1)<<endl;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	//test1(arr);
//	cout<<arr[2]<<endl;
//	test2(arr);
//	return 0;
//}


//***4.自己写代码实现字符串的拷贝；把源字符串全部拷贝到目标字符串，包括'\0';这是打印的终止符；
//void copy(char a[], char b[])
//{
//	int i = 0;
//	for ( i; b[i] != '\0'; i++)  //我一开始在上面int i，在for里又int i了，这个刷新了i，变成了在for里面的局部变量；
//	{                            //出了for就销毁了，所以在把最后一个b[i]给a[i]的时候,给的是第一个int i，也就是0位置的；
//		a[i] = b[i];
//	}
//	a[i] ='\0';   //现在是变化后的i，就是'\0'的赋值了；
//}               //这样做的原因：拷贝是把des直接占完用掉，所以把'\0'也考过去，作为打印的终止，因为打印到'\0'处停止；
//
//int main()
//{
//	char a[] = "xuhaoer";
//	char b[] = "qian";
//	copy(a, b);
//	int len = sizeof(a) / sizeof(a[0]);
//	cout <<len<< endl;  //8,'\0 也占格子，但是不输出；
//	for (int i = 0; i < len; i++)
//	{                   //没必要这么打；这么打就是除了空格全都打，即使中间有空格，跳过空格也要打后面的；
//		cout << a[i]  ; //即使非要打印八次，也不打印空格'\0'；
//	}
//	printf("%s\n", a);  //qian er ，打印时以\0为终点，只能看到qian；
//	cout <<a<< endl;;     //cout a,同printf，这两个打印字符串都是以'\0'结束；
//	cout << a[4];//而不是o,看上去只是qian覆盖了xuha，实际上b的'\0'覆盖了a的o，而字符串的打印以'\0'为结束；
//	cout << a[5] << "," << endl;
//	cout<<sizeof(a)/sizeof(char)<<endl;  //'\0'也占位；
//	return 0;
//}


//***.5.优化方法：
//5.1.断言；assert(drc!=NULL); 意思是如果执行到这里，符合这句，继续执行，如果不符合，则断掉，报错错误信息；
    //相当于放了一个报警器，报出预料可能出错的地方；


//5.2.☆把不能修改的值前加 const；变成常变量本质还是变量，但不能被修改；
//常量指针和指针常量的名字怎么记，const int *p,const在*前，常量指针；int * const p,*在const前，指针常量；
//const int *p,const修饰*p，定值，是指针指向的内存中的值不可以修改，指针的指向可以变；
//int * const p，const修饰p，定址，是指针指向不可变，指向的内存中的值可以修改；
//还有一种，const int * const p;均不可更改；
//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int* p = &a; //常量指针；
//	//*p = 50;报错，指向的内存中的值不能改变；
//	a = 50;   //用指针修饰的方法被限定了，但是直接访问值还是可以滴；
//	cout<<*p<<endl;
//	p = &b;//指针指向可以变；
//
//	int* const q = &b;//指针常量；
//	*q = 50; //指向的内存中的值可以改变；
//	//q = &a;报错，指针指向不能变；
//
//	return 0;
//}

//5.3.


//***6.自己根据上述优化方法写出strlen；
int my_strlen(const char * c)
{
	assert(c != NULL); //因为后面要对c解引用，先判断他不是空指针；也可写成assert(c)；
	if (*c != '\0')
	{
		return 1 + my_strlen(c + 1);
	}
	return 0;  //很关键，转折点，在最后一个'\0'时返回一个0，再往上循环0+1+1+...；即其他每次递归加一，这次加0；
}
int main()
{
	char c[] = "xuhao";
	cout<<my_strlen(c)<<endl;
	return 0;
}