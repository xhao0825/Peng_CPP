#include<iostream>
#include<string>
#include <cassert>
#include <stdlib.h>
using namespace std;
//***Peng��C���ԣ�ָ����׽�ѧ��


//***1.�ַ�ָ�룻
//int main()
//{
//	char a[] = "abc";
//	char* p1 = a;
//	const char* p2 = "def";
//	const char* p3 = "def";  //p2p3ͬ����Ϊ�����ַ������ظ�������p2p3ָ��ͬһ���ַ�����ͬ��
//}


//***1.ָ�����飻
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


//***3.����ָ�룻
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//
//	int arr[3] = { 1,2,3 };
//	int* p2 = arr;   //�������������Ԫ�ص�ַ��ָ�������ʵ����arr �ı�����
//	int* p3[2] = { arr ,arr+1};  //ָ�����飬�������ָ������飻
//	int (*p4)[3] = &arr;  //����ָ�룬����ָ�������ָ�룬������Ԫ�أ������������飻��д���Ż��ָ�����������
//	//�����(*p4)�Ǹ�ָ�룬 [3]ָ�����һ�����飬int ,���������ŵ���int�ͱ�����
//
//	//p2��p4��ͬ����Ȼֵһ��������������Ͳ�ͬ��p2��������ָ����������Ļ���4���ֽڣ�
//	//p4��ֵ��ȻҲ����Ԫ�ص�ַ����������������ĵ�ַ������Ϊ����ָ�룬��ָ�������ָ�룬���Ļ����������飻
//
//	//����ʱ����԰�ָ�뵥����⣬��ָ�������ų�����Ϊ�����Ǵ��ָ������飬������һ��ָ�룻
//	//������ָ��Ҫ��ָ��Ķ�����ָ������ͣ�������ָ�����ָ�����������ָ�룻get�̣�
//	//test
//	cout << arr <<","<<p2<<"," << p4 << endl; //ȫ����Ԫ�صĵ�ַ��
//	cout <<arr+1<<"," << p4 + 1 << endl;  //arr+1���ĸ��ֽڣ�p4+1�� 4*3=12���ֽڣ�
//
//	//���*p4����Ϊp4��arrȡ��ַ���ģ�����Ԫ�ص�ַȡ��ַΪ���������ַ����p4������֮���ֻ�ȥ�ˣ�*p4Ϊarr��
//	return 0;
//}
//������������
//0. int *p =&a;��ָͨ�������
//1. int *p1 [10]  :ָ�����飬������һ�����飬�������ָ�룬ָ����ָ�����α�����
//2. int (*p2)[10] :p2������ָ�룬ָ��һ����10��Ԫ�ص����飬��������ŵ���int�ͱ�����
//3. int (*p3[10])[5] :p3��һ��ָ�����飬�������10������ָ�룬ÿ��ָ��ָ��һ�����5��int�ͱ��������飻���������ָ������飻
                      //�Ѿ�ȷ��������ָ���ˣ�����Ԫ�ص�ַ��ָ���ǲ�һ��de 


//***4.����ָ���ʹ�ã���ά���鴫�ε�����ʵ�ַŷ���
//void test1(int arr[][5],int r,int c)//���������ݷ���ʵ�ʱ��ʻ������飬�����ͣ�
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
//void test2(int (*arr)[5], int r, int c) //ָ�봫�ݷ�����˵�������������Ԫ�ص�ַ������ά����Ԫ�����һ�У�����
//{                                       //������Ԫ�صĵ�ַ��һ������ָ�룬��һ��ָ��ָ���һ������Ԫ�أ�
//	int i, j = 0;                         //�������������ָ����գ�
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			cout << *(*(arr+i)+j) << ",";   //*(arr+i) ����������ָ��õ�����ÿ�е���Ԫ�ص�ַ��������ͨ��ָ������ˣ�
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


//***5.С�ܽ�
//һά���麯�����գ�
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
//��ά���麯�����գ�
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


