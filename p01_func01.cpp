#include<iostream>
#include<string>
using namespace std;
//����C���Ժ������ּ�¼��2022.10.20

//***1.�Լ�дһ���������ȳ���ģ�
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//	{
//	int a, b = 0;
//	cout << "�������������ԱȽϴ�С" << endl;
//	cin>>a>>b;
//	cout << "�ϴ������" << get_max(a, b);//�����к�����Ƕ��ʹ�ã�
//	return 0;
//}


//***2.�Լ�дһ��������������������
// ������õ�ַȡֵ�Ȳ�������ʧ�ܣ�
// ��Ϊ�βκ�ʵ�ηֱ𿪱ٿռ䣬�ں�������βθı䣬����Ӱ��ʵ�Σ�
// ����3����һ��С����֤������һ�㣻
// ���ۣ����ֻ��ֵ�Ĳ���������Ƚϣ�����ֻ��ֵ�Ϳ����ˣ����صĻ�����ȷ�����֣�
// �����漰����ֵ�ĸ��ģ��漰��ȡ��Ӧ��ַ��ֵ���ͻ�ʧ�ܣ���Ҫ��ȡֵ��ȡַ������
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
//	cout << "�������������Խ���" << endl;
//	cin >> a >> b;
//	Swap(&a, &b);
//	cout << "������:" << a << " ��" << b;
//	return 0;
//}


//***3.1.����2����֤��ʧ�ܣ�����ֵ���ã�
//int Change(int x)
//{
//	x = 10; //�����¿ռ��¿��ٵĵ�ַ�µ�10����ʱ���������ģ���Ӱ��ʵ�ε�ֵ
//}         //ֻ�н�������ϵ���ſ��Բ�����
//int main()
//{
//	int a=5;
//	Change(a);
//	cout << "�ı���aΪ:" << a ;
//	return 0;
//}
// 
//3.2.����2����֤���ɹ�������ַ���ã�
//void change(int* x)  //�ѵ�ַ��ŵ�ָ�����x�У�
//{
//	*x = 10; //    ��ʵ�ε�ַ���ŵ�ֵ�޸ģ�����ַ��ֵ��
//}           //
//int main()
//{
//	int a=5;
//	change(&a);  //��ʵ�εĵ�ַ�ó���
//	cout << "�ı���aΪ:" << a ;
//	return 0;
//}
//3.3.��ֵ���úʹ�ַ���õ�����
//��ֵ���������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//��ַ���Ѻ�����ı������ڴ��ַ����������������ַ��ֵ���ú�������ı���������ϵ��
      //�����ڿ��Բ����ⲿ������


//***4.����һ��дһ�������ж�һ�����ǲ���������
//bool judge(int a)  //����Ҳ����int������1��0������1 or 0�ж��Ƿ�Ϊ����
//{
//	for (int i = 2; i <=sqrt(a); i++)  //ע�⣬������<=sqrt(a)���Ż�����
//	{
//		if (a % i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int x = 200;
//	cout << "0-" << x << "�����е������У�" << endl;
//	for (int i = 2; i <= x; i++)  //200�����ҲҪ�жϣ�
//	{
//		if (judge(i))
//			cout << i << ", ";
//		else
//			continue;
//	}
//	return 0;
//}


//***5.�������дһ�������ж�ĳ���ǲ������ꣻ
//ע�⣬��д�������ͣ���Ĭ��Ϊ����int���ͣ�д��void���򲻷��أ����ͬ��
//bool judge_year(int a)  //����Ҳ����int������1��0������1 or 0�ж��Ƿ�Ϊ���ꣻ
//{
//	if ((a%4==0)&&(a%100!=0)||(a%400==0))
//		return true;
//	else
//	    return false;
//}
//int main()
//{
//	int x = 2000;
//	cout << "1000-" << x << "���ڵ������ǣ�" << endl;
//	for (int i = 1000; i <= x; i++)  
//	{
//		if (judge_year(i))
//			cout << i << ", ";
//		else
//			continue;
//	}
//	return 0;
//}


