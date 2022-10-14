#include <iostream>
#include <string>


class Contact 
{
public:
	std::string trim_len(std::string info);
	void getSummary(int id);
	void info(void);

	std::string getFirstName(void) const;
	bool setFirstName(std::string first_name);

	std::string getLastName(void) const;
	bool setLastName(std::string last_name);

	std::string getAdress(void) const;
	bool setAdress(std::string adress);

	std::string getPhoneNumber(void) const;
	bool setPhoneNumber(std::string phone);



private:
	std::string first_name;
	std::string last_name;
	std::string adress;
	std::string phone;
};