//***6.����ĵط�С�᣺
//int main()
//{
//    int a = 10;
//    int* p = &a;
//    int arr[] = { 1,2,30 };
//    int* p6 = arr;
//    int(*p2)[3] = &arr;//������ֵ��һ����ַ����������������ַ�����Բ�����ͨ��ָ������� 
//    int* p4[] = { arr,arr + 1 }; //ָ�����飬�����ͨ��ָ�룬ָ��ָ�������������ָ����������ͣ�
//    //int *p5 = p2;//�Ѿ�������ͨ��ָ���ˣ�
//    cout << p4[0] << p4[1];
//    int* p1[] = { p,p + 1 };
//    return 0;
//}
//


//***7.����ָ�룺��ź�����ַ��ָ�룬add=&add��
//���壺����(*pf)(���ͣ�����)
//int add(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int (*p)(int, int) = &add; //����һ������ָ�룻
//    cout<<(*p)(a, b); //����ָ������ò���ֵ��
//}


//***8.����ָ�����飻���ڴ�ź���ָ������飻
//int *p =&a;ָ�룻                int *p[]={arr,arr+1}ָ�����飻
//int (*pf)(int,int)����ָ�룻         int (*pf[])(int,int) ={add,mina} ����ָ������
//�������һ�£�ֻ�������ֺ������[]���ͱ���˴�����ֶ��������飻
//void menu()
//{
//    cout<<"**************" << endl;
//    cout<<"** 0.�ӷ� ****" << endl;
//    cout<<"** 1.���� ****" << endl;
//    cout<<"** 2.�˷� ****" << endl;
//    cout<<"** 3.���� ****" << endl;
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
//    cout << "������ָ��" << endl;
//    cin >> i;
//    if (i >= 0 && i <= 3)
//    {
//        cout << "��������������" << endl;
//        cin >> a >> b;
//        cout << "�����:" << endl;
//        cout << pf[i](a,b)<<endl;
//    }
//    else
//    {
//        cout << "ɶ����" << endl;
//    }
//
//    return 0;
//}


//***9.1ָ�� ����ָ������ ��ָ��
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
//    int (*p1)(int ,int) = &add;  //����ָ��1��
//    int (*p2)(int, int) = &mul;  //����ָ��2��
//    int (*parr[2])(int, int) = { p1,p2 }; //��ź���ָ������飬����ָ�����飻
//    int (*(*parrp)[2])(int, int) = &parr; //ָ�� ����ָ������ ��ָ�룻
//    return 0;
// 
// 0. int *p =&a;��ָͨ�������
// 1. int *p1 [10]  :ָ�����飬������һ�����飬�������ָ�룬ָ����ָ�����α�����
// 2. int (*p2)[10] :p2������ָ�룬ָ��һ����10��Ԫ�ص����飬��������ŵ���int�ͱ�����
// 3. int (*p3[10])[5] :p3��һ��ָ�����飬�������10������ָ�룬ÿ��ָ��ָ��һ�����5��int�ͱ��������飻���������ָ������飻
//}
//9.2˳�㸴ϰһ������ָ���ָ�����飬�Լ��������ָ������飻3������У�
//�ܽ�� ��ָͨ��int *p, ��������ָ��ͺ���ָ�����д��int *p() ;int *p[]�������p���Ⱥͺ����ϣ���ɺ����������ˣ�����ָ���ˣ�
//       ����Ӧ����ôд��int *p ,int (*p)() ; int (*p)[] ;���жϳ���ָ�룬������ķ���ȷ��ָ��ɶ��ָ�룻
//       ��ĳ��ָ������ֺ����[],���Ǵ�Ÿ�ָ������飻   int *p[]   ; int (*p[])()    ; int (*p[])[]
//       �����������(*p)�Ϳ��Եõ�ָ������ָ�������ָ�룻int*(*p)[] ; int (*(*p)[])() ; int (*(*p)[])[]


