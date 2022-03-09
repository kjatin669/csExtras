#include <iostream>
using namespace std;

class basic{
	public:
		int salary;
		void getSalary(){			
			cout<<"Salary: ";
			cin>>salary;
		}
};

class workYear{
	public:
		int year;
		void getYear(){
			cout<<"Year: ";
			cin>>year;
		}
};

class D : public basic, public workYear{
	public:
		void initandprint(){		
			getSalary();
			getYear();
			cout<<"Basic Salary: "<<salary<<endl;
			cout<<"No of Years Worked in a Company: "<<year<<endl;
		}
		void bonus(){
			if (year>=3){
				salary+=300;
			}
			else{
				salary+=100;
			}
		}
	
};

int main(){
	D d;
	d.initandprint();
	d.bonus();
	cout<<"Final Salary: "<<d.salary;
}
