#include<iostream>
#include<string>
using namespace std;
/*变量的作用域和生命周期；
* 作用域方面，全局变量，即大括号之外的变量，作用于整个工程；即使同工程的其他c文件也能使用，需要声明exten a；
* 局部变量，即某个大括号内的变量，作用域该大括号，包括内部的大括号内部；
* 生命周期方面，局部变量的生命是main函数的生命周期，即程序的生命周期；
* 生命周期，局部变量的生命在进入该变量所在的大括号开始，出大括号时生命结束；

*/
//int add()
//{
//	int c = 4;
//	//cout << c << endl;
//	return c;
//}
//
//int main()
//{
//	bool ass = false;
//	bool pp = true;
//	if (ass && pp)
//		cout << "quanzhne" << endl;
//	else
//		cout << "buquanzhne" << endl;
//	
//	cout << ass<<endl;
//	int b = 20;
//	int* p = &b;
//	cout << sizeof(p) << "xh" << endl;
//	const int a = 10;
//	int arr[a] = { 0 };
//	cout << arr[1] << endl;
//	{
//		cout << "ok \n";
//		{
//			cout<<a<<endl;
//		}
//		int b = 20;
//		cout << a << endl;
//		cout<<add()<<endl;
//	}
//	system("pause");
//	return 0;
//}

