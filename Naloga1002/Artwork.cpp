//
// Created by Leon on 5. 03. 2022.
//
#include "Artwork.h"

Artwork::Artwork(std::string title, std::shared_ptr<Artist> artist, std::string description, int price, int year) : title(title), artist(artist), description(description), price(price), year(year) {
}

std::string Artwork::getTitle() {
    return title;
}

std::string Artwork::getDescription() {
    return description;
}

int Artwork::getPrice() const {
    return price;
}

int Artwork::getYear() const {
    return year;
}

std::string Artwork::toString() const {
    std::string priceString = std::to_string(price);
    std::string yearString = std::to_string(year);
    return "Title(artwork): " + title + ", artist: " + artist->toString() + ", description: " + description + ", price: " + priceString + ", year: " + yearString;
}

void Artwork::print() const {
    std::cout << toString();
}

std::shared_ptr<Artist> Artwork::getArtist() const {
    return artist;
}
