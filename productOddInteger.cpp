#include<iostream>
using namespace std;
main(){
	int i,a,product=1;
	
	for(i=1;i<=15;i++){
		if(i%2==0){
		a=1;
	}
	else{
		product=product*i;
	}	
	}
	cout<<"product of odd integers : "<<product;
	return 0;
}
