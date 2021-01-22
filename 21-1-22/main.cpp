//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//
//    static void func()
//    {
//        cout<<"static A::A()"<<endl;
//    }
//    static int a;
//};
//int A::a=0;
//int main()
//{
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class P
//{
//private:
//    int i;
//};
//int main()
//{
//    P p;
//    cout<<sizeof(p)<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(int age)
//    {
//        this->age=age;
//    }
//    int getage()
//    {
//        return age;
//    }
//private:
//    int age;
//};
//int main()
//{
//    A a(18);
//    cout<<a.getage()<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(int a):age(a){}
//    int getage(){return age;}
//    A& f(A &p)
//    {
//        age +=p.age;
//        return *this;
//    }
//private:
//    int age;
//};
//int main()
//{
//    A a(10);
//    A b(10);
//    b.f(a).f(a).f(a);
//    cout<<b.getage()<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){}
//    void show(){cout<<"A::show()"<<endl;}
//    int i;
//};
//int main()
//{
//    A*p=NULL;
//    p->show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){}
//    void p() const
//    {
//        cout<<"A::p()"<<endl;
//        a=100;
//        cout<<a<<endl;
//    }
//private:
//    mutable int a;
//};
//int main()
//{
//    A b;
//    b.p();
//    const A c;
//    c.p();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class B;
//class A
//{
//public:
//    friend B;
//private:
//    int i;
//};
//class B
//{
//public:
//    void f(A &a)
//    {
//        a.i=100;
//        cout<<a.i<<endl;
//    }
//};
//int main()
//{
//    A a;
//    B b;
//    b.f(a);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int findmin(int *a, int n)
//{
//	int min = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] < min) min= a[i];
//	}
//	return min;
//}
//int main()
//{
//	int x, y;
//	cin >> x;
//	cin >> y;
//	int a[10];
//	int b[10];
//	for (int i = 0; i < x; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < y; i++)
//	{
//		cin >> b[i];
//	}
//
//	int c=findmin(a, x);
//	int d=findmin(b, y);
//	if (c == d)
//	{
//		cout << b;
//	}
//	else if(c>d)
//	{
//		cout << d << c << endl;
//	}
//	else
//	{
//		cout << c << d << endl;
//	}
//	return 0;
//}
