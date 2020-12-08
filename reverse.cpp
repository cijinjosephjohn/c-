#include<iostream>
using namespace std;
int main(){
	int a,ans=0,done=0;
	while(done==0){
		cout<<"Enter the number : ";
		cin>>a;	
		if(a>=10){
			while(a!=0){
				int rem=a%10;
				a=a/10;
				ans=ans*10+rem;
				done=1;
			}
			cout<<"answer is "<<ans;
		}
		else{
			cout<<"The number is less than 10\n";
			char ch;
			cout<<"Did you want to continue[y/n] : ";
			cin>>ch;
			if(ch=='y'){
				done=0;
			}
			else{
				done=1;
			}
		}
		
	}
	return 0;
}