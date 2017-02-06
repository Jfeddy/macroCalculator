#include <iostream>
#include <cmath>
#include "calorieCalc.h"
#include "macrosCalc.h"

using namespace std;

int main () {
  double daily_cal_req, pct_dv_fat, pct_dv_carbs, pct_dv_protein;
  double grams_fat, grams_protein, grams_carbs;
  int macro;
  daily_cal_req = DailyCalReq();
  cout << "Fat, carbs, or protein?: " << endl;
  cout << "Fat = 1, \nCarbs = 2, \nProtein = 3\n";
  cin >> macro;
  if(macro == 1) {
    cout << "How many grams of fat?: ";
    cin >> grams_fat;
    pct_dv_fat = calcFat(daily_cal_req, grams_fat);
    cout << "This is " << pct_dv_fat << "% of your recommended daily";
    cout << " intake of fat.\n";
  }
  else if(macro == 2) {
    cout << "How many grams of carbs?: ";
    cin >> grams_carbs;
    pct_dv_carbs = calcCarbs(daily_cal_req, grams_carbs);
    cout << "This is " << pct_dv_carbs << "% of your recommended daily intake";
    cout <<  " of carbs.\n";
  }
  else if(macro == 3) {
    cout << "How many grams of protein?: ";
    cin >> grams_protein;
    pct_dv_protein = calcProtein(daily_cal_req, grams_protein);
    cout << "This is " << pct_dv_protein << "% of your recommended daily intake";
    cout <<  " of protein.\n";
  }
  return 0;
}
