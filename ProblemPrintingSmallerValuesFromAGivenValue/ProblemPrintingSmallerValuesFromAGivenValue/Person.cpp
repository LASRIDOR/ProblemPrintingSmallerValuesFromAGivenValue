#include "Person.h"

//----------------------------------------------------------------------------------------------
Person::Person(int key, string name) {
	SetKey(key);
	SetName(name);
}
//----------------------------------------------------------------------------------------------
bool Person::operator==(const Person& other) {
	return this->key == other.key && this->name == other.name;
}
//----------------------------------------------------------------------------------------------
ostream& operator<<(ostream& os, const Person& person) {
	os << person.name << " " << person.key << endl;
	return os;
}
//----------------------------------------------------------------------------------------------
void Person::SetKey(int key) {
	this->key = key;
}
//----------------------------------------------------------------------------------------------

void Person::SetName(string name) {
	this->name = name;
}
//----------------------------------------------------------------------------------------------
int Person::GetKey() {
	return this->key;
}
//----------------------------------------------------------------------------------------------
string Person::GetName() {
	return this->name;
}
//----------------------------------------------------------------------------------------------
void Person::PrintPerson() {
	cout << this->name<< " " << this->key << endl;
}
//end of cpp item