#include <random>
#include <string>
#include <iostream>
#include "Header.hpp"


void	search(Contact phonebook[8], int contact_count)
{
	int	id;

	std::cout << "User info: " << std::endl;
	for (int i = 0; i < contact_count; i++)
		(phonebook[i]).getSummary(i + 1);
	std::cout << "Which contact do you want to see? ";
	while (!(std::cin >> id) || id < 1 || id > contact_count)
	{
		std::cout << "Wrong input, please select an existing id: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	phonebook[id - 1].info();
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

std::string	random_string(void)
{
	return ("something");
}

Contact	info()
{
	Contact		new_contact;
	std::string	tmp;

	std::cout << "Let's add some contacts" << std::endl;
	std::cout << "First name: ";
	std::cin.clear();
	getline(std::cin, tmp);
	new_contact.setFirstName(tmp);
	std::cout << "Last name: ";
	getline(std::cin, tmp);
	new_contact.setLastName(tmp);
	std::cout << "Adress: ";
	getline(std::cin, tmp);
	new_contact.setAdress(tmp);
	std::cout << "Phone: ";
	getline(std::cin, tmp);
	new_contact.setPhoneNumber(tmp);
	std::cout << "DONE ";
	return (new_contact);
}
Contact auto_fill()
{
	Contact	new_contact;

	std::cout << "Autofilling..." << std::endl;
	new_contact.setPhoneNumber(random_string());
	new_contact.setAdress(random_string());
	new_contact.setLastName(random_string());
	new_contact.setFirstName(random_string());
	return (new_contact);
}

std::string	welcome_prompt()
{
	std::string	input;

	std::cout << "Welcome to the 80s Phonebook" << std::endl
		<< "Use SEARCH to browse your contacts, ADD to add one, "
		<< "and EXIT to... exit" << std::endl;
	getline(std::cin, input);
	return (input);
}



int main(void)
{
	std::string	input;
	Contact	lists[8];
	int		contact_count;

	input = welcome_prompt();
	contact_count = 0;
	while (input != "EXIT")
	{
		if ((input == "ADD" || input == "a" || input == "aa")
			&& contact_count >= 8)
			std::cout << "You can't add any more contacts to Phonebook" << std::endl;
		else if (input == "ADD" || input == "a")
			lists[contact_count++] = info();
		else if (input == "aa")
			lists[contact_count++] = auto_fill();
		else if ((input == "SEARCH" || input == "s") && contact_count > 0)
			search(lists, contact_count);
		else if (input == "SEARCH" || input == "s")
			std::cout << "Phonebook is empty." << std::endl;
		else
			std::cout << "Enter something...\n";
		getline(std::cin, input);
	}
	std::cout << "Thank you for using 80s phonebook" << std::endl;
}


