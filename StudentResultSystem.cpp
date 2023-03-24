// C++ program to print student record using class

#include <iostream>
using namespace std;
class Student
{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"Enter Student Details"<<endl;
			cout<<"Roll Number:";
			cin>>id;
			cout<<"Name:";
			cin>>name;
		}
}; 
class Result: public Student{
	private:
		float per;
	public:
		void setPersentage(){
			cout<<"Percentage=";
			cin>>per;
		}
		void showResult(){
			cout<<"\nStudent Information"<<endl;
			cout<<"Id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Percentage="<<per<<"%"<<endl;
		}
};
int main(){
	Result R1;
	R1.setStudent();
	R1.setPersentage();
	R1.showResult();
	return 0;
}