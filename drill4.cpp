#include "std_lib_facilities.h"
int main()
{
double szam;
string ertek;
vector <double> valtozok;

while (ertek != "|") 
{
	cout << "\nEnter a unit (cm, m, ft, in) or '|' to terminate): ";
	cin >> ertek;

	if (ertek == "|")
		return 0;

	cout << "Enter a value in '" << ertek <<"' you want to convert meter to: ";
	cin >> szam;
	cout << '\n';

	if(ertek == "cm") 
	{
		szam = szam/100;
		valtozok.push_back(szam);
	}

	else if( ertek == "m") 
	{
		valtozok.push_back(szam);
	}

	else if( ertek == "ft") 
	{
		szam = szam/3.28;
		valtozok.push_back(szam);
	}

	else if( ertek == "in") 
	{
		szam = szam/39.37;
		valtozok.push_back(szam);
	}

	else 
	{
		cout << "Invalid unit.\n\n";
		return 0;
	}

	//sort ( valtozok. begin(),valtozok.end());
	
	sort( valtozok );

	cout << "Your value after exchanging to 'm': " << szam << '\n';

	cout << "Smallest value: " << valtozok.front() << '\n';

	cout << "Largest value: "<< valtozok.back() << '\n';

	cout << "Total values: " << valtozok.size() << '\n';

	cout << "Values entered so far in increasing order: ";

	for(int i = 0; i < valtozok.size(); ++i)
	{
		cout << valtozok[i] <<", ";
	}
	cout << '\n';
}
}