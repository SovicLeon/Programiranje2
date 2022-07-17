//
// Created by Leon on 19. 05. 2022.
//

#include "PrintIfPainting.h"

void PrintIfPainting::operator()(Artwork *e) {
    if (dynamic_cast<Painting*>(e) != nullptr) {
        e->print();
        std::cout << std::endl;
    }
}
