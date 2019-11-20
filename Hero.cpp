#include "Hero.hpp"

//констурктор
Hero::Hero(const string& name) :Personage(name), type_of_weapon(type_of_weapon), basic_skills(basic_skills) {
	cout << "\nHero\n";
}
//конструктор копирования
Hero::Hero(const Hero& a) : Personage(a.name), type_of_weapon(a.type_of_weapon), basic_skills(a.basic_skills) {
	cout << "\nHero cpy\n";
}
//методы получения данных
string& Hero::Type_of_weapon() {
	return type_of_weapon;
}
string& Hero::Basic_skills() {
	return basic_skills;
}
Hero::~Hero() {
	cout << "\n~Hero\n";
}
//перегрузка опретаоров дружественой функцией для ввода и вывода
istream& operator >> (istream& in, Hero& a) {
	a.read(in);
	return in >> a.type_of_weapon >> a.basic_skills;
}
ostream& operator<<(ostream& out, const Hero& a) {
	a.print(out);
	return out << a.type_of_weapon << " " << a.basic_skills;
}