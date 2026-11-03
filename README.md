# Apartment

A small C++ coursework exercise: an `Apartment` class with full encapsulation,
written as a Visual Studio console project.

## What it shows
- Encapsulated fields with getters and setters (id, number, area, floor,
  room count, street, sunny side, corner apartment)
- Default, parameterised and copy constructors, plus a destructor
- Overloaded `operator>>` and `operator<<` for console input and output
- Overloaded `operator==` comparing two apartments field by field

`main()` reads two apartments from stdin, prints them back and reports whether
they are equal.

## Build
Open `Apartment.sln` in Visual Studio and build the `Apartment` project, or
compile directly:

```
g++ -std=c++17 Apartment/Apartment.cpp -o apartment
```

Source files are UTF-8; the console output is in Ukrainian. On MSVC, build with
`/utf-8` so the strings render correctly.
