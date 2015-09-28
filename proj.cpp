#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define t 5

double formula(int principalP, int compoundingN, int timeT, double interestK) {

	double totalA = principalP * pow((1 + ((interestK / 100) / compoundingN)), (compoundingN * timeT));
	return totalA;
}
int main()

{
	double p = 0;

	cout << "Please enter your investment" << endl;
	cin >> p;
	cout << " " << endl << endl;

	 // Kendall Bank
	int    kendN = 4;
	double kendK = 1.08;

	double kendTotal = formula(p, kendN, t, kendK);
	double kendInte = kendTotal - p;
	// Gables Bank
	int   gablesN = 365;
	double gablesK = 2.10;

	double gablesTotal = formula(p, gablesN, t, gablesK);
	double gablesInte = gablesTotal - p;

	// Homestead Bank
	int homesteadN = 12;
	double homesteadK = 2.22;

	double homesteadTotal = formula(p, homesteadN, t, homesteadK);
	double homesteadInte = homesteadTotal - p;

	// Hialeah Bank
	int hialeahN = 1;
	double hialeahK = 4.25;

	double hialeahTotal = formula(p, hialeahN, t, hialeahK);
	double hialeahInte = hialeahTotal - p;
  //  cout << "Bank of Kendall : " kendK;

	cout << "Bank" << setw(22) << "Interest" <<setw(6) << "Times" << setw(35) << "Total" << endl;
	cout << "Name" << setw(21) << "Rate(%)"  << setw(12) << "Compounded" << setw(11) << "Principal" << setw(10) << "Interest" << setw(10) << "Amount" << endl;

cout << setfill('-') << setw(18)  << "  "
     << setfill('-') << setw(9)   << "  "
     << setfill('-') << setw(12)  << "  "
     << setfill('-') << setw(11)  << "  "
     << setfill('-') << setw(12)  << "  "
     << setfill('-') << setw(12)  << ""
     << setfill(' ') << setw(1)  << " "
      << endl;

	cout
	     << left << setw(19) << "Bank of Kendall"
	     << setprecision(2) << fixed  << kendK << '%'
	     << right << setw(9) << kendN
         << setw(8) << "$ " << right << setprecision(2) << fixed << p
	     << setw(8) << "$ " << right << setprecision(2) << fixed << kendInte
         << setw(8) << "$ " << right << setprecision(2) << fixed << kendTotal  <<endl;

	cout
         << left << setw(19) << "Bank of Gables"
	     << setprecision (2) << fixed << gablesK << '%'
         << right << setw(9) << gablesN
         << setw(8) << "$ " << right << setprecision(2) << fixed << p
         << setw(8) << "$ " << right << setprecision(2) << fixed << gablesInte
         << setw(8) << "$ " << right << setprecision(2) << fixed << gablesTotal  <<endl;

	cout
         << left << setw(19) << "Bank of Homestead"
	     << setprecision (2) << fixed << homesteadK << '%'
         << right << setw(9) << homesteadN
         << setw(8) << "$ " << right << setprecision(2) << fixed << p
         << setw(8) << "$ " << right << setprecision(2) << fixed << homesteadInte
         << setw(8) << "$ " << right << setprecision(2) << fixed << homesteadTotal  <<endl;

	cout
         << left << setw(19) << "Bank of Hialeah"
	     << setprecision (2) << fixed <<  hialeahK << '%'
         << right << setw(9) << hialeahN
         << setw(8) << "$ " << right << setprecision(2) << fixed << p
         << setw(7) << "$ " << right << setprecision(2) << fixed << hialeahInte
         << setw(8) << "$ " << right << setprecision(2) << fixed << hialeahTotal  <<endl;

	return 0;
}
