#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner;
	int temperature;
	int humidity;
	bool security;

public:;
	  SmartHome(string owner, int temperature, int humidity, bool security) {
		  this->owner = owner;
		  this->temperature = temperature;
		  this->humidity = humidity;
		  this->security = security;
	  }

	  void setTemperature(int temperature) {
		  this->temperature = temperature;
	  }
	  void setHumidity(int humidity) {
		  this->humidity = humidity;
	  }
	  void setSecurity(int security) {
		  this->security = security;
	  }
	  int getTemperature() {
		  return this->temperature;
	  }
	  int getHumidity() {
		  return this->humidity;
	  }
	  bool getSecurity() {
		  return this->security;
	  }
	  void printStatus() {
		  cout << "집주인: " << owner << endl;
		  cout << "온도: " << temperature << "도" << endl;
		  cout << "습도: " << humidity << "%" << endl;
		  if (security) {

		  }
	  }
};