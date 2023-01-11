#include "Hospital.h"

void Hospital::AddPatient(const std::string& name){
	_id++;
	_patient[_id] = name;// может заменить значение у ключа лучше использовать _patient.insert({_id,name})
}

Hospital::Hospital():_id(0){}

void Hospital::DeletePatient(int id){
	_patient.erase(id);
}

const std::string Hospital::GetPatient(int id) const{
	std::map<int, std::string>::const_iterator it = _patient.find(id);
	return it->second;
}

void Hospital::ShowPatient(){
	for (const auto& [key, value] : _patient) {
		std::cout << "ID:" << key << "\tName:" << value << '\n';
	}
}
