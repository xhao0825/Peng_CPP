#include<iostream>
#include<string.h>
#include <cassert>
using namespace std;
//***�������Աc++���ּ�¼
//**��һ���֣� ��Ͷ���this �����ã�

//***1.дһ���࣬������˽�У����������ù�����Ľӿں�����
//class Man
//{
//private:    //���������ں���Ԫ�ڷ��ʣ�
//	int age=0;
//	string name = "\0";
//public:     //������������ʣ�
//	void set_age(int set_age)
//	{
//		age = set_age;
//	}
//	void set_name(string set_name)
//	{
//		name = set_name;
//	}
//
//	int get_age()
//	{
//		return age;
//	}
//	int get_fake_age()
//	{
//		return age-2;
//	}
//	string get_name()
//	{
//		return name;
//	}
//};
//
//int main()
//{
//	Man adam; 
//	adam.set_age(18);
//	adam.set_name("�ǵ�");
//	cout<<"������ " <<adam.get_name()<<";" <<"���䣺"<<adam.get_age()<< endl;
//	cout<<adam.get_fake_age()<<endl;
//	return 0;
//}
//Ȩ���ܽ᣺    //����Ȩ��  public     ���ڿ��ԣ��������
                //����Ȩ��  protected  ���ڿ��ԣ����ⲻ����   �������
                //˽��Ȩ��  private    ���ڿ��ԣ����ⲻ����   ���಻����
                //class Ĭ��Ȩ��Ϊ˽�� �� struct��Ĭ��Ȩ��Ϊ���У�
//***2.Ĭ�Ϲ��죻
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man()    //Ĭ�Ϲ��캯����
//	{
//		age = 0; //���ԶԲ������г���ʼ����
//		cout<<"����Ĭ�Ϲ��캯��" << endl;
//	}
//	void set_name(string set_name)
//	{
//		name = set_name;
//	}
//		string get_name()
//	{
//		return name;
//	}
//		int get_age()  //û�����ú���������Ĭ��ֵ�����캯�����������ֳ�������������ĳ������ʱ����Ĭ��ֵ��
//	{
//		return age;
//	}
//};
//
//int main()
//{
//	Man adam;
//	adam.set_name("�ǵ�");
//	cout << "������ " << adam.get_name() << ";" << "���䣺" << adam.get_age() << endl;
//	return 0;
//}


//***3.�вι��죬���ع��캯����
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man()    //Ĭ�Ϲ��캯����
//	{
//		age = 0; //���ԶԲ������г���ʼ����
//		cout << "����Ĭ�Ϲ��캯��" << endl;
//	}
//
//	//Man(int set_age, string set_name) //�����ò������б���д��
//	//{
//	//	cout<<"�����вι��캯��" << endl;
//	//	age = set_age;
//	//	name = set_name;
//	//}
////�������б�ʽд�вι��죻���֣�
//	Man(int set_age, string set_name)
//		:age(set_age), name(set_name){} //���ǻ���һ��д����
//
//		void set_name(string set_name)
//	{
//		name = set_name;
//	}
//
//	string get_name()
//	{
//		return name;
//	}
//		int get_age() 
//	{
//		return age;
//	}
//};
//int main()
//{
//	Man adam;      //Ĭ�Ϲ��죻
//	adam.set_name("�ǵ�"); 
//	cout << "������ " << adam.get_name() << ";" << "���䣺" << adam.get_age() << endl;
//
//	Man eva(16,"����"); //�вι��죻
//	cout << "������ " << eva.get_name() << ";" << "���䣺" << eva.get_age() << endl;
//	return 0;
//}
//����û���дĬ�Ϲ��죬ϵͳĬ���У��û��Լ�д�ˣ��Ϳ����Լ����壻
//�û���д�в���û���вεģ�д�˾Ϳ����ã�
//�û�ֻд���вΣ�ûдĬ�Ϲ��죬��Ĭ�Ϲ���Ͳ������ˣ��������ˣ����ǿ������컹�У�
//����û�ֻд�˿������죬��ϵͳ�Ͳ���Ĭ�Ϲ�����вι����ˣ�


//***4.��Ĭ�ϲ������вι��죬���ʼ����ʱ����Բ�����Ӧ��ֵ��Ҳ���Ը���ȥ���£�
     //һ��������������������˳�ʼֵ�������ʼ����ʱ��Ϳ���һ������Ҳ���ṩ�����Ĭ�Ϲ����ˣ���
     //��Ĭ�Ϲ��첻�ǲ��ܽ��ղ����ģ�Ҳ�����ǿ��Խ��ܵ���ȥ���յģ�  


