#include<iostream>
#include<string>
#include <cassert>
#include <stdlib.h>
using namespace std;
//***Peng哥C语言，指针进阶教学；


//***1.字符指针；
//int main()
//{
//	char a[] = "abc";
//	char* p1 = a;
//	const char* p2 = "def";
//	const char* p3 = "def";  //p2p3同，因为常量字符串不重复创建，p2p3指向同一个字符串，同；
//}


//***1.指针数组；
//int main()
//{
//	int a[] = { 1,2,3 };
//	int b[] = { 1,2,4 };
//	int c[] = { 1,2,5 };
//	int* p1 = a;
//	int* p2 = b;
//	int* p3 = c;
//	int* d[] = { p1,p2,p3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			cout<<*(d[i]+j)<<"," ;
//		}
//		cout << endl;
//	}
//	return 0;
//}


//***3.数组指针；
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	int arr[3] = { 1,2,3 };
//	int* p2 = arr;   //用来存放数组首元素地址的指针变量；实际是arr 的别名；
//	int* p3[2] = { arr ,arr+1};  //指针数组，用来存放指针的数组；
//	int (*p4)[3] = &arr;  //数组指针，用来指向数组的指针，不是首元素，而是整个数组；不写括号会和指针数组混淆；
//	//解读：(*p4)是个指针， [3]指向的是一个数组，int ,数组里面存放的是int型变量；
//
//	//p2和p4不同，虽然值一样，但含义和类型不同，p2就是整型指针变量，跳的话跳4个字节；
//	//p4的值虽然也是首元素地址，但代表整个数组的地址，类型为数组指针，即指向数组的指针，跳的话跳整个数组；
//
//	//理解的时候可以把指针单独理解，把指针数组排除，因为他就是存放指针的数组，而不是一个指针；
//	//真正的指针要有指向的东西，指向的类型，而数组指针就是指向整个数组的指针；get√；
//	//test
//	cout << arr <<","<<p2<<"," << p4 << endl; //全是首元素的地址；
//	cout <<arr+1<<"," << p4 + 1 << endl;  //arr+1跳四个字节，p4+1跳 4*3=12个字节；
//
//	//理解*p4；因为p4是arr取地址来的，即首元素地址取地址为整个数组地址，则p4解引用之后又回去了，*p4为arr；
//	return 0;
//}
//几个概念的理解
//0. int *p =&a;普通指针变量；
//1. int *p1 [10]  :指针数组，本质是一个数组，用来存放指针，指针又指向整形变量；
//2. int (*p2)[10] :p2是数组指针，指向一个有10个元素的数组，数组里面放的是int型变量；
//3. int (*p3[10])[5] :p3是一个指针数组，里面放了10个数组指针，每个指针指向一个存放5个int型变量的数组；即存放数组指针的数组；
                      //已经确定是数组指针了，跟首元素地址的指针是不一样de 


//***4.数组指针的使用；二维数组传参的两种实现放法；
//void test1(int arr[][5],int r,int c)//数组名传递法，实际本质还是数组，不解释；
//{
//	int i ,j= 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			cout<<arr[i][j]<<",";
//		}
//		cout << endl;
//	}
//}
//void test2(int (*arr)[5], int r, int c) //指针传递法；虽说传的是数组的首元素地址，但二维的首元素算第一行！！！
//{                                       //所以首元素的地址是一个数组指针，即一个指针指向第一行所有元素；
//	int i, j = 0;                         //因此这里用数组指针接收；
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			cout << *(*(arr+i)+j) << ",";   //*(arr+i) 解引用数组指针得到的是每行的首元素地址，就是普通的指针变量了；
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	test1(arr, 3, 5);
//	test2(arr, 3, 5);
//	return 0;
//}


//***5.小总结
//一维数组函数接收：
//void test1(int arr[]){
//}
//void test2(int arr[20]){
//}
//void test3(int *arr){
//}
//void test4(int *arr[]){
//}
//void test5(int **arr){
//}
//int main()
//{
//    int arr[20] = { 0 };
//    int* arr2[20] = { 0 };
//    test1(arr);
//    test2(arr);
//    test3(arr);
//    test4(arr2);
//    test5(arr2);
//}
//二维数组函数接收：
//void test1(int arr[3][5]) {
//}
//void test2(int arr[][5]) {
//}
//void test3(int (*arr)[5]) {
//}
//
//int main()
//{
//    int arr[3][5] = { 0 };
//
//    test1(arr);
//    test2(arr);
//    test3(arr);
//}


