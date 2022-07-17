//
// Created by Leon on 5. 03. 2022.
//
#include "Artwork.h"

Artwork::Artwork(std::string title, std::string artist, std::string description, int price, int year) : title(title), artist(artist), description(description), price(price), year(year) {
}

std::string Artwork::getTitle() {
    return title;
}

std::string Artwork::getArtist() {
    return artist;
}

std::string Artwork::getDescription() {
    return description;
}

int Artwork::getPrice() {
    return price;
}

int Artwork::getYear() {
    return year;
}

void Artwork::setDescription(std::string description) {
    this->description = description;
}

void Artwork::setPrice(int price) {
    this->price = price;
}

std::string Artwork::toString() {
    std::string priceString = std::to_string(price);
    std::string yearString = std::to_string(year);
    return title + " " + artist + " " + description + " " + priceString + " " + yearString;
}

void Artwork::print() {
    std::cout << title << " " << artist << " " << description << " " << price << " " << year;
}

void Artwork::setTitle(std::string title) {
    this->title = title;
}

void Artwork::setYear(int year) {
    this->year = year;
}
