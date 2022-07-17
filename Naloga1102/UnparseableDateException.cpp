//
// Created by Leon on 26. 05. 2022.
//

#include "UnparseableDateException.h"

UnparseableDateException::UnparseableDateException(std::string wrongDate) {
    message = "Unparseable date: \"" + wrongDate + "\"";
}

const char *UnparseableDateException::what() const noexcept {
    const char * c = message.c_str();
    return c;
}
