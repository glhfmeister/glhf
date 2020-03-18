#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	
const int N = 10;
	int mainArray [N];
	int temp,sign = 0,min,max,index = 0;
	
	for (int i = 0;i<N;i++){
		
		temp = 100 - rand ()%201;
		do{
			for (index = 0;index < i;index++){
				if (mainArray[index]==temp){
					temp = 100 - rand ()%201;
					sign = 0;
				}
				cout << sign << temp;					
			}
			cout << sign;
			sign += 1;
		}while (sign < i);
		sign = 0;
		mainArray[i]=temp;
		if (temp < min){
			min = i;
		}
		if (temp > max){
			max = i;
		}
		
	}
	
	for (int i = 0;i<N;i++){
		cout << mainArray[i] << " ";
	}
	cout << endl << min << " " << max << " ";
	return 0;
}
