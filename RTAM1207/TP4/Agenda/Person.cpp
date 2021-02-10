//
// Created by Arthur Pons on 08/02/2021.
//

#include "Person.h"
#include <string>

Person::Person() = default;

Person::Person(std::string name, std::string surname, std::string email, std::string phone):
    m_name(std::move(name)), m_surname(std::move(surname)), m_email(std::move(email)), m_phone(std::move(phone)) {}

std::string Person::getName() {
    return this->m_name;
}

std::string Person::getSurname() {
    return this->m_surname;
}

std::string Person::getEmail() {
    return this->m_email;
}

std::string Person::getPhone() {
    return this->m_phone;
}

Person::~Person() = default;