//***5.��ѧϰ��������֮ǰ��ѧһ��������һ֪ʶ�㣻 &b=a�� ����a���˱���b������ȡ��ַ����
       //���˱�����˵��b��ʱ�����˵a�����Զ��β�b���в�����ı�ʵ��a�� 
       //�䱾�ʻ���ָ�룬ֻ�Ǽ򻯵�ָ�루ָ�볣��������ָ������ͽ����ò��������ˣ�
       //�����ǿ������캯����
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man(int set_age, string set_name)
//		:age(set_age), name(set_name) {} //���ǻ���һ��д����
//
//	string get_name()
//	{
//		return name;
//	}
//	int get_age()
//	{
//		return age;
//	}
//
//	//�Լ�дһ���������죬�õ�ַ���ݵķ�����
//	Man(Man *p)
//	{
//		age = p->age;
//		name = p->name;
//	}
//	//�����������ô��ݵķ�����
//	Man(Man &p)
//	{
//		age = p.age+1; //+1����֤���Լ�д�˿�����ϵͳ�ľ�û���ˣ�
//		name = p.name;
//	}
//};
//int main()
//{
//	Man eva(16,"����"); //�вι��죻
//	Man kuli(eva);      //�û�д���вΣ�ϵͳ���ṩĬ���ˣ����ǻ��ṩ������
//	Man james(&eva);    //�Լ�д�Ŀ������õ�ַ���ݵķ�����
//	cout << "������ " << eva.get_name() << ";" << "���䣺" << eva.get_age() << endl;
//	cout << "������ " << kuli.get_name() << ";" << "���䣺" << kuli.get_age() << endl;
//	cout << "������ " << james.get_name() << ";" << "���䣺" << james.get_age() << endl;
//	return 0;
//}


//***6.�������Ϊ���Ա����һ����Ķ�����Ϊ��һ����Ĳ�����
//class Dog
//{
//public:
//	string dname;
//	void set_dname(string name)
//	{
//		dname = name;
//	}
//};
//
//class Man
//{
//private:
//	int age;
//	string name;
//public:
//	Dog gou;
//
//	Man(int set_age, string set_name)
//		:age(set_age), name(set_name){} //���ǻ���һ��д����
//
//	string get_name()
//	{
//		return name;
//	}
//	int get_age()
//	{
//		return age;
//	}
//};
//int main()
//{
//	Man eva(16, "����"); 
//	eva.gou.set_dname("wangwang");
//	Man kuli(eva);     
//}


//***7.��̬��Ա������
     //1.���ж��󶼹���һ�����ݣ�һ������������ˣ�Ҳ������һ�������б��֣����һ��
     //2.����׶ξͷ����ڴ棻
     //3.���������������ʼ��������
     //4.��Ϊ������ĳ����Ա�����Է���ʱ�ȿ���ͨ����Ա��Ҳ����ͨ���ࣻ
     //4.��̬��Ա����Ҳ��˽�к͹�����˽�е������������������ʼ������Ҫ��������˽��������Ϊ˽�У�

     //��̬��Ա������
     //1.���ж�����ͬһ����Ա������
     //2.����ͨ��������ʣ�Ҳ����ͨ���������ʣ�
     //3.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���������ܷ�����ͨ������
     //4.Ҳ�з���Ȩ�ޣ�
//class Man
//{
//private:
//    static int money;
//public:
//    int age;
//    string name;
//public:
//    static int number;
//    static void func()
//    {
//        Man::number = 400;
//        // age = 20; //�Ǿ�̬��Ա�����������þ�̬��Ա�������ʣ�
//        cout<<"��̬��Ա����" << endl;
//    }
//};
//int Man::number = 100;
//int Man::money = 200;
//int main()
//{
//    cout << Man::number << endl;
//    Man hao;
//    hao.age = 18;
//    hao.name = "xuhao";
//    hao.number = 200;
//    cout << Man::number << endl; //��һ�ݣ����˾Ͱ������ˣ�����ҲҪע��˳�򣬸�֮ǰ��û�ĵģ�
//    Man xi;
//    xi.number = 300;
//    cout << xi.number << endl;
//    cout << Man::number << endl;
//
//    Man::func();    //ע����ú��������ţ���
//    cout << Man::number << endl;
//
//    //cout <<Man::age<< endl;  //�������Ǿ�̬��Ա������Ҫͨ�����������ʣ�
//    //cout << Man::money << endl;  //�������ɷ��ʣ�
//}
////�Ǿ�̬��Ա�������ڶ����ϣ����Ǿ�̬��Ա����ռ�õĿռ������ģ�����̬��Ա��������ģ������ڶ����ϣ�
////��Ǿ�̬��Ա���������ڶ����ϣ� ���Կ��Եó��Ǿ�̬��Ա�����ͺ����Ƿֿ��洢�ģ�
////��Ȼ�Ǿ�̬��Ա���������ڶ����ϣ��Ǻܶ�������ͬһ���Ǿ�̬��Ա��������ô�����أ�thisָ�룻


