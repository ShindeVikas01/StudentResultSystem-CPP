// Complite student system using CPP
#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		char name[20];
		void setStudent(){
			cout<<"Student Details"<<endl;
			cout<<"ID=";
			cin>>id;
			cout<<"Name=";
			cin>>name;
		}
};
class Internal:public Student{	
	public:
		int im1,im2;
		void setInternal(){
			cout<<"Internal mark for SEM-1=";
			cin>>im1;
			cout<<"Internal mark for SEM-2=";
			cin>>im2;
		}
};
class External{	
	public:
		int em1,em2;
		void setExternal(){
			cout<<"External mark for SEM-1=";
			cin>>em1;
			cout<<"External mark for SEM-2=";
			cin>>em2;
		}
};
class Result:public Internal,public External{
	private:
		int totalm1,totalm2;
		
	public:
		void calculateTotal(){
			totalm1=im1+em1;
			totalm2=im2+em2;
		}
		void showResult(){
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Internal Marks for SEM-1="<<im1<<endl;
			cout<<"External Marks for SEM-1="<<em1<<endl;
			cout<<"SEM-1 Marks Total="<<totalm1<<endl;
			cout<<"Internal Marks for SEM-2="<<im2<<endl;
			cout<<"External Marks for SEM-2="<<em2<<endl;
			cout<<"SEM-2 Marks Total="<<totalm2<<endl;
		}
};
int main()
{
	Result objRes;
	objRes.setStudent();
	objRes.setInternal();
	objRes.setExternal();
	objRes.calculateTotal();
	cout<<"\nStudent Overall Result"<<endl;
	objRes.showResult();
}