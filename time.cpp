#include <iostream>
#include <ctime>
#include "time.h"

using namespace std;

int main(){	
	string day;
	string month;
	int year;
	time(&t);
	struct tm * now = localtime(&t);
	switch(now->tm_wday){
		case 0:
			day = "Sunday";
			break;
		case 1:
			day = "Monday";
			break;
		case 2:
			day = "Tuesday";
			break;
		case 3: 
			day = "Wednesday";
			break;
		case 4:
			day = "Thursday";
			break;
		case 5:
			day = "Friday";
			break;
		case 6:
			day = "Saturday";
			break;
		default:
			day = "null";
	}
	switch(now->tm_mon){
		case 0:
			month = "January";
			break;
		case 1:
			month = "February";
			break;
		case 2:
			month = "March";
			break;
		case 3:
			month = "April";
			break;
		case 4:
			month = "May";
			break;
		case 5:
			month = "June";
			break;
		case 6:
			month = "July";
			break;
		case 7:
			month = "August";
			break;
		case 8:
			month = "September";
			break;
		case 9:
			month = "October";
			break;
		case 10:
			month = "November";
			break;
		case 11:
			month = "December";
			break;
		default:
			month = "null";
	}
	if(now->tm_hour > 12){
		now->tm_hour = now->tm_hour - 12;
		twelve = true;
	}
	year = now->tm_year + 1900;
	if(twelve == false){
		cout << now->tm_hour << ":" << now->tm_min << " AM," << " " << day << " " << now->tm_mday << " " + month << " " << year << endl;
	}else{
		cout << "0" << now->tm_hour << ":" << now->tm_min  << " PM," << " " << day << " " << now->tm_mday << " " + month << " " << year << endl;
	}
	return 0;
}
