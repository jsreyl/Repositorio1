#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;
int main(void){
	ofstream out("serie.data")
	int limit;
	cout<<"Introduzca el valor de N: "<<endl;
	cin>>limit;
	double sum = 0;
	for (int i =1; i<=limit; i++){
		sum += 1.0/i;
		cout<< i << " " << sum <<endl;
		out<< i << " " << sum <<endl;
	}
	out.close();
}
