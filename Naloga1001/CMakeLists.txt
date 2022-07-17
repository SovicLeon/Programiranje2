cmake_minimum_required(VERSION 3.20)
project(Naloga1001)

set(CMAKE_CXX_STANDARD 14)

add_executable(Naloga1001 naloga1001.cpp Artist.cpp Artist.h Artwork.cpp Artwork.h Date.cpp Date.h Film.cpp Film.h Gallery.cpp Gallery.h Painting.cpp Painting.h PrintIfPainting.cpp PrintIfPainting.h)