//***6.困惑的地方小结：
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    int arr[] = { 1,2,30 };
//    int* p6 = arr;
//    int(*p2)[3] = &arr;//表面上值是一个地址，但存放整个数组地址，所以不是普通的指针变量； 
//    int* p4[] = { arr,arr + 1 }; //指针数组，存放普通的指针，指针指向的数据类型是指针数组的类型；
//    //int *p5 = p2;//已经不是普通的指针了；
//    cout << p4[0] << p4[1];
//    int* p1[] = { p,p + 1 };
//    return 0;
//}
//


//***7.函数指针：存放函数地址的指针，add=&add；
//定义：类型(*pf)(类型，类型)
//int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int (*p)(int, int) = &add; //定义一个函数指针；
//    cout<<(*p)(a, b); //函数指针解引用并传值；
//}


//***8.函数指针数组；用于存放函数指针的数组；
//int *p =&a;指针；                int *p[]={arr,arr+1}指针数组；
//int (*pf)(int,int)函数指针；         int (*pf[])(int,int) ={add,mina} 函数指针数组
//可以类比一下，只是在名字后面加了[]，就变成了存放这种东西的数组；
//void menu()
//{
//    cout<<"**************" << endl;
//    cout<<"** 0.加法 ****" << endl;
//    cout<<"** 1.减法 ****" << endl;
//    cout<<"** 2.乘法 ****" << endl;
//    cout<<"** 3.除法 ****" << endl;
//    cout<<"**************" << endl;
//
//}
//int add(int a,int b)
//{
//    return a + b;
//}
//int mina(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int dvi(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    menu();
//    int a = 0, b = 0, i = 0;
//    int(*pf[4])(int, int) = { add,mina,mul,dvi };
//    cout << "请输入指令" << endl;
//    cin >> i;
//    if (i >= 0 && i <= 3)
//    {
//        cout << "请输入两个数：" << endl;
//        cin >> a >> b;
//        cout << "结果是:" << endl;
//        cout << pf[i](a,b)<<endl;
//    }
//    else
//    {
//        cout << "啥玩意" << endl;
//    }
//
//    return 0;
//}


//***9.1指向 函数指针数组 的指针
//int add(int a, int b)
//{
//    return a+b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int main()
//{
//    int (*p1)(int ,int) = &add;  //函数指针1；
//    int (*p2)(int, int) = &mul;  //函数指针2；
//    int (*parr[2])(int, int) = { p1,p2 }; //存放函数指针的数组，函数指针数组；
//    int (*(*parrp)[2])(int, int) = &parr; //指向 函数指针数组 的指针；
//    return 0;
// 
// 0. int *p =&a;普通指针变量；
// 1. int *p1 [10]  :指针数组，本质是一个数组，用来存放指针，指针又指向整形变量；
// 2. int (*p2)[10] :p2是数组指针，指向一个有10个元素的数组，数组里面放的是int型变量；
// 3. int (*p3[10])[5] :p3是一个指针数组，里面放了10个数组指针，每个指针指向一个存放5个int型变量的数组；即存放数组指针的数组；
//}
//9.2顺便复习一下数组指针和指针数组，以及存放数组指针的数组；3的最后几行；
//总结☆ 普通指针int *p, 但是数组指针和函数指针如果写成int *p() ;int *p[]会混淆；p会先和后面结合，变成函数和数组了，不是指针了；
//       所以应该这么写：int *p ,int (*p)() ; int (*p)[] ;先判断出是指针，看后面的符号确定指向啥的指针；
//       在某个指针的名字后面加[],就是存放该指针的数组；   int *p[]   ; int (*p[])()    ; int (*p[])[]
//       再在这个名字(*p)就可以得到指向上述指针数组的指针；int*(*p)[] ; int (*(*p)[])() ; int (*(*p)[])[]


//***10回调函数, 视频116最后；
//回调函数本质上也是普通函数，只是调用机制有所区别——首先通过传参的形式将该函数的地址传递给其他函数，用函数指针接收；
//然后在其他函数中通过函数指针调用该函数。在其他函数中通过函数指针调用该函数的过程称为回调，而作为被调用的该函数则被称为回调函数。
//写一个函数A，在用时不是直接调用A，而是把A的地址传给函数B，B函数用函数指针接收，在B里访问A函数，叫做回调，函数A此时为回到函数；
// 
//第一个回调函数的例子

