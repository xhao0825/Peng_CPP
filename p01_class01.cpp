#include<iostream>
#include<string.h>
#include <cassert>
using namespace std;
//***黑马程序员c++部分记录
//**第一部分， 类和对象，this ，引用；

//***1.写一个类，属性用私有，访问属性用公共里的接口函数；
//class Man
//{
//private:    //可以在类内和友元内访问；
//	int age=0;
//	string name = "\0";
//public:     //可以在类外访问；
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
//	adam.set_name("亚当");
//	cout<<"姓名： " <<adam.get_name()<<";" <<"年龄："<<adam.get_age()<< endl;
//	cout<<adam.get_fake_age()<<endl;
//	return 0;
//}
//权限总结：    //公共权限  public     类内可以，类外可以
                //保护权限  protected  类内可以，类外不可以   子类可以
                //私有权限  private    类内可以，类外不可以   子类不可以
                //class 默认权限为私有 ， struct的默认权限为共有；
//***2.默认构造；
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man()    //默认构造函数；
//	{
//		age = 0; //可以对参数进行初初始化；
//		cout<<"我是默认构造函数" << endl;
//	}
//	void set_name(string set_name)
//	{
//		name = set_name;
//	}
//		string get_name()
//	{
//		return name;
//	}
//		int get_age()  //没有设置函数，则用默认值；构造函数的作用体现出来，忘记设置某个参数时，用默认值；
//	{
//		return age;
//	}
//};
//
//int main()
//{
//	Man adam;
//	adam.set_name("亚当");
//	cout << "姓名： " << adam.get_name() << ";" << "年龄：" << adam.get_age() << endl;
//	return 0;
//}


//***3.有参构造，重载构造函数；
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man()    //默认构造函数；
//	{
//		age = 0; //可以对参数进行初初始化；
//		cout << "我是默认构造函数" << endl;
//	}
//
//	//Man(int set_age, string set_name) //可以用参数化列表来写；
//	//{
//	//	cout<<"我是有参构造函数" << endl;
//	//	age = set_age;
//	//	name = set_name;
//	//}
////参数化列表方式写有参构造；变种；
//	Man(int set_age, string set_name)
//		:age(set_age), name(set_name){} //这是换了一种写法；
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
//	Man adam;      //默认构造；
//	adam.set_name("亚当"); 
//	cout << "姓名： " << adam.get_name() << ";" << "年龄：" << adam.get_age() << endl;
//
//	Man eva(16,"夏娃"); //有参构造；
//	cout << "姓名： " << eva.get_name() << ";" << "年龄：" << eva.get_age() << endl;
//	return 0;
//}
//如果用户不写默认构造，系统默认有，用户自己写了，就可以自己定义；
//用户不写有参是没有有参的，写了就可以用；
//用户只写了有参，没写默认构造，则默认构造就不存在了；不能用了；但是拷贝构造还有；
//如果用户只写了拷贝构造，那系统就不给默认构造和有参构造了；


//***4.带默认参数的有参构造，则初始化的时候可以不给相应的值，也可以给了去更新；
     //一种特殊情况，参数都给了初始值，在类初始化的时候就可以一个参数也不提供，变成默认构造了；；
     //即默认构造不是不能接收参数的，也可能是可以接受但不去接收的；  


//***5.在学习拷贝构造之前，学一下引用这一知识点； &b=a； 即给a起了别名b，不是取地址！！
       //起了别名，说道b的时候就是说a，所以对形参b进行操作会改变实参a； 
       //其本质还是指针，只是简化的指针（指针常量）；把指向操作和解引用操作都简化了；
       //下面是拷贝构造函数：
//class Man
//{
//private:
//	int age;
//	string name;
//
//public:
//	Man(int set_age, string set_name)
//		:age(set_age), name(set_name) {} //这是换了一种写法；
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
//	//自己写一个拷贝构造，用地址传递的方法；
//	Man(Man *p)
//	{
//		age = p->age;
//		name = p->name;
//	}
//	//还可以用引用传递的方法；
//	Man(Man &p)
//	{
//		age = p.age+1; //+1来验证，自己写了拷贝，系统的就没用了；
//		name = p.name;
//	}
//};
//int main()
//{
//	Man eva(16,"夏娃"); //有参构造；
//	Man kuli(eva);      //用户写了有参，系统不提供默认了，但是还提供拷贝！
//	Man james(&eva);    //自己写的拷贝，用地址传递的方法；
//	cout << "姓名： " << eva.get_name() << ";" << "年龄：" << eva.get_age() << endl;
//	cout << "姓名： " << kuli.get_name() << ";" << "年龄：" << kuli.get_age() << endl;
//	cout << "姓名： " << james.get_name() << ";" << "年龄：" << james.get_age() << endl;
//	return 0;
//}


//***6.类对象作为类成员；即一个类的对象作为另一个类的参数；
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
//		:age(set_age), name(set_name){} //这是换了一种写法；
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
//	Man eva(16, "夏娃"); 
//	eva.gou.set_dname("wangwang");
//	Man kuli(eva);     
//}


