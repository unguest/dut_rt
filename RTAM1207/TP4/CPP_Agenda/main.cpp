//
//  main.cpp
//  Agenda
//
//  Created by Arthur Pons on 08/01/2021.
//

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Agenda.hpp"
#include "Person.hpp"

void clearScreen();
template <typename T> void safeInput(T *buf);

int main(int argc, const char * argv[]) {
    
    Agenda agenda("agenda.csv");
    
    int choice = 0;
    
    while(choice != 4) {
        std::cout << "##### Bienvenue dans votre agenda #####" << std::endl;
        std::cout << "#####           Ver 0.1           #####" << std::endl;
        std::cout << "1 - Afficher tous mes contacts" << std::endl;
        std::cout << "2 - Rechercher un contact" << std::endl;
        std::cout << "3 - Ajouter un contact" << std::endl;
        std::cout << "4 - Quitter" << std::endl;
        
        std::cout << "> ";
        safeInput(&choice);
        
        switch (choice) {
            case 1:
                std::cout << "##### Liste de vos contacts #####" << std::endl;
                for(Person person : agenda.getPersons())
                    std::cout <<  person.getName() + " " + person.getSurname() + " " + person.getPhone() + " " + person.getEmail() << std::endl;
                std::cout << std::endl << std::endl;
                break;
            
            case 2:
            {
                std::cout << "##### Rechercher un contact #####" << std::endl;
                
                std::string filter;
                std::cout << "Recherche par prénom, nom, téléphone ou par mail : ";
                safeInput(&filter);
                std::vector<Person> foundPersons = agenda.search(filter);
                
                std::cout << std::endl;
                
                for(Person person : foundPersons)
                    std::cout << "[*] " <<  person.getName() + " " + person.getSurname() + " " + person.getPhone() + " " + person.getEmail() << std::endl;
                
                std::cout << std::endl << std::endl;
                break;
            }
                
            case 3:
            {
                std::cout << "##### Ajouter un contact #####" << std::endl;
                
                std::string name, surname, phone, email;
                std::cout << "Prénom : ";
                std::cin >> name;
                std::cout << "Nom : ";
                std::cin >> surname;
                std::cout << "Téléphone : ";
                std::cin >> phone;
                std::cout << "Email : ";
                std::cin >> email;
                
                agenda.addPerson(name, surname, phone, email);
                
                std::wcout << "Contact créé !";
                
                std::cout << std::endl << std::endl;
            }
                
            default:
                break;
        }
        
    }
    
    return 0;
}

void clearScreen() {
    std::cout << std::string(100, '\n');
}

template <typename T> void safeInput(T *buf) {

    if(!(std::cin >> *buf)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max());
        safeInput(buf);
    }
}
