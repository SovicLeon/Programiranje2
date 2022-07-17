//
// Created by Leon on 5. 03. 2022.
//

#ifndef NALOGA0201_ARTWORK_H
#define NALOGA0201_ARTWORK_H

#include <iostream>
#include "Artist.h"

class Artwork {
private:
    std::string title, description;
    Artist* artist;
    int price, year;
public:
    Artwork(std::string title, Artist* artist, std::string description, int price, int year);
    std::string getTitle();
    std::string getDescription();
    int getPrice() const;
    int getYear() const;
    std::string toString() const;
    void print() const;
    Artist* getArtist() const;
};


#endif //NALOGA0201_ARTWORK_H