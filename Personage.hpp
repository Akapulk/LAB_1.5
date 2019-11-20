#pragma once
#include "Exception.hpp"
#include <string>
#include <iostream>
using namespace std;
class Personage{
protected:
   string name;//название инструмента
   void read(istream& in); //метод считывания данных из файла
   void print(ostream& out) const; //метод записи в файл
   //То есть объявив функцию - член print(), как константную, мы пояснили компилятору, что она не меняет состояние объекта и предназначена только для чтения/записи/получения
public:
   Personage(const string& name = "");
   Personage(const Personage& a);
   string& Name();//методы получения данных
   virtual ~Personage();
};
