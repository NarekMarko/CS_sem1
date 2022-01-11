// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
int x = 0;
char y = 'q';
while(true){
	cout << "youve been gnomed";
	cin>>y;
	if(y=='q'){
		cout<<"look brhind you";
		break;
	}

	if(x==100){
		break;
	}
	x=x+1;
	
	}
}
