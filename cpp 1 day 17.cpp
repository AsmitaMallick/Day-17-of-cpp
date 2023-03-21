#include<iostream>
using namespace std;
class Employee{
	int id;
	int count;//these classes are private
	
	public:
		void setData(void){
			cout<<"enter the id"<<endl;
			cin>>id;
		}
		void getDate(void){
			cout<<"the id of the employee is "<<id;
		}
		
};

int main(){
	Employee asmita;
	Employee trips;
	Employee harshita;
	
	asmita.setData();
	asmita.getDate();
	trips.setData();
	trips.getDate();
	harshita.setData();
	harshita.getDate();
	
	return 0;
	

}







