#include "Monster.hpp"

//констурктор
Monster::Monster(const string& name) :Personage(name), appearance(appearance) {
	cout << "\nMonster\n";
}
//конструктор копирования
Monster::Monster(const Monster& a) : Personage(a.name), appearance(a.appearance) {
	cout << "\nMonster cpy\n";
}
//метод получения данных
string& Monster::Appearance() {
	return appearance;
}
Monster::~Monster() {
	cout << "\n~Monster\n";
}
//перегрузка опретаоров дружественой функцией для ввода и вывода
istream& operator >> (istream& in, Monster& a) {
	a.read(in);
	return in >> a.appearance;
}
ostream& operator<<(ostream& out, const Monster& a) {
	a.print(out);
	return out << a.appearance;
}