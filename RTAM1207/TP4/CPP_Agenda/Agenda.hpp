//
//  Agenda.hpp
//  Agenda
//
//  Created by Arthur Pons on 08/01/2021.
//

#ifndef Agenda_hpp
#define Agenda_hpp

#include <string>
#include <vector>
#include "Person.hpp"

class Agenda {
public:
    Agenda(std::string fileLocation);
    std::vector<Person> getPersons();
 
    void extractPersons();
    void updateFile();
    
    std::vector<Person> search(std::string filter);

    void addPerson(std::string name, std::string surname, std::string phone, std::string email);

private:
    std::string  fileLocation;
    std::vector<Person> persons;
};

#endif /* Agenda_hpp */
