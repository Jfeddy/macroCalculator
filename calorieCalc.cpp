#include <iostream>
#include <cmath>
#include "calorieCalc.h"
using namespace std;


int main(){
<<<<<<< HEAD
  DailyCalReq();
=======
	DailyCalReq();
>>>>>>> d3362616e50db17a3d0170be082d937d75a41457
	return 0;
}


double DailyCalReq () {
	int userGender = 0;
	double userLbs = 0.0;
	double userKgs = 0.0;
	double userBasal = 0.0;
	double LbsToKgs = 1 / 2.2;

	cout << " Are you male or Female?" << endl;
	cout << "1 = Male" << endl << "2 = Female" << endl;
	cout << "input integer here -----> ";
	cin >> userGender;
	cout << endl << "What is your weight in pounds" << endl;
	cout << "input pounds here -----> ";
	cin >> userLbs;
	

	userKgs = userLbs * LbsToKgs;
	
	if(userGender == 1) {
		// 24 is the conversion factor for male basal
		userBasal = userKgs * 24;
	} else {
		// 23 is the conversion factor for female basal
		userBasal = userKgs * 23;
	}

	int userActivityLevel = 0;
	double userTotalCalories = 0;
	double veryLightMW = 1.3;
	double lightM = 1.6;
	double lightW = 1.5;
	double moderateM = 1.7;
	double moderateW = 1.6;
	double heavyM = 2.1;
	double heavyW = 1.9;

	cout << "Your basal calorie requirement is " << userBasal << endl;
	cout << "What activity level are you? " << endl << "1 = Very light" << endl <<
	"2 = Light" << endl << "3 = Moderate" << endl << "4 = Heavy" << endl;
	cout << "Input integer here -----> ";
	cin >> userActivityLevel;

	switch ( userActivityLevel ) {
		
		case 1 :
		userTotalCalories = userBasal * veryLightMW;
		break;
		
		case 2 :
		if(userGender == 1){
			userTotalCalories = userBasal * lightM;
		} else {
			userTotalCalories = userBasal * lightW;
		}
		break;

		case 3 :
		if(userGender == 1){
			userTotalCalories = userBasal * moderateM;
		} else {
			userTotalCalories = userBasal * moderateW;
		}
		break;

		default :
		if(userGender == 1){
			userTotalCalories = userBasal * heavyM;
		} else {
			userTotalCalories = userBasal * heavyW;
		}
		break;
	}

	cout << "your daily required Calories is " << userTotalCalories << endl;

	return userTotalCalories;
}

