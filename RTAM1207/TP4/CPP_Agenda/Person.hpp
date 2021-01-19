//
//  Person.hpp
//  Agenda
//
//  Created by Arthur Pons on 08/01/2021.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <iostream>

class Person {
public:
    Person(std::string name, std::string surname, std::string phone, std::string email): name(name), surname(surname), phone(phone), email(email) {}
    
    std::string getName();
    std::string getSurname();
    std::string getEmail();
    std::string getPhone();

private:
    std::string name;
    std::string surname;
    std::string phone;
    std::string email;
};

#endif /* Person_hpp */
