#include<iostream>
using namespace std;
class women{
	public:
		women(){
			cout<<"������һ��Ů��\n"; 
		}
		~women(){
				cout<<"����Ů�˵������ĺ���\n";
		}
		
}; 
class Meinv:public women{
	public:
		Meinv(){
			cout<<"������һ����Ů\n";
		}
		~Meinv(){
			cout<<"������Ů�������ĺ���\n";
		}
};
 
int main(){

	Meinv ary; 
	return 0;
}

