#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter elements :"<<endl;
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
		
	}
		cout<<"Entered elements :";
	for(int i=0;i<5;i++){
		cout<<" "<<*(arr+i)<<endl;
		
	}
	return 0;
}