//void menu()
//{
//    cout<<"**************" << endl;
//    cout<<"** 0.加法 ****" << endl;
//    cout<<"** 1.减法 ****" << endl;
//    cout<<"** 2.乘法 ****" << endl;
//    cout<<"** 3.除法 ****" << endl;
//    cout<<"**************" << endl;
//}
//int add(int a,int b)
//{
//    return a + b;
//}
//int mina(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int dvi(int a, int b)
//{
//    return a / b;
//}
//
//int calcu(int (*pf)(int x, int y))  //定义一个B函数，用来接收回调函数；
//{
//    int x = 0, y = 0;
//    cin >> x >> y;
//    return pf(x,y);
//}
//
//int main()
//{
//    menu();
//    int  i = 0;
//    cout << "请输入指令" << endl;
//    cin >> i;
//    switch (i)
//    {
//    case 0:
//        cout << calcu(add);
//        break;
//    case 1:
//        cout << calcu(mina);
//        break;
//    case 2:
//        cout << calcu(mul);
//        break;
//
//    case 3:
//        cout << calcu(dvi);
//        break;
//    default:
//        cout << "输入指令错误";
//    }
//    return 0;
//}
//第二个例子，qsort函数；B函数已经有了，自己写A函数，作为B的一个参数，函数指针参数；
//C 库函数 void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)) 对数组进行排序
//struct stu
//{
//    int age;
//    char name[10];
//};
//
//int func_int(const void *x, const void *y) //先定义了两个万能指针指向待比较的参数；占两个空；
//{
//    return *(int*)x - *(int*)y;            //有了想要比较的元素，也知道了类型，要把这两个万能指针强制转化成需要的类型，再解引用得到值；
//}
//
//int func_char(const void* x, const void* y)
//{
//    return strcmp(((struct stu*)x)->name, ((struct stu*)y)->name);
//}
//
//int func_age(const void* x, const void* y)
//{
//    return ((struct stu*)x)->age - ((struct stu*)y)->age;
//}
//
//int main()
//{
//    struct stu s[3] = { {18,"xuhao"}, {16,"qianxi"},{1,"erha"} };
//    int i = 0;
//    int arr[] = { 1,5,8,9,6,4 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int lens = sizeof(s) / sizeof(s[0]);
//    for (i = 0; i < 5; i++)
//    {
//        cout << arr[i] << ",";
//    }
//    cout << endl;
//    qsort(arr, len, sizeof(arr[0]), func_int);  //没有返回值；
//    qsort(s, lens, sizeof(s[0]), func_char);
//    qsort(s, lens, sizeof(s[0]), func_age);
//    for (i = 0; i < 5; i++)
//    {
//        cout << arr[i] << "," ;
//    }
//    cout << endl;
//    for (i = 0; i < 3; i++)
//    {
//        cout << s[i].name << ","<< s[i].age ;
//    }
//}
//第三个例子，自己写代码实现Qsort,即写B函数，我先shishi;
//void swapx(char* a, char* b,int size)
//{
//    int i = 0;
//    char temp = '\0';
//    for (i = 0; i < size; i++)
//    {
//        temp = *(a + i);
//        *(a + i)= *(b + i);
//        *(b + i) = temp;
//    }
//}
//
//int func_int(void * x, void * y)
//{
//    return *(int*)x - *(int*)y;  //比较int型数据；
//}
//
//void xsort(void* a, int len, int size, int (*func)(void * x, void * y))
//{
//    int i = 0;
//    int j = 0;
//    int temp =0;  //用于交换，但是不通用；
//    char* p0 = (char*)a;
//    for (i = 0; i < len - 1; i++)
//    {
//        for (j = 0; j < len - 1 - i; j++)
//        {
//            if (func((p0+j*size), (p0 + (j +1)* size)) > 0)  //key point,把两个待比较的元素放进去；前比后大则交换；
//            {
//                swapx((p0 + j * size), p0 + (j + 1) * size,size);
//                //temp = *(p0 + j * size);   //这三行用于交换，但是不通用，因为temp需要有一个类型；
//                //*(p0 + j * size) = *(p0 + (j+1) * size );
//                //*(p0 + (j + 1) * size) = temp;
//            }
//            else
//                continue;
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 7,2,3,4,8,5 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    xsort(arr, len, sizeof(arr[0]), func_int);
//    int k = 0;
//    for (k = 0; k < len; k++)
//    {
//        cout << arr[k] << ",";
//    }
//    return 0;
//}


//***11. void指针学习：
//int main()
//{
//    int a = 10;
//    char ch = 'w';
//    void* p;
//    p = &a;
//    //*p; 万能指针是先指向存放元素的首地址，
//    //但是不知道解引用几个自己，地址加1跳过几个字节，所以要先强制转换类型再解引用；
//    void *p2 = &ch;
//    cout<<*(int*)p;
//    cout << *(char*)p2;
//    return 0;
//}


