#include<iostream>
using namespace std;

int main(){
int n,sum=0,i;
cout<<"Enter the Number:"<<endl;
cin>>n;
for(i=1;i<n;i++){
	if(n%i==0){
		sum=sum+i;
	}
	else{
		sum=sum;
	}
}
if(n==sum){
	cout<<"This number is perfect"<<endl;

}
else{
	cout<<"This number is not perfect"<<endl;

}

return 0;

}


