#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n!=1){
	cout<<"n="<<n<<endl;
if(n%2==1)
        n=n*3+1;
else
	n=n/2;

}
cout<<"n="<<n<<endl;
	
return 0;
}
