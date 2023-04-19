#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet {
protected:
	string name;
	int age;
	string type;

public:
	//생성자
	Pet(string name, int age, string type)
		: name(name), age(age), type(type) {}

	string getNAme() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getType() {
		return type;
	}
};

//자식 클래스 생성(강아지)
class Puppy : public Pet {
private:
	string breed;

public:
	Puppy(string name, int age, string type, string breed)
		: Pet(name, age, type), breed(breed) {}

	string getBreed() {
		return breed;
	}
};