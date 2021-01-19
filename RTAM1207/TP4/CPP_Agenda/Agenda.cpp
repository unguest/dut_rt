//
//  Agenda.cpp
//  Agenda
//
//  Created by Arthur Pons on 08/01/2021.
//

#include "Agenda.hpp"
#include "Person.hpp"
#include <stdio.h>
#include <iostream>
#include <ostream>
#include <fstream>

Agenda::Agenda(std::string fileLocation)  : fileLocation(fileLocation) {
    extractPersons();
}

void Agenda::extractPersons() {
    std::ifstream file(fileLocation);
    std::string line, tmp, name, surname, phone, email;
    
    while (getline (file, line)) {
        std::vector<std::string> fields;
        
        std::cout << line << std::endl;
        
        // Do it with sscanf
        
        name = fields[0];
        surname = fields[1];
        phone = fields[2];
        email = fields[3];
        
        for(std::string str : fields) {
            std::cout << str << std::endl;
        }
        
        this->persons.push_back(Person(name, surname, phone, email));
        fields.clear();
    }
    
    file.close();
}

void Agenda::updateFile() {
    std::ofstream file(this->fileLocation, std::ios_base::out); // Overwrite
    
    for(Person person : this->persons) {
        file << person.getName() + "," + person.getSurname() + "," + person.getPhone() + "," + person.getEmail() + '\n';
    }
    
}

std::vector<Person> Agenda::search(const std::string filter) const {
    std::vector<Person> personsFound;
    
    for(Person person : this->persons) {
        if (person.getName().find(filter) != std::string::npos || person.getSurname().find(filter) != std::string::npos || person.getPhone().find(filter) != std::string::npos || person.getEmail().find(filter) != std::string::npos) // If the filter is found as a substring of every person's field
                personsFound.push_back(person); // Add this person to the results
    }
    
    return personsFound;
}

void Agenda::addPerson(std::string name, std::string surname, std::string phone, std::string email) {
    this->persons.push_back(Person(name, surname, phone, email));
    this->updateFile();
}

std::vector<Person> Agenda::getPersons() {
    return this->persons;
}
