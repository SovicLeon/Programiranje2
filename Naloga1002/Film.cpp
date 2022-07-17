//
// Created by Leon on 1. 04. 2022.
//

#include "Film.h"

Film::Film(std::string title, std::shared_ptr<Artist>artist, std::string description, int price, int year, unsigned int length,
           unsigned int rating, Genre genre) : Artwork(title, artist, description, price, year), length(length), rating(rating), genre(genre) {
}

std::string Film::genreToString() const {
    switch (genre) {
        case Genre::Fantasy:
            return "Fantasy";
        case Genre::SciFi:
            return "SciFi";
        case Genre::Animation:
            return "Animation";
        case Genre::Mystery:
            return "Mystery";
        case Genre::Adventure:
            return "Adventure";
        default: return "unknown";
    }
}

std::string Film::toString() const {
    std::string priceString = std::to_string(price);
    std::string yearString = std::to_string(year);
    std::string lengthString = std::to_string(length);
    std::string ratingString = std::to_string(rating);
    std::string genreString = genreToString();
    return "Title(film): " + title + ", artist: " + artist->toString() + ", description: " + description + ", price: " + priceString + ", year: " + yearString + ", length: " + lengthString + ", rating:  " + ratingString + ", genre: " + genreString;
}

void Film::print() const {
    std::cout << toString();
}