//***8.�������ã��������������������Ϊ�����ķ���ֵ������������Ϊ��ֵʹ�ã����Բ����͸�ֵ��
//int& test()
//{
//    static int a;
//    return a;   //��a���أ������ý��գ�������test(),����test()���Ը�ֵ������ �ú����������صı��壬��ʹ�Ƕ���
//}
//class Man
//{
//public:
//    int age;
//    string name;
//    
//    //void setage(int age) //ͬ��ʱ�����
//    //{
//    //    age = age;
//    //}
//    void setage(int age)  //��ʱ���Բ���thisָ�룬����������������
//    {
//        this->age = age;
//    }
//    void addage(Man &p)  //û����ֵ�����������֮�佻����this��thisָ����øú����Ķ�����
//                                                      //��Ը��֮Ϊ����ָ�룺ָ������ָ�룻
//    {
//        this->age += p.age;
//    }
//
//    Man conaddage1(Man& p)//�з���ֵ���������ֵ�ķ�ʽ���գ�����֮���ɿ��������ˣ����ص���һ�ݿ����������ݣ��������µĶ���
//    {
//        this->age += p.age;
//        return *this;
//    }
//
//    Man& conaddage2(Man& p)  //���ص�ֵ�������ý��գ�����������������ʽ��̣��������Լ�д������ָ��ķ�����Ҳ������ʽ��û����������
//    {
//        age += p.age;  //�����ﲻдthisҲ�У�����Ĭ��ǰ����һ��this������˭�������������this��ָ��˭��
//        return *this;
//    }
//    //�Լ���ָ����һ��
//    Man* poingadd1(Man& p)  //���ý��ղ���������ָ�룬��ָ����գ�����ʱ->;
//    {
//        this->age += p.age;  //���ô����Ĳ�����������. 
//        return this;
//    }
//
//    Man* poingadd2(Man* p)  //���ղ�����ָ�룬�������ʱ2(&p);����ָ�룬��ָ����գ�
//    {
//        this->age += p->age;
//        return this;
//    }
//};
//
//void test(int &c)
//{
//    c = 30;
//}
//
//int& test2(int &a)
//{
//    return a;
//}
//
//int main()
//{
//    int a = 10;
//    cout<<a<<endl;
//    int& b = a;
//    b = 20;   //��b����a��
//    cout << b << endl;
//    test(b);
//    cout << b << endl;
//    cout <<test2(b)<< endl;
//    //����
//    Man xhao;
//    xhao.setage(18);
//    cout<<xhao.age<<endl;
//
//    Man xi;
//    xi.setage(17);
//    cout << xi.age << endl;
//    xi.addage(xhao);
//    cout << xi.age << endl;
//
//    xi.conaddage1(xhao).conaddage1(xhao);  //��һ�μ��ˣ��������ڿ����ˣ�
//    cout<<xi.age<<endl;
//
//    xi.conaddage2(xhao).conaddage2(xhao);  //���ص���ֵ�����廹��ֵ����ʽ��.��
//    cout << xi.age << endl;
//
//    //ָ����֤
//    Man pxhao;
//    pxhao.setage(25);
//    cout << pxhao.age << endl;
//    Man pxi;
//    pxi.setage(22);
//    cout << pxi.age << endl;
//
//    pxi.poingadd1(pxhao)->poingadd1(pxhao);   //���ص���ָ�룬����ָ�����ָ�룬��ʽ��->;
//    cout << pxi.age << endl;
//
//    pxi.poingadd2(&pxhao)->poingadd2(&pxhao);
//    cout << pxi.age << endl;
//}
//***9.thisָ�� ��8 
////  1.���ڽ�����������⣬thisָ��ָ����Ǳ����õĳ�Ա���������Ķ��󣻼��ĸ�������øĳ�Ա��������ô��Ա�����е�this��ָ��ö���
    //2.�������Խ���������⣬�����Խ������֮��Ľ������⣻����е�this��ָ���øĺ����Ķ���
    //3.����������this���ص��øú����Ķ��������ý��գ����������������øú�������ʽ�ˣ�ţ��return *p
    //�ڳ�Ա��������ʳ�Ա������ʱ��ǰ�涼��һ��Ĭ�ϵ�thisָ�룻�������ˣ������ĸ�������ú�������������Ծ����ĸ�����ģ�



//******��һƪ��ʼ��¼��Ԫ��