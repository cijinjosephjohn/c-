#include<iostream>
#include<cmath>
using namespace std;
int bintonum(int n);
int main(){
	int n,ans,dup,flag=0;
	cout<<"Enter the binary number:";
	cin>>n;
	dup=n;
	while(dup!='\0'){
		int rem=dup%10;
		if(rem>1 || rem<0){
			flag=1;
			break;
		}
		dup=dup/10;
	}
	if(flag==0){
		ans=bintonum(n);
		cout<<"Binary number "<<n<<" is "<<ans;
	}
	else{
		cout<<"The number is not binary";
	}
	return 0;
}
int bintonum(int n){
	int rem,ans=0,count=0;
	while(n!=0){	
		rem=n%10;
		ans=ans+(rem*(pow(2,count)));
		count++;
		n=n/10;
	}
	return ans;
}