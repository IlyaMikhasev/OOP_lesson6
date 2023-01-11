#pragma once
#include <iostream>
#include <map>
class Hospital
{
public:
	Hospital();
	void AddPatient(const std::string& name);
	void DeletePatient(int id);
	const std::string GetPatient(int id)const;
	void ShowPatient();
private:
	std::map<int, std::string> _patient;
	int _id;
};

