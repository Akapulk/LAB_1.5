#pragma once
#include "Personage.hpp"

class Monster : public Personage {
protected:
	string appearance;//Внешность
public:
	//конструктор
	Monster(const string& name = "");
	//конструктор копирования
	Monster(const Monster& a);
	string& Appearance();//метод получения данных
	~Monster();
	//перегрузка опретаоров дружественой функцией для ввода и вывода
	friend istream& operator >> (istream& in, Monster& a);
	friend ostream& operator<<(ostream& out, const Monster& a);
};
