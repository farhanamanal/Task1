// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
/*
{
	cout << "Name: Farhana Manal \nFather Name: M. Wasim Ud Din \nAddress: HOUSE# 82-A/5, STREET#28, RD# 5, TIP HOUSING SCHEME \nProvince: KPK \t City/village: Haripur\t\tStreet Address: 28\tPostal Code: 22620 \n"  ;
	return 0;
}

*/
/*
{
	cout<<"**************************" << endl;
	cout << "**************************" << endl;
	cout << "**************************" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "*********************" << endl;
	cout << "*********************" << endl;
	cout << "*********************" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	cout << "******" << endl;
	return 0;
}
*/
{
	int a, b, ans, ans1, ans2, ans3, ans4;
	
	cout << "Enter first Number " << endl;
	cin >> a;
	char op;
	cout << "Enter an operator \n 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:, 5 for mod " << endl;;
	cin >> op;

	cout << "Enter second Number" << endl;
	cin >> b;

	if (op == '1')
	{
		ans = a + b;
		cout << "Answer = " << ans<<endl;
		

	}
	
	if (op == '2')
	{
		ans1 = a - b;
		cout << "Answer = ";
		cout << ans1 << endl;
	}
		
			if (op == '3')
			{
				ans2 = a*b;
				cout << "Answer = ";
				cout << ans2 << endl;
				
			}
			
				if (op == '4')
				{
					ans3 = a / b;
					cout << "Answer = ";
					cout << ans3;
				
				}
				
					if (op == '5')
					{
						ans4 = a%b;
						cout << "Answer = " << ans4 << endl;
						
					}
	return 0;
}