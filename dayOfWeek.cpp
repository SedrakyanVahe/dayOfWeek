#include "dayOfWeek.hpp"
//function to get date and return weekday number 
int getWeekDay(int dd, int mm, int yy) {
	//formula to get weekday number
	int rst = dd                                                      
		+ ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5) 
		+ (365 * (yy + 4800 - ((14 - mm) / 12)))
		+ ((yy + 4800 - ((14 - mm) / 12)) / 4)
		- ((yy + 4800 - ((14 - mm) / 12)) / 100)
		+ ((yy + 4800 - ((14 - mm) / 12)) / 400)
		- 32045;

	return (rst+1)%7;
}


