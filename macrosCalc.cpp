#include<iostream>
#include "macrosCalc.h"

using namespace std;

const int  PCT_CONVERT = 100;

int main() {
  return 0;
  }

double calcFat(double kcal, double grams) {
  double g_per_cal = 1/9.0;
  double dv_fat_cals = kcal * .2;
  double dv_fat_grams = dv_fat_cals * g_per_cal;
  double pct_dv_fat = grams / dv_fat_grams * PCT_CONVERT;
  return pct_dv_fat;
}


double calcCarbs(double kcal, double grams) {
  double g_per_cal = 1/4.0;
  double dv_carb_cals = kcal * .5;
  double dv_carb_grams = dv_carb_cals * g_per_cal;
  double pct_dv_carbs = grams / dv_carb_grams * PCT_CONVERT;  
  return pct_dv_carbs;
}


double calcProtein(double kcal, double grams) {
  double g_per_cal = 1/4.0;
  double dv_protein_cals = kcal * .3;
  double dv_protein_grams = dv_protein_cals * g_per_cal;
  double pct_dv_protein = grams / dv_protein_grams * PCT_CONVERT;  
  return pct_dv_protein;
}
