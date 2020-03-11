#include <iostream>
#include <cmath>

double firsta (int,int);
double seconda (int,int );

using namespace std;
int main (){
	double u1,u2,t,s1,s2;
	
	u1 = 10;
	t  = 1;
	
	u2 = 9;
	
	while (s1 != s2){
		
		s1 = firsta (u1,t);
		s2 = seconda (u2,t);
		
		u1 += 1;
		u2 += 1.6;
		t += 1;
		
		cout  << s1 << "         " << s2 << endl;
	}
	
	return 0;
}
//---------------------------------------------------
double firsta (int u1f,int tf){
	
	return (u1f*tf) + (tf*tf/2);
	
	
}
//---------------------------------------------------
double seconda (int u2f,int tf){
	
	return (u2f*tf) + (tf*tf/2);
}
