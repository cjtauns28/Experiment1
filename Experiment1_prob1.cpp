#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{ 

	cout << "                 Ticket Price               Ticket Sold           Total Amount" << endl;
	cout << "Box               250                     5750                      "  << 250 * 5750 << endl;
	cout << "Sideline          100                     28000                     "  << 100 * 28000 << endl;
	cout << "Premium           50                      35750                     "  << 50 * 35750 << endl;
	cout << "GenAd             25                      18750                     "  << 25 * 18750 << endl << endl;
	cout << " Total Sales in $" << 250 * 5750 + 100 * 28000 + 50 * 35750 + 25 * 18750 << "." <<endl;

_getch();
return 0;

}