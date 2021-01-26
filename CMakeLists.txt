
# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

# project name
project( Bitmap )

# flags

# files

# include
include_directories( ./include/Bitmap ./src ./libs/Logger/include ./libs/Randomize/include )

# target
add_executable( main ./src/main.cpp ./src/AdditionTransformations.cpp ./src/Averaging.cpp ./src/BitmapExt.cpp ./src/Dilatation.cpp ./src/Erosion.cpp ./src/Inversion.cpp ./include/Bitmap/AdditionTransformations.h ./include/Bitmap/Averaging.h ./include/Bitmap/Bitmap.h ./include/Bitmap/BitmapExt.h ./include/Bitmap/Dilatation.h ./include/Bitmap/Erosion.h ./include/Bitmap/Inversion.h ./include/Bitmap/Pixel.h ./include/Bitmap/Transformation.h)

# external libs
add_subdirectory( ./libs/Logger )
target_link_libraries( main logger )

# add_subdirectory( ./libs/Randomize )
# target_link_libraries( main randomize )

add_library(randomize STATIC IMPORTED)
set_property(TARGET randomize PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/libs/Randomize/librandomize.a)
target_link_libraries( main randomize )
