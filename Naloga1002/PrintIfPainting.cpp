//
// Created by Leon on 19. 05. 2022.
//

#include "PrintIfPainting.h"

void PrintIfPainting::operator()(std::shared_ptr<Artwork> e) {
    if (std::dynamic_pointer_cast<Painting>(e) != nullptr) {
        e->print();
        std::cout << std::endl;
    }
}
