#include"iostream"
using namespace std;
#include "stdlib.h"
class Time
{
public:
	Time() { minute = 0, sec = 0; }
	Time (int m,int s): minute(m),sec(s){}
	Time operator ++();
	void display() {
		cout << minute << ":" << sec << endl;
	}
private:
	int minute;
	int sec;
};
Time Time::operator ++() {
	if (++sec >= 60) {
		sec = 0;
		++minute;
	}
	return *this;
}
int main() {
	Time t1(34, 0);
	for (int i = 0; i <= 60; i++) {
		++t1;
		t1.display();
	}
	system("pause");
	return 0;
}