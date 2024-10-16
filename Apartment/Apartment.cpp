#include "Apartment.h"

#include <iostream>
#include <string>

Apartment::Apartment()
    : id(0), number(0), area(0.0), floor(0), roomCount(0),
    street(""), sunnySide(false), cornerApartment(false) {}

Apartment::Apartment(int id, int number, double area, int floor, int roomCount,
    const std::string& street, bool sunnySide, bool cornerApartment)
    : id(id), number(number), area(area), floor(floor), roomCount(roomCount),
    street(street), sunnySide(sunnySide), cornerApartment(cornerApartment) {}

Apartment::Apartment(const Apartment& other)
    : id(other.id), number(other.number), area(other.area), floor(other.floor),
    roomCount(other.roomCount), street(other.street), sunnySide(other.sunnySide),
    cornerApartment(other.cornerApartment) {}

Apartment::~Apartment() {}

int Apartment::getId() const {
    return id;
}

void Apartment::setId(int id) {
    this->id = id;
}

int Apartment::getNumber() const {
    return number;
}

void Apartment::setNumber(int number) {
    this->number = number;
}

double Apartment::getArea() const {
    return area;
}

void Apartment::setArea(double area) {
    this->area = area;
}

int Apartment::getFloor() const {
    return floor;
}

void Apartment::setFloor(int floor) {
    this->floor = floor;
}

int Apartment::getRoomCount() const {
    return roomCount;
}

void Apartment::setRoomCount(int roomCount) {
    this->roomCount = roomCount;
}

std::string Apartment::getStreet() const {
    return street;
}

void Apartment::setStreet(const std::string& street) {
    this->street = street;
}

bool Apartment::isSunnySide() const {
    return sunnySide;
}

void Apartment::setSunnySide(bool sunnySide) {
    this->sunnySide = sunnySide;
}

bool Apartment::isCornerApartment() const {
    return cornerApartment;
}

void Apartment::setCornerApartment(bool cornerApartment) {
    this->cornerApartment = cornerApartment;
}

std::istream& operator>>(std::istream& in, Apartment& apartment) {
    std::cout << "Введіть id: ";
    in >> apartment.id;
    std::cout << "Введіть номер квартири: ";
    in >> apartment.number;
    std::cout << "Введіть площу: ";
    in >> apartment.area;
    std::cout << "Введіть поверх: ";
    in >> apartment.floor;
    std::cout << "Введіть кількість кімнат: ";
    in >> apartment.roomCount;
    std::cout << "Введіть вулицю: ";
    in.ignore();
    std::getline(in, apartment.street);
    std::cout << "Чи є сонячна сторона (1 - так, 0 - ні): ";
    in >> apartment.sunnySide;
    std::cout << "Чи є кутова квартира (1 - так, 0 - ні): ";
    in >> apartment.cornerApartment;

    return in;
}

std::ostream& operator<<(std::ostream& out, const Apartment& apartment) {
    out << "ID квартири: " << apartment.id << "\n";
    out << "Номер квартири: " << apartment.number << "\n";
    out << "Площа: " << apartment.area << " кв.м\n";
    out << "Поверх: " << apartment.floor << "\n";
    out << "Кількість кімнат: " << apartment.roomCount << "\n";
    out << "Вулиця: " << apartment.street << "\n";
    out << "Сонячна сторона: " << (apartment.sunnySide ? "Так" : "Ні") << "\n";
    out << "Кутова квартира: " << (apartment.cornerApartment ? "Так" : "Ні") << "\n";
    return out;
}

bool Apartment::operator==(const Apartment& other) const {
    return (id == other.id && number == other.number && area == other.area &&
        floor == other.floor && roomCount == other.roomCount && street == other.street &&
        sunnySide == other.sunnySide && cornerApartment == other.cornerApartment);
}
int main() {
    Apartment object1, object2;

    std::cin >> object1 >> object2;

    std::cout << "Перша квартира:\n" << object1 << std::endl;
    std::cout << "Друга квартира:\n" << object2 << std::endl;

    if (object1 == object2) {//overload operator ==
        std::cout << "Квартири однакові!" << std::endl;
    }
    else {
        std::cout << "Квартири різні!" << std::endl;
    }

    return 0;
}
