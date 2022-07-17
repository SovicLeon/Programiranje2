//
// Created by Leon on 1. 04. 2022.
//

#ifndef NALOGA0501_FILM_H
#define NALOGA0501_FILM_H


#include "Artwork.h"

enum class Genre{
    Fantasy, SciFi, Animation, Mystery, Adventure
};

class Film : public Artwork {
private:
    unsigned int length;
    unsigned int rating;
    Genre genre;
public:
    Film(std::string title, Artist* artist, std::string description, int price, int year, unsigned int length, unsigned int rating, Genre genre);
    std::string genreToString() const;
    std::string toString() const override;
    void print() const override;
};


#endif //NALOGA0501_FILM_H
