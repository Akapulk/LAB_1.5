#pragma once
#include "Personage.hpp"

class Hero : public Personage {
protected:
	string type_of_weapon;//Тип оружия
	string basic_skills;//Основные навыки
public:
	//конструктор
	Hero(const string& name = "");
	//конструктор копирования
	Hero(const Hero& a);
	string& Type_of_weapon();//методы получения данных
	string& Basic_skills();
	~Hero();
	//перегрузка опретаоров дружественой функцией для ввода и вывода
	friend istream& operator >> (istream& in, Hero& a);
	friend ostream& operator<<(ostream& out, const Hero& a);
};
