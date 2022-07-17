//
// Created by Leon on 19. 05. 2022.
//

#ifndef NALOGA1001_PRINTIFPAINTING_H
#define NALOGA1001_PRINTIFPAINTING_H


#include "Artwork.h"
#include "Painting.h"

class PrintIfPainting {
public:
    void operator()(std::shared_ptr<Artwork> e);
};


#endif //NALOGA1001_PRINTIFPAINTING_H
