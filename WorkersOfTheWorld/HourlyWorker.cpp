#pragma once
#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(float tempId, float tempHoursPerWeek, float tempHourlyWage) 
	: Worker( tempId, tempHoursPerWeek)
{
	if (tempHourlyWage > 0) {
		this->hourlyWage = tempHourlyWage;
	}
	else {
		this->hourlyWage = 0;
	}
}

float HourlyWorker::CurrentPayCheck() {
	return this->hourlyWage * this->hoursWorked;
}

