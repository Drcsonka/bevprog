#include "std_lib_facilities.h"

int main()
{
	try
	{
		//1. feladat
		cout << "Success!\n";

		//2. feladat
		cout << "Success!\n";

		//3. feladat
		cout << "Success" << "!\n";

		//4. feladat
		cout << "Success"<< "!\n";

		//5. feladat
		int res = 7;
		vector<int> v(10);
		v[5] = res;
		cout << "Success!\n";

		//6. feladat
		vector<int> v1(10);
		v1[5] = 7;
		if (v1[5]==7)
			cout << "Success!\n";

		//7. feladat
		if (true)
			cout << "Success!\n";
		else
			cout << "Fail!\n";

		//8. feladat
		bool c = false;
		if (!c)
			cout << "Success!\n";
		else
			cout << "Fail!\n";

		//9 feladat
		string s = "ape";
		bool c1 = "fool"<s;
		if (!c1)
			cout << "Success!\n";

		//10. feladat
		string s1 = "ape";
		if (s1!="fool")
			cout << "Success!\n";

		//11. feladat
		string s2 = "ape";
		if (s2!="fool")
			cout << "Success!\n";

		//12. feladat
		string s3 = "ape";
		if (s3<"fool")
			cout << "Success!\n";

		//13. feladat
		vector<char> v2(5);
		for (int i=0; i<v2.size(); ++i);
		cout << "Success!\n";

		//14. feladat
		vector<char> v3(5);
		for (int i=0; i<v3.size(); ++i);
		cout << "Success!\n";

		//15. feladat
		string s4 = "Success!\n";
		for (int i=0; i<s4.length(); ++i)
			cout << s4[i];

		//16. feladat
		if (true)
			cout << "Success!\n";
		else
			cout << "Fail!\n";

		//17. feladat
		int x = 2000;
		char c2 = x;
		if (c2!=2000)
			cout << "Success!\n";

		//18. feladat
		string s5 = "Success!\n";
		for (int i=0; i<s5.length(); ++i)
			cout << s5[i];

		//19. feladat
		vector<int> v4(5);
		for (int i=0; i<v4.size(); ++i);
		cout << "Success!\n";

		//20. feladat
		int i=0;
		int j = 9;
		while (i<10)
			++i;
		if (j<i)
			cout << "Success!\n";

		//21. feladat
		int x2 = 2;
		double d = 5/double (x2);
		if (d==x2+0.5)
			cout << "Success!\n";

		//22. feladat
		string s6 = "Success!\n";
		for (int i=0; i<=10; ++i)
			cout << s6[i];

		//23. feladat
		int i2=0;
		int j2=9;
		while (i2<10)
			++i2;
		if (j2<i2)
			cout << "Success!\n";

		//24. feladat
		int x3 = 4;
		double d2 = 5/double (x3-2);
		if (d2==2+0.5)
			cout << "Success!\n";

		//25. feladat
		cout << "Success!\n";
	return 0;
	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}