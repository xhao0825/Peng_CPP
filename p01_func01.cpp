#include<iostream>
#include<string>
using namespace std;
//鹏哥C语言函数部分记录；2022.10.20

//***1.自己写一个函数，比出大的；
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//	{
//	int a, b = 0;
//	cout << "请输入两个数以比较大小" << endl;
//	cin>>a>>b;
//	cout << "较大的数是" << get_max(a, b);//这里有函数的嵌套使用；
//	return 0;
//}


//***2.自己写一个函数，交换两个数；
// 如果不用地址取值等操作，会失败；
// 因为形参和实参分别开辟空间，在函数里对形参改变，不会影响实参；
// 下面3中用一个小例子证明了这一点；
// 结论：如果只是值的操作，比如比较，运算只用值就可以了，返回的还是正确的数字；
// 但是涉及到对值的更改，涉及到取相应地址的值，就会失败，需要用取值和取址操作；
//void Swap(int* a, int* b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a, b = 0;
//	cout << "请输入两个数以交换" << endl;
//	cin >> a >> b;
//	Swap(&a, &b);
//	cout << "交换后:" << a << " ，" << b;
//	return 0;
//}


//***3.1.用于2的验证（失败）；传值调用；
//int Change(int x)
//{
//	x = 10; //这是新空间下开辟的地址下的10，临时拷贝出来的，不影响实参的值
//}         //只有建立了联系，才可以操作；
//int main()
//{
//	int a=5;
//	Change(a);
//	cout << "改变后的a为:" << a ;
//	return 0;
//}
// 
//3.2.用于2的验证（成功）；传址调用；
//void change(int* x)  //把地址存放到指针变量x中；
//{
//	*x = 10; //    把实参地址里存放的值修改，按地址索值；
//}           //
//int main()
//{
//	int a=5;
//	change(&a);  //把实参的地址拿出来
//	cout << "改变后的a为:" << a ;
//	return 0;
//}
//3.3.传值调用和传址调用的区别；
//传值：函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参。
//传址：把函数外的变量的内存地址传给函数参数；按址索值；让函数内外的变量建立联系，
      //函数内可以操作外部变量；


//***4.例题一：写一个函数判断一个数是不是素数；
//bool judge(int a)  //这里也可以int，返回1或0，再用1 or 0判断是否为素数
//{
//	for (int i = 2; i <=sqrt(a); i++)  //注意，这里是<=sqrt(a)（优化）；
//	{
//		if (a % i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int x = 200;
//	cout << "0-" << x << "内所有的素数有：" << endl;
//	for (int i = 2; i <= x; i++)  //200这个数也要判断；
//	{
//		if (judge(i))
//			cout << i << ", ";
//		else
//			continue;
//	}
//	return 0;
//}


//***5.例题二：写一个函数判断某年是不是闰年；
//注意，不写返回类型，则默认为返回int类型；写了void，则不返回；概念不同；
//bool judge_year(int a)  //这里也可以int，返回1或0，再用1 or 0判断是否为闰年；
//{
//	if ((a%4==0)&&(a%100!=0)||(a%400==0))
//		return true;
//	else
//	    return false;
//}
//int main()
//{
//	int x = 2000;
//	cout << "1000-" << x << "年内的闰年是：" << endl;
//	for (int i = 1000; i <= x; i++)  
//	{
//		if (judge_year(i))
//			cout << i << ", ";
//		else
//			continue;
//	}
//	return 0;
//}


//***6.顺序查找，输出查找数组对应元素的下标；
//int find(int *p,int a,int len)//用int型指针变量接收这个收地址
//                              //后面访问数组就解引用*p，也可以用;
//{                 //这是好理解的传递数组的方式，还有一种，传的是arr，接的是arr[],也能用，arr[i]访问数组元素；验证在12；
// 数组作为函数的形参”实际上是一个指针类型的形参，即将来可以接受一个数组名表示的数组的起始地址！
// 而并不是将一个数组的所有元素传给一个函数，仅仅传递的是一个小小的指针变量
// 
//	for (int i = 0; i < len; i++,p++)
//	{
//		if (*p == a) 
//			return i;
//		
//	}
//	return -1;  //这里不能是0，因为第一个数的下标也是0；
//	            //如果找的是第一个数，则返回0，没找到。这是不对的；
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,5,8,10 };
//	int len = sizeof(arr) / sizeof(int);
//	int a=0;
//	cin >> a;
//                               //传的是arr，即数组首元素的地址，是个int型元素的地址；
//	if (find(arr, a,len)==-1)  //当且仅当返回-1时，没找到；其他都是返回找到的值的下标；
//	{
//		cout <<"找不到" << endl;
//	}
//	else
//		cout<< find(arr, a,len) << endl;
//	return 0;
//}


