#include<iostream>
using namespace std;
class Employee{
	int id;
	static int count;//these classes are private
	
	public:
		void setData(void){
			cout<<"enter the id"<<endl;
			cin>>id;
			count++;
		}
		void getDate(void){
			cout<<"the id of the employee is "<<id<<" and this is employee number"<<count<<endl;
		}
		static void getCount(void){
			cout<<"the value of count is: "<<count<<endl;
		}
		
};
int Employee ::count;//defualt value is zero

int main(){
	Employee asmita;
	Employee trips;
	Employee harshita;
	
	asmita.setData();
	asmita.getDate();
    Employee::getCount();
    
    
	trips.setData();
	trips.getDate();
	Employee::getCount();
	
	
	harshita.setData();
	harshita.getDate();
	Employee::getCount();
	
	return 0;
	

}
