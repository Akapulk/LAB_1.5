#pragma once
#include "Evil_man.hpp"
//констурктор
Evil_man::Evil_man(const string& name) :Personage(name), type_of_weapon(type_of_weapon), basic_skills(basic_skills), crime(crime), habitat(habitat) {
	cout << "\nEvil_man\n";
}
//конструктор копирования
Evil_man::Evil_man(const Evil_man& a) : Personage(a.name), type_of_weapon(a.type_of_weapon), basic_skills(a.basic_skills), crime(a.crime), habitat(a.habitat) {
	cout << "\nEvil_man cpy\n";
}
//методы получения данных
string& Evil_man::Type_of_weapon() {
	return type_of_weapon;
}
string& Evil_man::Basic_skills() {
	return basic_skills;
}
string& Evil_man::Crime() {
	return crime;
}
string& Evil_man::Habitat() {
	return habitat;
}
Evil_man::~Evil_man() {
	cout << "\n~Evil_man\n";
}
//перегрузка опретаоров дружественой функцией для ввода и вывода
istream& operator >> (istream& in, Evil_man& a) {
	a.read(in);
	return in >> a.type_of_weapon >> a.basic_skills >> a.crime >> a.habitat;
}
ostream& operator<<(ostream& out, const Evil_man& a) {
	a.print(out);
	return out << a.type_of_weapon << " " << a.basic_skills << " " << a.crime << " " << a.habitat;
}