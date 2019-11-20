#include "Monster.hpp"

//�����������
Monster::Monster(const string& name) :Personage(name), appearance(appearance) {
	cout << "\nMonster\n";
}
//����������� �����������
Monster::Monster(const Monster& a) : Personage(a.name), appearance(a.appearance) {
	cout << "\nMonster cpy\n";
}
//����� ��������� ������
string& Monster::Appearance() {
	return appearance;
}
Monster::~Monster() {
	cout << "\n~Monster\n";
}
//���������� ���������� ������������ �������� ��� ����� � ������
istream& operator >> (istream& in, Monster& a) {
	a.read(in);
	return in >> a.appearance;
}
ostream& operator<<(ostream& out, const Monster& a) {
	a.print(out);
	return out << a.appearance;
}