// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char y = 'a';
	int x = 0;
	char z = 'b';
	
	cout<<"enter symbol"<<endl;
	cin>>y;
	cout<<"enter leghth"<<endl;
	cin>>x;
	cout<<"horizontal or verical (h or v)"<<endl;
	cin>>z;
	if (z=='h')
	{
		for(int h = 0; h < x;h++){
		cout<<y;
		
		}
	
	}
	
	if (z=='v')
	{
		for(int v = 0; v<x;v++){
		cout<<y<<endl;
		}
	}
	
}
