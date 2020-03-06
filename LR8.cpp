#include <iostream>
#include <cmath>
using namespace std;

double formula (int,double);

int main() {
	int n = 7;
    double a,x1,xn,results;
    
    cout << "Input a ";
    cin >> a;
    
    for (int i = 0; i < a; i++){
    	results = formula (i,x1);
		cout << results << "\t";   	
	}

	
    
    return 0;
}
double formula (int a1,double x01){

	if (a1 == 0){
		return 0;
	}
	if (a1 == 1){
		return 1;
	}

	if (a1 < 2){
		
		x01 = 1 / exp (2*a1);
		
	}
	
	if (2 <= a1 < 10){
		
		x01 = 1 / exp (4*a1);
		
	}
	
	if (a1 >= 10){
		
		x01 = 1 / exp (a1 / 2);
		
	}
	return  1 / exp(formula(a1-1,x01)) + 1 / exp(formula( a1-1,x01 ) * 2) ;
}