//***7.二分查找，输出查找数组对应元素的下标；
//int two_find(int arr[], int a, int len)  //这是在定义新的 ，意思传过来数组，其实就是个首地址；
//{                                  //类似的还有，int *p = &a； ，定义的时候*p，指针变量的名字是p；
//	int middle = 0;
//	int left = 0;
//	int right = len - 1;  //此例中，left为0，right为9；
//	while (left<=right)   //循环查找的条件，只要没出现return，循环执行二分查找；
//	{
//		middle = (left+right) / 2;  //二分的含义，每次首位相加除2得出中间下标，
//		if (arr[middle] < a)        //根据中间值与查找值的大小判断往那边继续找；
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > a)
//		{
//			right = middle - 1;
//		}
//		else  //正好找到了；
//		{
//			return middle;
//		}
//	}
//	return -1;  //全部循环完也没找到；
//}
////我认为可以在函数中算len，不对，因为传数组传的是数组首元素的地址，is指针；sizeof一除等于1；必须在main里算出作为参数一起传；
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);   //arr数组名一般表示数组首元素的地址；
//	int a = 0;                             //***数组名不代表首元素地址的两种例外情况
//	cin >> a;                              //1.&arr，这里是取整个数组的地址  ；2.sizeof(arr)，这里的arr代表整个数组；
//                                         // arr 与 &arr含义不同，arr首元素地址，&arr数组地址；
//                                         //所以有 int len = sizeof(arr) / sizeof(int);
//	if (two_find(arr, a, len) == -1)  //当且仅当返回-1时，没找到；其他都是返回找到的值的下标；
//	{
//		cout << "找不到" << endl;
//	}
//	else
//		cout << two_find(arr, a, len) << endl;
//	return 0;
//}


//***8.写一个函数，每调用一次，num+1；
//void func(int *p)  //因为对函数外部的值有改变，用地址传递；
//{
//    (*p)++;   //操作就是按址取值，把值自加；运行一次则+1；
//}
//
//int main()
//{
//    int num = 0;
//    func(&num);
//    func(&num);
//    func(&num);
//    cout << num;
//    return 0;
//}
// 注意！
//函数的声明和定义一般分开放，声明在头文件中，定义在cpp文件中，用时include .h文件即可
//这样做一方面方面重用，另一方面cpp和.h可以生成lib静态文件库，只用lib和.h也可以重用，但不暴露cpp；


//***9.递归，函数自己调用自己的行为叫做递归；
//例一，接收一个数，打印出每一位，如12345，打印出1 2 3 4 5；
//void  printx(int a)
//{
//    if(a>9)    //控制循环的条件；<=9的时候直接打印，不然就打印最后一位，把前面几位取出，进行递归；
//    {
//         printx(a / 10) ; //取出前几位；选出进入下次递归的参数的规则；
//    }
//    cout << a%10<<" "; //打印最后一位；
//}
//int main()
//{
//    int number;
//    cin >> number;
//    printx(number);
//    return 0;
//}
//两个重点，1.设置递归结束的条件； 2.设置每次递归后 不断逼近跳出条件的规则；



//***10. 递归时出现栈溢出的解释：递归的时候不断在栈区开辟空间，
      // 如果递归的层次太深，当栈区空间被耗完，则栈溢出；
//栈区存放： 局部变量，函数形参；
//堆区存放：动态内存分配的；
//堆区存放：动态内存分配的；
//静态区：全局变量，静态变量；
//So，写递归的时候：1.不能写死递归，要有跳出条件，每次递归逼近该条件;
                  //2.递归的层次不能太深，否则会栈溢出;


//***11.1补充自学知识：字符；
//int main()
//{
//    char c='a';    //char类型，后面用单引号；
//    cout<<c<<endl;
//    int i = c;    //获取ASCII码；
//    cout<<i<<endl;
//    c = c + 1;    //下一个字母；
//    cout<<"下一个:"<<c<<i+1<<endl;  //下一个字母的ASCII;
//    return 0;
//}

