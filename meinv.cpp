#include<iostream>
using namespace std;
class women{
	public:
		women(){
			cout<<"创建了一个女人\n"; 
		}
		~women(){
				cout<<"调用女人的析构的函数\n";
		}
		
}; 
class Meinv:public women{
	public:
		Meinv(){
			cout<<"创建了一个美女\n";
		}
		~Meinv(){
			cout<<"调用美女的析构的函数\n";
		}
};
 
int main(){

	Meinv ary; 
	return 0;
}

