#include<iostream>
using namespace std;
#include "string"
#include"stdlib.h"
class String
{
public:
	String() { p = NULL; }			//定义默认构造函数
	String(const char *str);				//声明构造函数					/*char *背后的含义是：给我个字符串，我要修改它,
																									/*而理论上，我们传给函数的字面常量是没法被修改的*/
																									/*所以说，比较和理的办法是把参数类型修改为const char */
	
	void display();
private:
	const char *p;								//字符型指针，用于指向字符串
};
String::String(const char *str){			//定义构造函数
	p = str;										//使P指向实参字符串
}
void String::display(){					//输出P所指的字符串
		cout << p;
}
int main() {
	
	   String string1("book");			//定义对象
		string1.display();										//调用公用成员函数
		cout << endl;												//换行
		system("pause");
		return 0;
	}



//   如果我既要传字面常量又要传字符串变量怎么办呢
//   char *msg = "hello";
//   *msg = 'j';
//    printf("%s/n", "hello");
//编译器会通过编译，实际上会将msg指向的内容从"hello"转变为"jello", 正确的解决方法是将msg声明为一个指向不变字符串的指针：
//				const char  *msg;
//				msg = "hello";
//				msg = "good-bye";