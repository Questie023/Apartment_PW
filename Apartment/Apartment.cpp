#include "Apartment.h"
#include <iostream>
#include <string>

Apartment::Apartment()
    : id(0), number(0), area(0.0), floor(0), roomCount(0),
    street(""), sunnySide(false), cornerApartment(false) {}

Apartment::~Apartment() {}
