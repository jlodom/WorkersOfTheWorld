#include "Worker.h"

Worker::Worker(float tempId, float tempHoursPerWeek) {
	this->id = tempId; /* In production, there would be ID checks. */
	if (tempHoursPerWeek > 0) {
		this->maxHoursPerWeek = tempHoursPerWeek;
	}
	else {
		this->maxHoursPerWeek = 0;
	}
	
}

bool Worker::ChangeHoursWorked(float change) {
	bool success = false;
	this->hoursWorked += change;
	if (this->hoursWorked < 0) {
		this->hoursWorked = 0;
		success = false;
	}
	else {
		success = true;
	}
	return success;
}

float Worker::CurrentPayCheck() {
	return 0;
}

float Worker::AnnualPay() {
	return 0;
}


int Worker::PayPeriodsPerYear() {
	return 0;
}

float Worker::Bonus() {
	return 0;
}