#include<iostream>
using namespace std;
int main(){
int i;
float mark, sum=0,avg;
cout<<"Enter Marks obtained in 5 subject"<<endl;
for(i=0;i<5;i++){
	cin>>mark;
	sum=sum+mark;

}avg=sum/5;

cout<<"Your Grade is = ";
if(avg>=80 && avg<=100)
	cout<<"A+";
else if(avg>=75 && avg<=79)
	cout<<"A";
	else if(avg>=70 && avg<=74)
	cout<<"A-";

	else if (avg>=65 && avg<=69)
		cout<< "B+";
	else if (avg>=60 && avg<=64)
		cout<< "B";
		else if (avg>=55 && avg<=59)
		cout<< "B-";
		else if (avg>=50 && avg<=54)
		cout<< "C+";
		else if (avg>=45 && avg<=49)
		cout<< "C";
		else if (avg>=40 && avg<=44)
		cout<< "D";
		else if (avg<40)
		cout<< "F";
		else
			cout<<"Invalid!";
		return 0;


}
