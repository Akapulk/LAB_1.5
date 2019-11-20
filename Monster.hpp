#pragma once
#include "Personage.hpp"

class Monster : public Personage {
protected:
	string appearance;//���������
public:
	//�����������
	Monster(const string& name = "");
	//����������� �����������
	Monster(const Monster& a);
	string& Appearance();//����� ��������� ������
	~Monster();
	//���������� ���������� ������������ �������� ��� ����� � ������
	friend istream& operator >> (istream& in, Monster& a);
	friend ostream& operator<<(ostream& out, const Monster& a);
};
