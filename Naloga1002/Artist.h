//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0401_ARTIST_H
#define NALOGA0401_ARTIST_H

#include "Date.h"

class Artist {
private:
    std::string name, biography;
    Date dateOfBirth;
public:
    Artist(std::string name, std::string biography, Date dateOfBirth);
    std::string toString() const;
    Date getDateOfBirth () const;
};


#endif //NALOGA0401_ARTIST_H