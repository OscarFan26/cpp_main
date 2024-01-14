#include <iostream>
using namespace std;


int monkey(int  n){
	if (n == 10){
		return  1;
	}
	return (monkey(n+1) + 1) * 2;
} 
int main(){
	cout << monkey(1);
	return 0;
}
