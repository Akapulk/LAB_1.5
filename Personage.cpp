#include "Personage.hpp"
//protected:
//���������� �� ����� ������
   void Personage::read(istream& in){
		in >> name;;
   }
//������ ������ � ����
   void Personage::print(ostream& out) const{
	   out << name << '\n';
   }
//public:
   Personage::Personage(const string& name):name(name){
	   cout << "\nPersonage build\n";
   }
   Personage::Personage(const Personage& a):name(a.name) {
	   cout << "\nPersonage cpy\n";
   }
   string& Personage::Name(){
	   return name;
   }
   Personage::~Personage(){
	   cout << "\n~Personage\n";
}