#include<iostream>
using namespace std;
//monkey
class CMonkey{
	public:
	CMonkey(){
		cout<<"调用了构造函数\n"; 
	} 
	CMonkey(int i){
		no = i;
		cout<<"调用了2号构造函数，no = "<< no<<endl;
	}
	~CMonkey(){
		cout<<"调用了析构函数\n"; 
	} 
	int no;
}; 

int main(){
	CMonkey m1;//创建了一个猴子对象 
			   //定义一个对象，首先调用的就是类的构造函数（和类同名的函数，作用：初始化类的成员变量） 
	CMonkey m2(3);
	return 0;
}

