#include<iostream>
using namespace std;

class SoSimple
{
	int num;
public:
	SoSimple(int n):num(n){}
	SoSimple(const SoSimple& copy) :num(copy.num) { cout << "Called SoSimple(const SoSimple&copy)" << endl; }
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)	//복사 생성자가 자동 호출된다.
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;
	return 0;
}