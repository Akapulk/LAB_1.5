#pragma once
#include "Personage.hpp"

class Hero : public Personage {
protected:
	string type_of_weapon;//��� ������
	string basic_skills;//�������� ������
public:
	//�����������
	Hero(const string& name = "");
	//����������� �����������
	Hero(const Hero& a);
	string& Type_of_weapon();//������ ��������� ������
	string& Basic_skills();
	~Hero();
	//���������� ���������� ������������ �������� ��� ����� � ������
	friend istream& operator >> (istream& in, Hero& a);
	friend ostream& operator<<(ostream& out, const Hero& a);
};
