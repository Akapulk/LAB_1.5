#pragma once
#include "Personage.hpp"

class Evil_man : public Personage {
protected:
	string type_of_weapon;//Тип оружия
	string basic_skills;//Основные навыки
	string crime;//Преступление
	string habitat;//Место обитания
public:
	//конструктор
	Evil_man(const string& name = "");
	//конструктор копирования
	Evil_man(const Evil_man& a);
	string& Type_of_weapon();//методы получения данных
	string& Basic_skills();
	string& Crime();
	string& Habitat();
	~Evil_man();
	//перегрузка опретаоров дружественой функцией для ввода и вывода
	friend istream& operator >> (istream& in, Evil_man& a);
	friend ostream& operator<<(ostream& out, const Evil_man& a);
};
