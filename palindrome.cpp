#include<iostream>
int reverse(int *p);
int reverse(int *p){
	int ans=0;
	while(*p!=0){
		int rem=*p%10;
		ans=ans*10+rem;
		*p=*p/10;
	}
	return ans;
}
using namespace std;
int main(){
	int a,dup,ans,done=0;
	while(done==0){
		cout<<"Enter the number : ";
		cin>>a;
		dup=a;
		ans=reverse(&a);
		if(dup==ans){
			cout<<"The number "<<ans<<" is a palindrome";
			done=1;
		}
		else{
			char ch;
			cout<<"The number "<<dup<<" is not a palindrome\n";
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