#include<iostream>
using namespace std;
class Zhanan{
	public:
		Zhanan(){
			no = 1;
			cout<<"Ò»°ãÔüÄÐ\n"; 
		}	
		Zhanan(int i){
			no = i;
			cout<<"ÔüÄÐno = "<<no<<endl; 
		}
		Zhanan(int i,int j){
			no = i;
			age = j;
			cout<<"ÔüÄÐno = "<<no<<endl; 
			cout<<"ÔüÄÐage = "<<age<<endl;
		}	
		~Zhanan(){
			cout<<"ÔüÄÐ"<<no<<"ËÀÁË"<<endl; 
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

