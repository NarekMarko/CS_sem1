// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int x = 5;
	while(true){
		cout<<x<<endl;
		if(x==25){
			break;
			
		}
		x = x + 1;
	}
	int y = 15;
	while(true){
		cout<<y<<endl;
		if(y==5){
			break;
			
		}
		y = y - 1;
	}
	
	for(int i = 5; i<=25; i=i+1){
		cout << i << endl;
	}
	
	for(int e = 15; e>=5; e=e-1){
		cout << e << endl;
	}
	for(int v = 123; v<=200; v=v+2){
		cout << v << endl;
	}	
		for(int r = 1253; r>=55; r=r-7){
		cout << r << endl;
	}	
	





}
