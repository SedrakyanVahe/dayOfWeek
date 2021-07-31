#include "dayOfWeek.hpp"

int main(){
    int d, m, y;
	int day = 0;
	
	const string Names[] = {"Sunday","Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
	
    // ask data and  calling function, storing weekday number in day

    cout << "Please insert day: "; cin >> d;
    while(d > 31){
        cout << "Please insert the number less than 32: "; cin >> d;
    }


    cout << "Please insert month : "; cin >> m;
    while(m > 12){
        cout << "Please insert the number less than 13: "; cin >> m;
    }


    cout << "Please insert year: "; cin >> y;
    while(y < 1900){
        cout << "Please insert the number greater than 1900: "; cin >> y;
    }

    day = getWeekDay(d,m,y);
    // printing the date and day of week
	cout << d << "/" << m << "/" << y <<" : " << Names[day] <<endl;

	return 0;    
}

