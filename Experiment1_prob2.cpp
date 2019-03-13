#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	double mass, density; 

	cout << "Input mass: " << endl;
	cin >> mass;
	cout << "Input density: " << endl;
	cin >> density;
	cout << "Volume of object: " << mass / (4*density) << "cm^3" << endl; 
	
_getch();
return 0;
}