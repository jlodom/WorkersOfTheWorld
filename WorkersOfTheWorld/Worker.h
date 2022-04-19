#include <string.h>
class Worker
{

private:
	// Name goes here when we have time to figure out string issue.
	int id = -1;

protected:
	float hoursWorked = 0;
	float maxHoursPerWeek = 0;
	int GetId();

public:
	Worker(float tempId, float tempHoursPerWeek);
	float AnnualPay();
	virtual float CurrentPayCheck();
	int PayPeriodsPerYear();
	float Bonus();
	bool ChangeHoursWorked(float change);
};

