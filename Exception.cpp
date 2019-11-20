#include "Exception.hpp"

Exception::Exception(const string &mes):mes(mes){
}
const string& Exception::what() const {
	return mes;
}