//***10�ص�����, ��Ƶ116���
//�ص�����������Ҳ����ͨ������ֻ�ǵ��û����������𡪡�����ͨ�����ε���ʽ���ú����ĵ�ַ���ݸ������������ú���ָ����գ�
//Ȼ��������������ͨ������ָ����øú�����������������ͨ������ָ����øú����Ĺ��̳�Ϊ�ص�������Ϊ�����õĸú����򱻳�Ϊ�ص�������
//дһ������A������ʱ����ֱ�ӵ���A�����ǰ�A�ĵ�ַ��������B��B�����ú���ָ����գ���B�����A�����������ص�������A��ʱΪ�ص�������
// 
//��һ���ص�����������

//void menu()
//{
//    cout<<"**************" << endl;
//    cout<<"** 0.�ӷ� ****" << endl;
//    cout<<"** 1.���� ****" << endl;
//    cout<<"** 2.�˷� ****" << endl;
//    cout<<"** 3.���� ****" << endl;
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
//int calcu(int (*pf)(int x, int y))  //����һ��B�������������ջص�������
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
//    cout << "������ָ��" << endl;
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
//        cout << "����ָ�����";
//    }
//    return 0;
//}
//�ڶ������ӣ�qsort������B�����Ѿ����ˣ��Լ�дA��������ΪB��һ������������ָ�������
//C �⺯�� void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)) �������������
//struct stu
//{
//    int age;
//    char name[10];
//};
//
//int func_int(const void *x, const void *y) //�ȶ�������������ָ��ָ����ȽϵĲ�����ռ�����գ�
//{
//    return *(int*)x - *(int*)y;            //������Ҫ�Ƚϵ�Ԫ�أ�Ҳ֪�������ͣ�Ҫ������������ָ��ǿ��ת������Ҫ�����ͣ��ٽ����õõ�ֵ��
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
//    qsort(arr, len, sizeof(arr[0]), func_int);  //û�з���ֵ��
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
//���������ӣ��Լ�д����ʵ��Qsort,��дB����������shishi;
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
//    return *(int*)x - *(int*)y;  //�Ƚ�int�����ݣ�
//}
//
//void xsort(void* a, int len, int size, int (*func)(void * x, void * y))
//{
//    int i = 0;
//    int j = 0;
//    int temp =0;  //���ڽ��������ǲ�ͨ�ã�
//    char* p0 = (char*)a;
//    for (i = 0; i < len - 1; i++)
//    {
//        for (j = 0; j < len - 1 - i; j++)
//        {
//            if (func((p0+j*size), (p0 + (j +1)* size)) > 0)  //key point,���������Ƚϵ�Ԫ�طŽ�ȥ��ǰ�Ⱥ���򽻻���
//            {
//                swapx((p0 + j * size), p0 + (j + 1) * size,size);
//                //temp = *(p0 + j * size);   //���������ڽ��������ǲ�ͨ�ã���Ϊtemp��Ҫ��һ�����ͣ�
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


//***11. voidָ��ѧϰ��
//int main()
//{
//    int a = 10;
//    char ch = 'w';
//    void* p;
//    p = &a;
//    //*p; ����ָ������ָ����Ԫ�ص��׵�ַ��
//    //���ǲ�֪�������ü����Լ�����ַ��1���������ֽڣ�����Ҫ��ǿ��ת�������ٽ����ã�
//    void *p2 = &ch;
//    cout<<*(int*)p;
//    cout << *(char*)p2;
//    return 0;
//}


//***12. ��������⣺ δ
//һά����
//int main()
//{
//    һά����
//    int a[] = { 1,2,3,4 };
//    printf("%d\n", sizeof(a));         //16
//    printf("%d\n", sizeof(a + 0));     //4
//    printf("%d\n", sizeof(*a));        //4
//    printf("%d\n", sizeof(a + 1));     //4
//    printf("%d\n", sizeof(a[1]));      //4
//    printf("%d\n", sizeof(&a));        //4
//    printf("%d\n", sizeof(*&a));       //16
//    printf("%d\n", sizeof(&a + 1));    //16 ��4
//    printf("%d\n", sizeof(&a[0]));     //4
//    printf("%d\n", sizeof(&a[0] + 1)); //4
//
//    //�ַ�����
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

    ////��ά����
    ////��ά����
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


////***12. ָ������⣺
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
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
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