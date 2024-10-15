#pragma once
#ifndef APARTMENT_H
#define APARTMENT_H

#include <string>
#include <iostream>

class Apartment {
private:
    int id;
    int number;
    double area;
    int floor;
    int roomCount;
    std::string street;
    bool sunnySide;
    bool cornerApartment;

public:
    Apartment();
    Apartment(int id, int number, double area, int floor, int roomCount,
        const std::string& street, bool sunnySide, bool cornerApartment);
    Apartment(const Apartment& other);
    ~Apartment();

    int getId() const;
    void setId(int id);

    int getNumber() const;
    void setNumber(int number);

    double getArea() const;
    void setArea(double area);

    int getFloor() const;
    void setFloor(int floor);

    int getRoomCount() const;
    void setRoomCount(int roomCount);

    std::string getStreet() const;
    void setStreet(const std::string& street);

    bool isSunnySide() const;
    void setSunnySide(bool sunnySide);

    bool isCornerApartment() const;
    void setCornerApartment(bool cornerApartment);

};

#endif
