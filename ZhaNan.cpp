#include<iostream>
using namespace std;
class Zhanan{
	public:
		Zhanan(){
			no = 1;
			cout<<"һ������\n"; 
		}	
		Zhanan(int i){
			no = i;
			cout<<"����no = "<<no<<endl; 
		}
		Zhanan(int i,int j){
			no = i;
			age = j;
			cout<<"����no = "<<no<<endl; 
			cout<<"����age = "<<age<<endl;
		}	
		~Zhanan(){
			cout<<"����"<<no<<"����"<<endl; 
		}
		int no;
		int age;
		
}; 
int main(){
	Zhanan zhaozhen;
	Zhanan Luogou(2,40);
	Zhanan W(3);
	Zhanan E(4,26);
	return 0;
}

