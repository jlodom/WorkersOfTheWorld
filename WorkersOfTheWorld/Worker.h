#include <string.h>
class Worker
{

private:
	// Name goes here
	float hoursWorked = 0;
	float maxHoursPerWeek = 0;
	int id = -1;

public:
	float AnnualPay();
	float CurrentPayCheck();
	int PayPeriodsPerYear();
	float Bonus();
};

