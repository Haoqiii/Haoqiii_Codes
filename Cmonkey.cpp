#include<iostream>
using namespace std;
//monkey
class CMonkey{
	public:
	CMonkey(){
		cout<<"�����˹��캯��\n"; 
	} 
	CMonkey(int i){
		no = i;
		cout<<"������2�Ź��캯����no = "<< no<<endl;
	}
	~CMonkey(){
		cout<<"��������������\n"; 
	} 
	int no;
}; 

int main(){
	CMonkey m1;//������һ�����Ӷ��� 
			   //����һ���������ȵ��õľ�����Ĺ��캯��������ͬ���ĺ��������ã���ʼ����ĳ�Ա������ 
	CMonkey m2(3);
	return 0;
}

