#include<iostream>
#include<string>
using namespace std;
/*ѧһ�����ԣ�c��c++ ����һ���֣��ڶ��ڴ沼��ѧϰ����Ҫ���������Ժ���Ҫ */
/*���ݽṹ������ʵ�� */
/*����ϵͳ+��������� */
/*���ݿ�+�ű����� */

/*ǰ��20��ڿ��ǳ�ʶϵ�У�ֱ�ӿ���ʶָ��*/
/*ָ���ʶ��ָ����ǵ�ַ��
* int a = 10;
* int* p = &a; *����p��һ��ָ�������int ��ָ��Ķ������ͣ�&����ȡ��ַ��
* ָ�����������ŵ�ַ������ռ�ü����ֽڣ���һ��32λϵͳռ4����64λϵͳռ8����
*/
//int main()
//{
//	int a = 10;
//	cout<<&a<< endl; //&����������ȡ��ַ�ģ�
//	int* p = &a;  //����һ��ָ����� ָ�� a
//	cout<<*p<<endl;  //��ָ���������ȡֵ�����������ò�������Ϊ10
//	system("pause");
//	return 0;
//}


//ð�������ʵ��
//1.������
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
//2.ָ�룺���󣡽���ָ���������½�ѧϰ��
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