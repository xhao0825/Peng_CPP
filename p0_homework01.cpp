#include<iostream>
#include<string>
#include <cassert>
using namespace std;
//Peng��C���ԣ���ҵ���ּ�¼��


//***1.���ַ����ĳ��ȣ�
//int main()
//{
//	char a[] = { 'b','i','t'};        //1
//	char b[] = { 'b','i','t' ,'\0' }; //2
//	char c[] = "bit";                 //3
//	cout<<strlen(a)<<"," << strlen(b) << "," << strlen(c) << endl;  //��� 19,3,3��
	//ԭ��b��c����������c����ַ������󳤶ȶ���'\0'��ֹ��ֻ��һ������ַ������飬�󳤶�û��ֹͣ�źţ�
	//���⻰��define���ǹؼ��֣���Ԥ����ָ�
//}


//***2.static���Σ�
//static�������κ������ֲ�������ȫ�ֱ�����ֻ�ı�������������ڣ�����˵���εĶ������ܸ��ģ�
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
//		cout<<plus_test(a)<<endl; //�������2,4,6��������2,2,2����Ϊb����ÿ�ν��뺯�������¶��壬
//	}                             //���Ǳ�static���Σ��������ڱ䳤����һ�εĽ��������һ�κ������������ã�
//	cout<<i<<endl; //С���ԣ���main�ﶨ��ģ���for������ﶼ���ã���for�ﴴ���ģ���for�ⲻ���ã�
//}
//С��ϰ����С��ĳ����������2�Ĵ��ݣ�
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


//***3.ע�ⶺ�ű��ʽ��test((V1,V2),(V3,V4),V5,V6) //���ű��ʽ��������Ǹ���


//***4.����
//4.1��ͨʵ�֣�
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


//5.***���λ֮��(�ݹ�)
//int sum(int a)
//{
//	if (a != 0)
//	{
//		return (a % 10) + sum(a / 10);
//	}
//	else   //�ܹؼ����ݹ鵽���һ���Ǹ�����ҲҪ���һ��ֵ����������Լ���������ģ���ʣһλ���������һλ������ʣ�ˣ����0��
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	cin >> a;
//	cout<<sum(a);
//	return 0;
//}


//***6.�ݹ�ʵ��n��k�η���
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