//***7.静态成员变量；
     //1.所有对象都共享一份数据，一个对象把它改了，也会在另一个对象中表现；☆就一份
     //2.编译阶段就分配内存；
     //3.类内声明，类外初始化操作；
     //4.因为不属于某个成员，所以访问时既可以通过成员，也可以通过类；
     //4.静态成员变量也分私有和公共，私有的在类内声明，类外初始化，主要是声明在私有区域则为私有；

     //静态成员函数：
     //1.所有对象共享同一个成员函数；
     //2.可以通过对象访问，也可以通过类名访问；
     //3.静态成员函数只能访问静态成员变量，不能访问普通变量；
     //4.也有访问权限；
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
//        // age = 20; //非静态成员变量不可以用静态成员函数访问，
//        cout<<"静态成员函数" << endl;
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
//    cout << Man::number << endl; //就一份，改了就把它改了，但是也要注意顺序，改之前是没改的；
//    Man xi;
//    xi.number = 300;
//    cout << xi.number << endl;
//    cout << Man::number << endl;
//
//    Man::func();    //注意调用函数加括号！！
//    cout << Man::number << endl;
//
//    //cout <<Man::age<< endl;  //报错，不是静态成员变量，要通过对象来访问；
//    //cout << Man::money << endl;  //报错，不可访问；
//}
////非静态成员变量属于对象上，即非静态成员变量占用的空间算对象的；而静态成员变量是类的，不属于对象上；
////☆非静态成员函数不属于对象上！ 所以可以得出非静态成员变量和函数是分开存储的；
////既然非静态成员函数不属于对象上，那很多对象调用同一个非静态成员函数，怎么区分呢？this指针；


//***8.补充引用：引用是起别名，引用作为函数的返回值！！！可以作为左值使用，可以操作和赋值！
//int& test()
//{
//    static int a;
//    return a;   //把a返回，用引用接收，别名是test(),并且test()可以赋值操作； 用函数名代表返回的本体，即使是对象；
//}
//class Man
//{
//public:
//    int age;
//    string name;
//    
//    //void setage(int age) //同名时会混淆
//    //{
//    //    age = age;
//    //}
//    void setage(int age)  //此时可以采用this指针，避免了重名混淆；
//    {
//        this->age = age;
//    }
//    void addage(Man &p)  //没返回值的情况，对象之间交互靠this，this指向调用该函数的对象本体
//                                                      //我愿称之为对象指针：指向对象的指针；
//    {
//        this->age += p.age;
//    }
//
//    Man conaddage1(Man& p)//有返回值的情况，以值的方式接收，返回之后变成拷贝构造了，返回的是一份拷贝出的数据，创建了新的对象；
//    {
//        this->age += p.age;
//        return *this;
//    }
//
//    Man& conaddage2(Man& p)  //返回的值，用引用接收，即别名，可用于链式编程；下面我自己写了两种指针的方法；也可以链式，没触发拷贝；
//    {
//        age += p.age;  //☆这里不写this也行，属性默认前面有一个this，后面谁调用这个函数，this就指向谁；
//        return *this;
//    }
//    //自己用指针练一下
//    Man* poingadd1(Man& p)  //引用接收参数，返回指针，用指针接收，访问时->;
//    {
//        this->age += p.age;  //引用传来的参数，还是用. 
//        return this;
//    }
//
//    Man* poingadd2(Man* p)  //接收参数用指针，下面调用时2(&p);返回指针，用指针接收；
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
//    b = 20;   //改b即改a；
//    cout << b << endl;
//    test(b);
//    cout << b << endl;
//    cout <<test2(b)<< endl;
//    //类中
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
//    xi.conaddage1(xhao).conaddage1(xhao);  //第一次加了，后面属于拷贝了；
//    cout<<xi.age<<endl;
//
//    xi.conaddage2(xhao).conaddage2(xhao);  //返回的是值，本体还是值，链式用.；
//    cout << xi.age << endl;
//
//    //指针验证
//    Man pxhao;
//    pxhao.setage(25);
//    cout << pxhao.age << endl;
//    Man pxi;
//    pxi.setage(22);
//    cout << pxi.age << endl;
//
//    pxi.poingadd1(pxhao)->poingadd1(pxhao);   //返回的是指针，本体指向本体的指针，链式用->;
//    cout << pxi.age << endl;
//
//    pxi.poingadd2(&pxhao)->poingadd2(&pxhao);
//    cout << pxi.age << endl;
//}
//***9.this指针 见8 
////  1.用于解决重名的问题，this指针指向的是被调用的成员函数所属的对象；即哪个对象调用改成员函数，那么成员函数中的this就指向该对象；
    //2.不但可以解决重名问题，还可以解决对象之间的交互问题；☆函数中的this代指调用改函数的对象；
    //3.还可以利用this返回调用该函数的对象，用引用接收，让这个对象继续调用该函数，链式了，牛！return *p
    //在成员函数里访问成员变量的时候，前面都有一个默认的this指针；即表明了，后面哪个对象调用函数，里面的属性就是哪个对象的；



//******下一篇开始记录友元；