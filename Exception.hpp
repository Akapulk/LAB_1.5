#pragma once
#include <string>
using namespace std;
class Exception{
private:
	string mes;
public:
	explicit Exception(const string &mes = "");
	const string& what() const;
};
