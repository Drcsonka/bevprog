#include "std_lib_facilities.h"

int main(){
	cout<<"Add meg az elso szamot: \n";
	double a;
	cin >> a;

	cout<<"Add meg a masodik szamot: \n";
	double b;
	cin >> b;

	cout<<"A megadott ertekek: a = "<<a<<", b = "<<b<<"\n";


	a = a+b;
	b = a-b;
	a = a-b;

	cout<<"a felcserelt ertekek: a = "<<a<<", b = "<<b<<"\n";

}