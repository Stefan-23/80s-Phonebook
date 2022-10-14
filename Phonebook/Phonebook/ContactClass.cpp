#include "Header.hpp"
#include <iostream>
#include <iomanip>

std::string	Contact::trim_len(std::string info)
{
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void Contact::getSummary(int id)
{
	std::cout << std::setfill(' ') << std::setw(10) << id;
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(first_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(last_name);
	std::cout << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(adress);
	std::cout << " |";
	std::cout << std::setfill(' ') << std::setw(10) << trim_len(phone);
	std::cout << " |";
	std::cout << std::endl;
}

void Contact::info()
{
	std::cout << "First name: " << this-> first_name << std::endl;
	std::cout << "Last name: " << this-> last_name << std::endl;
	std::cout << "Adress: " << this-> adress << std::endl;
	std::cout << "Phone: " << this-> phone << std::endl;
}

std::string Contact::getFirstName(void) const
{
	return (this->first_name);
}

bool		Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
	return (true);
}

std::string	Contact::getLastName(void) const
{
	return (this->last_name);
}

bool		Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
	return (true);
}

std::string Contact::getAdress(void) const
{
	return (this->adress);
}

bool		Contact::setAdress(std::string adress)
{
	this->adress = adress;
	return (true);
}
std::string Contact::getPhoneNumber(void) const
{
	return (this->phone);
}

bool		Contact::setPhoneNumber(std::string phone)
{
	this->phone = phone;
	return (true);
}