//***12. 数组笔试题： 未
//一维数组
//int main()
//{
//    一维数组
//    int a[] = { 1,2,3,4 };
//    printf("%d\n", sizeof(a));         //16
//    printf("%d\n", sizeof(a + 0));     //4
//    printf("%d\n", sizeof(*a));        //4
//    printf("%d\n", sizeof(a + 1));     //4
//    printf("%d\n", sizeof(a[1]));      //4
//    printf("%d\n", sizeof(&a));        //4
//    printf("%d\n", sizeof(*&a));       //16
//    printf("%d\n", sizeof(&a + 1));    //16 ？4
//    printf("%d\n", sizeof(&a[0]));     //4
//    printf("%d\n", sizeof(&a[0] + 1)); //4
//
//    //字符数组
//    char arr[] = { 'a','b','c','d','e','f' };
//    printf("%d\n", sizeof(arr));         //6
//    printf("%d\n", sizeof(arr + 0));     //1
//    printf("%d\n", sizeof(*arr));        //1
//    printf("%d\n", sizeof(arr[1]));      //1
//    printf("%d\n", sizeof(&arr));        //4
//    printf("%d\n", sizeof(&arr + 1));    //4
//    printf("%d\n", sizeof(&arr[0] + 1)); //1
//    printf("%d\n", strlen(arr));         //6
//    printf("%d\n", strlen(arr + 0));     //
//    printf("%d\n", strlen(*arr));        //
//    printf("%d\n", strlen(arr[1]));      //
//    printf("%d\n", strlen(&arr));        //
//    printf("%d\n", strlen(&arr + 1));    //
//    printf("%d\n", strlen(&arr[0] + 1)); //

    //char arr[] = "abcdef";
    //printf("%d\n", sizeof(arr));
    //printf("%d\n", sizeof(arr + 0));
    //printf("%d\n", sizeof(*arr));
    //printf("%d\n", sizeof(arr[1]));
    //printf("%d\n", sizeof(&arr));
    //printf("%d\n", sizeof(&arr + 1));
    //printf("%d\n", sizeof(&arr[0] + 1));
    //printf("%d\n", strlen(arr));
    //printf("%d\n", strlen(arr + 0));
    //printf("%d\n", strlen(*arr));
    //printf("%d\n", strlen(arr[1]));
    //printf("%d\n", strlen(&arr));
    //printf("%d\n", strlen(&arr + 1));
    //printf("%d\n", strlen(&arr[0] + 1));

    //char* p = "abcdef";
    //printf("%d\n", sizeof(p));
    //printf("%d\n", sizeof(p + 1));
    //printf("%d\n", sizeof(*p));
    //printf("%d\n", sizeof(p[0]));
    //printf("%d\n", sizeof(&p));
    //printf("%d\n", sizeof(&p + 1));
    //printf("%d\n", sizeof(&p[0] + 1));
    //printf("%d\n", strlen(p));
    //printf("%d\n", strlen(p + 1));
    //printf("%d\n", strlen(*p));
    //printf("%d\n", strlen(p[0]));
    //printf("%d\n", strlen(&p));
    //printf("%d\n", strlen(&p + 1));
    //printf("%d\n", strlen(&p[0] + 1));

    ////二维数组
    ////二维数组
    //int a[3][4] = { 0 };
    //printf("%d\n", sizeof(a));
    //printf("%d\n", sizeof(a[0][0]));
    //printf("%d\n", sizeof(a[0]));
    //printf("%d\n", sizeof(a[0] + 1));
    //printf("%d\n", sizeof(*(a[0] + 1)));
    //printf("%d\n", sizeof(a + 1));
    //printf("%d\n", sizeof(*(a + 1)));
    //printf("%d\n", sizeof(&a[0] + 1));
    //printf("%d\n", sizeof(*(&a[0] + 1)));
    //printf("%d\n", sizeof(*a));
    //printf("%d\n", sizeof(a[3]));
//}


////***12. 指针笔试题：
////1.
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//} //2,5
//
////2.
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//    printf("%p\n", p + 0x1);
//    printf("%p\n", (unsigned long)p + 0x1);
//    printf("%p\n", (unsigned int*)p + 0x1);
//    return 0;
//}  //??
// 
////3.
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}  //4 ,
// 
////4.
//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;    
//}   //0;
////5.
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}   //
////6.
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}
//
////7.
//#include <stdio.h>
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
////8.
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//    return 0;
//}