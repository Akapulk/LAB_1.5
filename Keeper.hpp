#pragma once
#include "Personage.hpp"

//массив с динамическим добавлением и удалением элементов
template<typename T>
class Keeper{
private:
	T *data;
	unsigned _size;
public:
	Keeper();
	~Keeper();
	void Add(const T & sign);//добавление в конец массива
	T & operator[](unsigned index);//получение элемента по индексу
	unsigned Size();//размер
	void Remove(unsigned index);//удаление
	void Clear();//очищаение массива
};

 template<typename T>
Keeper<T>::Keeper():data(nullptr), _size(0){
	cout << "\nConstructor Keeper";
}
 template<typename T>
Keeper<T>::~Keeper(){
	delete[] data;
	cout << "\nDestructor Keeper";
}

template<typename T>
void Keeper<T>::Add(const T & sign) {//добавление в конец массива
	T *temp;//буфер
	try {//обрабатываем исключение
		temp = new T[_size + 1];//создание буфера на размер +1
	}
	catch (...) {
		throw Exception("Memory alloStringed_instrumention error");
	}
	//копируем данные контейнера в буфер
	for (unsigned i = 0; i < _size; ++i) {
		temp[i] = data[i];
	}
	//добавляем новый элемент в буфер
	temp[_size] = sign;
	//очищаем контейнер
	delete[] data;
	//новый контейнер готов
	data = temp;
	//увеличиваем его размерность
	++_size;
}

template<typename T>
T & Keeper<T>::operator[](unsigned index) {//получение элемента по индексу
	if (index >= _size) {
		throw Exception("Index is outside the bounds of the array");
	}
	return data[index];//передача элемента по значению (копии)
}

template<typename T>
void Keeper<T>::Remove(unsigned index) {//удаление элемента
	if (index >= _size) {
		throw Exception("Index is outside the bounds of the array");
	}
	T *temp;//буфер
	try {//обрабатываем исключение
		temp = new T[_size + 1];
	}
	catch (...) {
		throw Exception("Memory alloStringed_instrumention error");
	}
	//копируем данные контейнера в буфер, пропуская не нужный
	for (unsigned i = 0; i < _size; ++i) {
		if (i != index) {
			temp[i] = data[i];
		}
	}
	//очищаем контейнер
	delete[] data;
	//новый контейнер готов
	data = temp;
	//уменьшаем его размерность
	--_size;
}
template<typename T>
unsigned Keeper<T>::Size() { return _size; }

template<typename T>
void Keeper<T>::Clear() {
	//обнуляем размерность
	_size = 0;
	//очищаем контейнер
	delete[] data;
	data = nullptr;
}
