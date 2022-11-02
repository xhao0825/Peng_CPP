#include<iostream>
#include<string>
using namespace std;
//鹏哥C语言，指针初级和结构体初级记录；


//***1.指针为什么类型不同？ 解引用的时候访问相应大小的内存；移动指向的时候决定移动多少个位（步长）；
//比如存了int的地址，只存四个址中小的，在解引用的时候，又要根据此址扩展四个址来访问一个int值；    
//int main()
//{
//	int a = 10;
//	char c = 'a';
//	int* p = &a;
//	char* q = &c;
//	cout <<*p<<"," <<*q<<endl;
//	int arr[] = { 1,2,3,4 };
//	int* x = arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		cout <<x+i<<":" << *(x + i) << ",";  //int *指针，移动就4个字节的移，每次一个元素；
//	}
//	return 0;
//}


//***2.两种野指针 1.没有初始化的；2.越界访问的；
//例子1：
//int main()
//{
//	int* p;  //声明了，但未初始化，随便指了一个地址；
//	*p = 10;  //野指针1，给随机指向的地址空间赋值，非法；
//	return 0;
//}
// 如何避免；1.上来就初始化变量；2.不知道初始化啥，就int* p = NULL;
//例子2：
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int* p=arr; 
//	for (int i = 0; i <= 2; i++,p++) //这里是到3，指针多访问了数组外的区域，非法！
//	{
//		*p = 1;   //数组内的可以访问，外部的不可非法访问；
//	}
//
//	int* q =NULL;  //不用的时候可以先NULL；
//	*q = 10;     //但还是不能非法！
// 
//	return 0;
//}


//***3.指针的运算，比较与加减整数：
// 3.1指针+i
//int main()   //用了指针的判断和运算；
//{
//	int arr[4] = { 0 };
//	int* p=NULL;
//	for (p = arr; p < &arr[4]; p++)  //把元素的i换成了元素下标的比较，地位的元素确实地址小，成立！
//	{                                //arr+i，就是arr这个地址对应的元素往后移i次指向的元素的地址！
//		*p = 4;
//	}
//	return 0;
//}
// 3.2.1指针-i 版本一：在条件里面--，在操作里面赋值；
//int main()
//{
//	int arr[4] = { 0 };
//	int* p=NULL;
//	for (p = &arr[len-1]; p >= &arr[0]; p--)  //跟3.1比起来，倒过来；注意，第一次赋给最后一个的地址是len-1；
//	{                             
//		*p = 4; 
//	}
//	return 0;
//}
// // 3.2.2指针-i 版本二：在操作里面--和赋值；
//int main()
//{
//	int arr[4] = { 0 };
//	int* p=NULL;
//	for (p = &arr[len]; p > &arr[0]; ) //第一次指向最后一个有效元素的地址的下一个地址；
//	{                                      //上来的操作是先减，后赋值，所以减之前往后多指了一位；
//		*--p = 4;
//	}
//	return 0;
//}
//指针相减，求出这两个地址的元素相隔的距离；
//解释：反过来想，p+i是p往后移i个，则，p+i-p=i是求出这个步长；
/////☆ 注意：虽然3.2.1和3.2.2都可以，但是一般只允许用3.2.2；因为允许指针与指向的最后元素后面的内存比较；
//////////////但是不允许与指向的第一个元素之前的那个内存比较；


//***4.小解惑：
//之前在用指针访问数组遍历的时候老是
//for (int i = 0; i < len; i++,p++)
//{
//	*p;
//}   //这样的话，不好，对一次++，没把i用起来
//可以这样
//for (int i = 0; i < len; i++)
//{
//	*(p + i);  //这样就把i用在遍历上了；
//}


//***5.指针和数组
//void test(int* x)
//{
//	cout << x[3]<<endl;
//	cout << arr[3] << endl;//这是错的，用数组接收的可以这样，用指针接收的可以用x+i，也可以用x[i];
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;             //一下全是arr[2]的表示方式：
//	cout << arr[2] << "," << p[2] << "," << *(p+2) << "," << *(arr+2) << "," << *(2+arr) << "," << 2[arr] << "," << 2[p] << ",";
//	test(arr);   //这里又做了个小测试，把arr传址给test，在test可以用指针x[i]访问,当然也可以*(x+i)；
//	return 0;
//}
//☆，小结，数组传参时，如果用数组arr[]接收，访问用数组arr[i]，如果用指针p，可以用*(p+1),也可以用p[i],因为p=arr；首地址；


//***6.二级指针  用于存放变量地址的变量叫指针变量，用于存放指针变量存放的地址的变量叫二级指针；
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;  //用pp存放指针p的地址；
//	cout << *pp <<endl<<p <<endl<< *p <<endl<< a << endl;
//	return 0;
//}


//***7.指针数组  //用于存放指针变量的数组；
//int main()
//{
//	int arr[] = {1,2,3,4};
//	int* arrp[] = {arr,arr+1,arr+2,arr+3,arr+4};
//}


//***8.结构体入门
//8.1:结构体的创建与访问
//int main()
//{
//	struct person
//	{
//		string name;
//		char sex;
//		int age;
//	} s1;  //这里也可以声明一下；
//
//	struct person p = {"xhao",'m',18}; //声明后直接定义；
//	struct person p2;  //先声明，下面分别定义；
//	p2.name = "qianxi";
//	p2.sex = 'f';
//	p2.age = 18;
//	return 0;
//	s1.age = 80;  //上面生命的这里可以定义；
//}
//8.2：结构体向函数传值和传址
//struct person  //这里我是放在mian之外的，因为其他函数也要用到，把他作为全局的比较方便；
//{              //如果写在main里面，则main里面可以用，但函数里用不了；
//	string name;
//	char sex;
//	int age;
//};
//void test1(struct person t)  //这里是值传递，只能复制一份来操作，不能改变；
//{
//	cout << t.age << t.name << endl;
//}
//void test2(struct person *t) //这里是地址传递，可以改变个参数的值；
//{
//	t->name = "xuhao";
//	t->age = 18;
//	t->sex = 'm';
//}
//int main()
//{
//	struct person p = { "11",'1',1 };
//	//test1(p);
//	test2(&p);
//	cout << p.name << p.sex << p.age;
//	return 0;
//}