//***11.2补充自学知识：字符串；
 //C风格字符串：char ach1[] = "Hello";  //虽然看不到\0,但结尾也是有的；占用内存，但不算在长度里；
              //char ach2[] = { 'H', 'e', 'l', 'l', 'o', '\0' };这里最后必须加\0，不然不知道结束，不是字符串；
       //对C风格的字符串操作的库函数有四个：strlen();strcmp();strcat();strcpy();
       //strlen(): int length = strlen(ach2);//获取字符串的长度，不包含结尾的'\0'，\0是strlen数数的结束标志,也占一个位置；
       //strcmp(): int ret = strcmp(ach1, ach2); //比较两个C风格字符串的大小，如果相同，则返回值是0
       //strcat(): char ach1[] = "Hello"; char ach3[20] = "World";strcat(ach3, ach2); //将两个两个C风格字符串合并
       //strcpy(): char ach4[20];strcpy(ach4, ach2); //拷贝指定的C风格字符串

       //C++风格字符串：
            //string sgreet("Hello std::string");  //定义一个C++风格的字符串；
            //cout << sgreet << endl;   

            //cout << "Enter a line of string:" << endl;
            //string sfirstLine;   
            //getline(cin, sfirstLine);  //获取输入的字符串

            //cout << "Enter another:" << endl;
            //string ssecondLine;      
            //getline(cin, ssecondLine);  //获取第二个

            //cout << "Result of connection:" << endl;
            //string sconnection = sfirstLine + " " + ssecondLine;  //连接
            //cout << sconnection << endl;

            //cout << "Copy of string:" << endl;
            //string scopy;
            //scopy = sconnection;   //拷贝
            //cout << scopy << endl;

            //cout << "Length of connection string: " << sconnection.length() << endl;  //长度


//***12.1测试数组传递的两种方法;字符串类型；
//void test1(int a[],int len)
//{
//    cout<<"用数组接收首地址：" << endl;
//    for (int i = 0; i < len; i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout << endl;
//}
//void test2(int* p,int len)
//{
//    cout << "用指针接收首地址：" << endl;
//    for (int j = 0; j < len; j++, p++)
//    {
//        cout<<*p<<" ";
//    }
//}
//
//int main()
//{
//    int arr[4] = {1,2,3,4};
//    int len = sizeof(arr)/sizeof(arr[0]);  //sizeof（arr）表示整个数组的长度；
//    test1(arr,len);
//    test2(arr,len);
//    return 0;
//}

//***12.2测试数组传递的两种方法;字符串类型；
//void test1(char a[],int len)
//{
//    cout<<"用数组接收首地址：" << endl;
//    for (int i = 0; i < len; i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout << endl;
//}
//void test2(char *p,int len)
//{
//    cout << "用指针接收首地址：" << endl;
//    for (int j = 0; j < len; j++,p++)
//    {
//        cout << *p << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    char ch[] ="xhaoandqianxi";
//    int len = strlen(ch);
//    test1(ch,len);
//    test2(ch,len);
//    return 0;
//}


//***13.1用指针接收数组，在函数中求出长度并返回；
//void test2(char* p)
//{
//    int count;    //有
//    cout << "用指针接收首地址：" << endl;
//    for (count = 0; (*p)!='\0'; count++,p++) //没到最后一个\0，就往后移一个char，并计数；
//    {
//    }
//    cout <<count <<endl;
//}
//
//int main()
//{
//    char ch[] = "xhaoandqianxi";
//    test2(ch);
//    return 0;
//}
//***13.2用指针接收数组，在函数中求出长度并返回；
//int test2(char* p)
//{
//    if (*p != '\0')
//    {                 //这里p++不对，返回的是p；用的p+1；应该p+1，返回p+1，用p；？？？？
//        return 1 + test2(p+1); //后面的test2(p+1)我想到了，递归了函数，不断逼近跳出条件；
//    }                          //每次往后移动一个类型单位；丢掉前面的一个； 
//    else                       //但是计数的方法没想到，这里每次return 1+test；递归一次+1；
//        return 0;
//}
//
//int main()
//{
//    char ch[] = "xhao";
//    cout<<test2(ch);
//    return 0;
//}