#pragma once
#include "Worker.h"
class HourlyWorker : public Worker
{

protected:
	float hourlyWage = 0;

public:
	HourlyWorker(float tempId, float tempHoursPerWeek, float tempHourlyWage);
	float CurrentPayCheck();
};