//***6.˳����ң�������������ӦԪ�ص��±ꣻ
//int find(int *p,int a,int len)//��int��ָ�������������յ�ַ
//                              //�����������ͽ�����*p��Ҳ������;
//{                 //���Ǻ�����Ĵ�������ķ�ʽ������һ�֣�������arr���ӵ���arr[],Ҳ���ã�arr[i]��������Ԫ�أ���֤��12��
// ������Ϊ�������βΡ�ʵ������һ��ָ�����͵��βΣ����������Խ���һ����������ʾ���������ʼ��ַ��
// �������ǽ�һ�����������Ԫ�ش���һ���������������ݵ���һ��СС��ָ�����
// 
//	for (int i = 0; i < len; i++,p++)
//	{
//		if (*p == a) 
//			return i;
//		
//	}
//	return -1;  //���ﲻ����0����Ϊ��һ�������±�Ҳ��0��
//	            //����ҵ��ǵ�һ�������򷵻�0��û�ҵ������ǲ��Եģ�
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,5,8,10 };
//	int len = sizeof(arr) / sizeof(int);
//	int a=0;
//	cin >> a;
//                               //������arr����������Ԫ�صĵ�ַ���Ǹ�int��Ԫ�صĵ�ַ��
//	if (find(arr, a,len)==-1)  //���ҽ�������-1ʱ��û�ҵ����������Ƿ����ҵ���ֵ���±ꣻ
//	{
//		cout <<"�Ҳ���" << endl;
//	}
//	else
//		cout<< find(arr, a,len) << endl;
//	return 0;
//}


//***7.���ֲ��ң�������������ӦԪ�ص��±ꣻ
//int two_find(int arr[], int a, int len)  //�����ڶ����µ� ����˼���������飬��ʵ���Ǹ��׵�ַ��
//{                                  //���ƵĻ��У�int *p = &a�� �������ʱ��*p��ָ�������������p��
//	int middle = 0;
//	int left = 0;
//	int right = len - 1;  //�����У�leftΪ0��rightΪ9��
//	while (left<=right)   //ѭ�����ҵ�������ֻҪû����return��ѭ��ִ�ж��ֲ��ң�
//	{
//		middle = (left+right) / 2;  //���ֵĺ��壬ÿ����λ��ӳ�2�ó��м��±꣬
//		if (arr[middle] < a)        //�����м�ֵ�����ֵ�Ĵ�С�ж����Ǳ߼����ң�
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > a)
//		{
//			right = middle - 1;
//		}
//		else  //�����ҵ��ˣ�
//		{
//			return middle;
//		}
//	}
//	return -1;  //ȫ��ѭ����Ҳû�ҵ���
//}
////����Ϊ�����ں�������len�����ԣ���Ϊ�����鴫����������Ԫ�صĵ�ַ��isָ�룻sizeofһ������1��������main�������Ϊ����һ�𴫣�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);   //arr������һ���ʾ������Ԫ�صĵ�ַ��
//	int a = 0;                             //***��������������Ԫ�ص�ַ�������������
//	cin >> a;                              //1.&arr��������ȡ��������ĵ�ַ  ��2.sizeof(arr)�������arr�����������飻
//                                         // arr �� &arr���岻ͬ��arr��Ԫ�ص�ַ��&arr�����ַ��
//                                         //������ int len = sizeof(arr) / sizeof(int);
//	if (two_find(arr, a, len) == -1)  //���ҽ�������-1ʱ��û�ҵ����������Ƿ����ҵ���ֵ���±ꣻ
//	{
//		cout << "�Ҳ���" << endl;
//	}
//	else
//		cout << two_find(arr, a, len) << endl;
//	return 0;
//}


//***8.дһ��������ÿ����һ�Σ�num+1��
//void func(int *p)  //��Ϊ�Ժ����ⲿ��ֵ�иı䣬�õ�ַ���ݣ�
//{
//    (*p)++;   //�������ǰ�ַȡֵ����ֵ�Լӣ�����һ����+1��
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
// ע�⣡
//�����������Ͷ���һ��ֿ��ţ�������ͷ�ļ��У�������cpp�ļ��У���ʱinclude .h�ļ�����
//������һ���淽�����ã���һ����cpp��.h��������lib��̬�ļ��⣬ֻ��lib��.hҲ�������ã�������¶cpp��


//***9.�ݹ飬�����Լ������Լ�����Ϊ�����ݹ飻
//��һ������һ��������ӡ��ÿһλ����12345����ӡ��1 2 3 4 5��
//void  printx(int a)
//{
//    if(a>9)    //����ѭ����������<=9��ʱ��ֱ�Ӵ�ӡ����Ȼ�ʹ�ӡ���һλ����ǰ�漸λȡ�������еݹ飻
//    {
//         printx(a / 10) ; //ȡ��ǰ��λ��ѡ�������´εݹ�Ĳ����Ĺ���
//    }
//    cout << a%10<<" "; //��ӡ���һλ��
//}
//int main()
//{
//    int number;
//    cin >> number;
//    printx(number);
//    return 0;
//}
//�����ص㣬1.���õݹ������������ 2.����ÿ�εݹ�� ���ϱƽ����������Ĺ���



//***10. �ݹ�ʱ����ջ����Ľ��ͣ��ݹ��ʱ�򲻶���ջ�����ٿռ䣬
      // ����ݹ�Ĳ��̫���ջ���ռ䱻���꣬��ջ�����
//ջ����ţ� �ֲ������������βΣ�
//������ţ���̬�ڴ����ģ�
//������ţ���̬�ڴ����ģ�
//��̬����ȫ�ֱ�������̬������
//So��д�ݹ��ʱ��1.����д���ݹ飬Ҫ������������ÿ�εݹ�ƽ�������;
                  //2.�ݹ�Ĳ�β���̫������ջ���;


//***11.1������ѧ֪ʶ���ַ���
//int main()
//{
//    char c='a';    //char���ͣ������õ����ţ�
//    cout<<c<<endl;
//    int i = c;    //��ȡASCII�룻
//    cout<<i<<endl;
//    c = c + 1;    //��һ����ĸ��
//    cout<<"��һ��:"<<c<<i+1<<endl;  //��һ����ĸ��ASCII;
//    return 0;
//}

//***11.2������ѧ֪ʶ���ַ�����
 //C����ַ�����char ach1[] = "Hello";  //��Ȼ������\0,����βҲ���еģ�ռ���ڴ棬�������ڳ����
              //char ach2[] = { 'H', 'e', 'l', 'l', 'o', '\0' };�����������\0����Ȼ��֪�������������ַ�����
       //��C�����ַ��������Ŀ⺯�����ĸ���strlen();strcmp();strcat();strcpy();
       //strlen(): int length = strlen(ach2);//��ȡ�ַ����ĳ��ȣ���������β��'\0'��\0��strlen�����Ľ�����־,Ҳռһ��λ�ã�
       //strcmp(): int ret = strcmp(ach1, ach2); //�Ƚ�����C����ַ����Ĵ�С�������ͬ���򷵻�ֵ��0
       //strcat(): char ach1[] = "Hello"; char ach3[20] = "World";strcat(ach3, ach2); //����������C����ַ����ϲ�
       //strcpy(): char ach4[20];strcpy(ach4, ach2); //����ָ����C����ַ���

       //C++����ַ�����
            //string sgreet("Hello std::string");  //����һ��C++�����ַ�����
            //cout << sgreet << endl;   

            //cout << "Enter a line of string:" << endl;
            //string sfirstLine;   
            //getline(cin, sfirstLine);  //��ȡ������ַ���

            //cout << "Enter another:" << endl;
            //string ssecondLine;      
            //getline(cin, ssecondLine);  //��ȡ�ڶ���

            //cout << "Result of connection:" << endl;
            //string sconnection = sfirstLine + " " + ssecondLine;  //����
            //cout << sconnection << endl;

            //cout << "Copy of string:" << endl;
            //string scopy;
            //scopy = sconnection;   //����
            //cout << scopy << endl;

            //cout << "Length of connection string: " << sconnection.length() << endl;  //����


//***12.1�������鴫�ݵ����ַ���;�ַ������ͣ�
//void test1(int a[],int len)
//{
//    cout<<"����������׵�ַ��" << endl;
//    for (int i = 0; i < len; i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout << endl;
//}
//void test2(int* p,int len)
//{
//    cout << "��ָ������׵�ַ��" << endl;
//    for (int j = 0; j < len; j++, p++)
//    {
//        cout<<*p<<" ";
//    }
//}
//
//int main()
//{
//    int arr[4] = {1,2,3,4};
//    int len = sizeof(arr)/sizeof(arr[0]);  //sizeof��arr����ʾ��������ĳ��ȣ�
//    test1(arr,len);
//    test2(arr,len);
//    return 0;
//}

//***12.2�������鴫�ݵ����ַ���;�ַ������ͣ�
//void test1(char a[],int len)
//{
//    cout<<"����������׵�ַ��" << endl;
//    for (int i = 0; i < len; i++)
//    {
//        cout<<a[i]<<" ";
//    }
//    cout << endl;
//}
//void test2(char *p,int len)
//{
//    cout << "��ָ������׵�ַ��" << endl;
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


//***13.1��ָ��������飬�ں�����������Ȳ����أ�
//void test2(char* p)
//{
//    int count;    //��
//    cout << "��ָ������׵�ַ��" << endl;
//    for (count = 0; (*p)!='\0'; count++,p++) //û�����һ��\0����������һ��char����������
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
//***13.2��ָ��������飬�ں�����������Ȳ����أ�
//int test2(char* p)
//{
//    if (*p != '\0')
//    {                 //����p++���ԣ����ص���p���õ�p+1��Ӧ��p+1������p+1����p����������
//        return 1 + test2(p+1); //�����test2(p+1)���뵽�ˣ��ݹ��˺��������ϱƽ�����������
//    }                          //ÿ�������ƶ�һ�����͵�λ������ǰ���һ���� 
//    else                       //���Ǽ����ķ���û�뵽������ÿ��return 1+test���ݹ�һ��+1��
//        return 0;
//}
//
//int main()
//{
//    char ch[] = "xhao";
//    cout<<test2(ch);
//    return 0;
//}