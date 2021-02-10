#include <iostream>
#include <limits>
#include "Person.h"

void menu();
void safeIntInput(int *buf);
template <typename T> void print(T toPrint);
template <typename T> void println(T toPrint);

int main() {
    std::cout << "########## Welcome to your agenda ! ##########" << std::endl;
    menu();
    return 0;
}

void menu() {
    int choice = 0;

    while (choice != 4) {
        println("1 - Afficher tous mes contacts");
        println("2 - Rechercher un contact");
        println("3 - Ajouter un contact");
        println("4 - Quitter");

        print("Agenda > ");
        safeIntInput(&choice);

        switch (choice) {
            case 1:

                println("");

                for(Person person : Person::extractPersons("agenda.csv")) {
                    std::cout << person.getName() << " " << person.getSurname() << " " <<  person.getEmail() << " " << person.getPhone() << std::endl;
                }
                println("");

                break;

            case 2: {
                std::string filter;

                print("Filtre : ");
                std::cin >> filter;

                println("");

                for(Person person : Person::extractPersons("agenda.csv")) {
                    if(person.getName().find(filter) != std::string::npos || person.getSurname().find(filter) != std::string::npos ||
                       person.getEmail().find(filter) != std::string::npos || person.getPhone().find(filter) != std::string::npos) {
                        std::cout << person.getName() << " " << person.getSurname() << " " <<  person.getEmail() << " " << person.getPhone() << std::endl;
                    } // if contact fits the filter
                } // for

                println("");

            } // look for certain contacts

                 break;

            case 3: {
                std::string nom,prenom,email,phone;

                print("Nom : ");
                std::cin >> nom;

                print("Prenom : ");
                std::cin >> prenom;

                print("Email : ");
                std::cin >> email;

                print("Phone : ");
                std::cin >> phone;

                std::ofstream file("agenda.csv", std::ios_base::app);
                file << prenom << "," << nom << "," << email << "," << phone << ",\n";
            }

             default:
             case 4:
                 break;
        } // switch

    } // while

} // menu()

void safeIntInput(int *buf) {
    if( !(std::cin >>  *buf)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max());
        std::cerr << "Error while getting int input. Value set to 0." << std::endl;
        *buf = 0;
    } // If cin had a problem
}

template <typename T> void print(T toPrint) { std::cout << toPrint; }

template <typename T> void println(T toPrint) { std::cout << toPrint << std::endl; }