//
// Created by Arthur Pons on 08/02/2021.
//

#ifndef AGENDA_PERSON_H
#define AGENDA_PERSON_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Person {
    private:
        std::string m_name;
        std::string m_surname;
        std::string m_email;
        std::string m_phone;

    public:
        Person();
        explicit Person(std::string name, std::string surname, std::string mail, std::string phone);
        ~Person();

        std::string getName();

        std::string getSurname();

        std::string getEmail();

        std::string getPhone();

        static std::vector<Person> extractPersons(const std::string& filepath) {

            std::vector<Person> extractedPersons;
            Person p;

            std::ifstream file(filepath);

            std::string line, word;
            std::string words[4];

            while(getline(file, line)) {

                std::string delimiter = ",";
                int i = 0;
                size_t pos;
                std::string token;
                while ((pos = line.find(delimiter)) != std::string::npos) {
                    token = line.substr(0, pos);
                    if(i < 4) {
                        words[i] = token;
                        i++;
                    }
                    line.erase(0, pos + delimiter.length());
                }

                extractedPersons.emplace_back(std::string(words[0]), std::string(words[1]), std::string(words[2]), std::string(words[3])); // Copy temporary person in returned person's array

            } // For each contact

            file.close();
            return extractedPersons;
        }
};
#endif //AGENDA_PERSON_H