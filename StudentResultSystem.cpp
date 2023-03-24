// C++ program to print student record using class

#include <iostream>
using namespace std;
class Student
{
	private:
		int id;
		char name[20];
	public:
		void setStudent(){
			cout<<"Enter Student Details";
			cout<<"\nEnter Roll Number:";
			cin>>id;
			cout<<"\nEnter Name:";
			cin>>name;
		}
		void getStudent(){
			cout<<"\n\nStudent Details";
			cout<<"\nRollno:"<<id;
			cout<<"\nName:"<<name;
		}
};
int main(){
	Student S1;
	S1.setStudent();
	S1.getStudent();
	return 0;
}