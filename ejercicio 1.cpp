#include <iostream>
using namespace std;
/*int n1, n2;
unsigned int nn1, nn2;
double d1,d2;
char c1;
bool b1;*/
int main(int argc, char *argv[]) {
	int n1, n2;
	n1=2147483645;	
	cout<<"el resultado de n1 es:"<<n1<<endl;
	
	unsigned int num1, num2;
	num1=2147483645;	
	
	num2=3;	
	cout<<"el resultado de nn1 es:"<<num1+num2<<endl;
	
	double num3,num4;
	num3=-1;	
	
	num4=2147483645;	
	cout<<"el resultado de d1 es:"<<num3+num4<<endl;
	
	char num5, num6;
	num5=2147483645;
	num6=2;
	cout<<"el resultado de c1 es:"<<num5+num6<<endl;
	
	bool num7;
	num7=-1000;
	cout<<"el resultado de b1 es:"<<num7<<endl;
	
	return 0;
}

