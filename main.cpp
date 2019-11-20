
#include "Hero.hpp"
#include "Evil_man.hpp"
#include "Monster.hpp"
#include "Keeper.hpp"

#include <fstream>

using namespace std;
char z;
//подменю
template<typename T>
void submenu(const char *fname){ //передача имени файла
   int size;
   Keeper<T> kp;
				/*ЗАГРУЗКА ИЗ ФАЙЛА*/
   ifstream in(fname);//открываем файл для записи
   T tmp;//временный объект
   if(in){//пока файл не пуст
		while(in >> tmp){//
			kp.Add(tmp);//добавление из файла
		}
   }
   in.close();//закрытие входного файла
   
					/*МЕНЮ*/
   while(true){
	   system("cls");
	  cout << "1)Add\n2)Change\n3)Delete\n4)Remove\n5)Exit\n";
	
	  while(!(cin >> size));
	  switch(size){
		case 1:
			try{
				text();
				cin >> tmp;//ввод временного объекта
				kp.Add(tmp);//добавление объекта в контейнер объектов
				
			}
			catch (const Exception& e) {
				cout << e.what();
			}
			break;
		case 2:
			try{
				text();
				cout << "Enter the number:";
				while(!(cin >> size));//ввод индекса элемента контейнера
				cin >> kp[size];;//ввод данных в лемент по индексу
			}
			catch (const Exception& e) {
				cout << e.what();
			}
			break;
		case 3:
			try {
				cout << "Enter the number : ";
				while (!(cin >> size));//ввод индекса элемента контейнера
				kp.Remove(size);//удаление элемента контейнера
			}
			catch (const Exception& e) {
				cout << e.what();
			}
			break;
		case 4:
			for(int i = 0; i < kp.Size(); ++i){
				cout << '\n'<<i<<")" << kp[i];
			}
			break;
		case 5:
			system("cls");
			MenuM();
			return;
		}
	  /*ЗАПИСЬ В ФАЙЛ*/
	   ofstream out(fname);
	   out << kp.Size();
	   for(int i = 0; i < kp.Size(); ++i){
			out << '\n' << kp[i];
	   }
	   
	   out.close();
	  cout << '\n';
	 system("pause");
   }
}
void text() {
	//скиллы и имя с фамилией вводятся через нижнее подчеркитвание
	if (z == 1) {
		cout << "Enter name, weapon type, basic skill\n";
	}
	if (z == 2) {
		cout << "Enter the name of the weapon type, what crime committed, where dwells, the main skill\n";
	}
	if (z == 3) {
		cout << "Enter the name, description appearance\n";
	}
}

//главное меню
void MenuM(){
	cout << "1)Hero\n2)Evil_man\n3)Monster\n4)Exit\n";
	int a;
	while(!(cin >> a));
	switch(a){
	case 1:
		z = 1;
		submenu<Hero>("Hero");
		break;
	case 2:
		submenu<Evil_man>("Evil_man");
		z = 2;
		break;
	case 3:
		submenu<Monster>("Monster");
		z = 3;
		break;
	case 4:
		return;
	}
}

int main(){
  MenuM(); 
}
