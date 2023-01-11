#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Hospital.h"
#include <set>
#include <unordered_map>
int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> vec;
	vec.push_back(5);//5 
	vec.push_back(3);//5 3

	std::vector<std::string> vec2({ "Alex", "John" });
	vec2.erase(vec2.begin() + 1);//john delete
	//push_back 0(1) - ����������� ���������
	//emplace - ���������� � ��������� 0(n) n=size -�������� ���������

	//����������� ����������
	for (std::vector<std::string>::const_iterator it=vec2.begin();it!=vec2.end();it++){
		std::cout << *it << '\n';
		vec2.erase(it);//�����������
	}
	std::vector<std::string>::const_iterator it = vec2.begin();//�������� ��������� ��������� �� ������ �������
	vec2.erase(vec2.begin());//��� ������ �� ������� �������� �������������

	//map - ��������� � ����� ���������� ���� ���� �� �������� �������� ������
	std::map<int, std::string> mymap;
	std::map<int, std::vector<std::string>> bigmap;
	bigmap.insert({ 1,{"Alex","John"} });
	std::vector<std::string> someVec{ "Hanry","Alice" };
	bigmap.insert({ 2,someVec });



	mymap.insert({ 1,"tom" });
	mymap.insert(std::make_pair(2, "vec"));
	for (const auto& [key, value] : mymap) {//�������������� ����� �� ���� ��������� ����� ������
		std::cout << key<< " " << value << '\n';
	}
	Hospital hosp;
	hosp.AddPatient( "Alex");
	hosp.AddPatient( "Den");
	hosp.AddPatient( "Lex");
	hosp.ShowPatient();
	std::cout << "========\n";
	hosp.DeletePatient(2);
	std::cout<< hosp.GetPatient(1)<<'\n';
	std::cout << "========\n";	
	hosp.ShowPatient();
	//set
	std::set<int> myset;//��������� ������ ������ �����//��������� �������� 0=log2(n)
	//
	std::unordered_map<int, std::string> umap;//������������� ����(�������������);��������,�������,����� O(1) ������� ���������

	return 0;
}