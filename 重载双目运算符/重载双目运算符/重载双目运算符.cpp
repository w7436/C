#include<iostream>
using namespace std;
#include "string"
#include"stdlib.h"
class String
{
public:
	String() { p = NULL; }			//����Ĭ�Ϲ��캯��
	String(const char *str);				//�������캯��					/*char *����ĺ����ǣ����Ҹ��ַ�������Ҫ�޸���,
																									/*�������ϣ����Ǵ������������泣����û�����޸ĵ�*/
																									/*����˵���ȽϺ���İ취�ǰѲ��������޸�Ϊconst char */
	
	void display();
private:
	const char *p;								//�ַ���ָ�룬����ָ���ַ���
};
String::String(const char *str){			//���幹�캯��
	p = str;										//ʹPָ��ʵ���ַ���
}
void String::display(){					//���P��ָ���ַ���
		cout << p;
}
int main() {
	
	   String string1("book");			//�������
		string1.display();										//���ù��ó�Ա����
		cout << endl;												//����
		system("pause");
		return 0;
	}



//   ����Ҽ�Ҫ�����泣����Ҫ���ַ���������ô����
//   char *msg = "hello";
//   *msg = 'j';
//    printf("%s/n", "hello");
//��������ͨ�����룬ʵ���ϻὫmsgָ������ݴ�"hello"ת��Ϊ"jello", ��ȷ�Ľ�������ǽ�msg����Ϊһ��ָ�򲻱��ַ�����ָ�룺
//				const char  *msg;
//				msg = "hello";
//				msg = "good-bye";