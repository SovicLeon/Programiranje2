//
// Created by Leon on 5. 03. 2022.
//

#ifndef NALOGA0201_ARTWORK_H
#define NALOGA0201_ARTWORK_H

#include <iostream>
#include <vector>

class Artwork {
private:
    std::string title, artist, description;
    int price, year;
public:
    Artwork(std::string title, std::string artist, std::string description, int price, int year);
    std::string getTitle();
    std::string getArtist();
    std::string getDescription();
    int getPrice();
    int getYear();
    void setTitle(std::string title);
    void setDescription(std::string description);
    void setPrice(int price);
    void setYear(int year);
    std::string toString();
    void print();
};


#endif //NALOGA0201_ARTWORK_H