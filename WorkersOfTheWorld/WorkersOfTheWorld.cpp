
#pragma once
#include <iostream>
#include "HourlyWorker.h"

using namespace std;

int main()
{
    
    Worker phantom = Worker(3, 20);
    HourlyWorker hourlyguy = HourlyWorker(4, 32, 11.43);
    hourlyguy.ChangeHoursWorked(18);

    cout << "Our phantom is paid " << phantom.CurrentPayCheck() << "\n";
    cout << "Our other worker is paid " << hourlyguy.CurrentPayCheck() << "\n";
    return 0;
}
