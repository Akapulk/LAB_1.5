#pragma once
#include "Personage.hpp"

class Evil_man : public Personage {
protected:
	string type_of_weapon;//��� ������
	string basic_skills;//�������� ������
	string crime;//������������
	string habitat;//����� ��������
public:
	//�����������
	Evil_man(const string& name = "");
	//����������� �����������
	Evil_man(const Evil_man& a);
	string& Type_of_weapon();//������ ��������� ������
	string& Basic_skills();
	string& Crime();
	string& Habitat();
	~Evil_man();
	//���������� ���������� ������������ �������� ��� ����� � ������
	friend istream& operator >> (istream& in, Evil_man& a);
	friend ostream& operator<<(ostream& out, const Evil_man& a);
};
