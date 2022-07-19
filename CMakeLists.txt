
project(c_primer_plus C)

set(CMAKE_C_STANDARD 11)

add_library(c_primer_plus library.c)

add_executable(4.1 chap4/4.1.c)
add_executable(4.2 chap4/4.2.c)
add_executable(4.3 chap4/4.3.c)
add_executable(9.1 chap9/9.1.lethead1.c)
add_executable(9.2.lethead2 chap9/9.2.lethead2.c)
add_executable(9.3.lesser.c chap9/9.3.lesser.c)
add_executable(9.6.recur chap9/9.6.recur.c)
add_executable(9.7.factor chap9/9.7.factor.c)
add_executable(9.8.binary chap9/9.8.binary.c)
add_executable(9.9.usehotel chap9/9.9.usehotel.c)
add_executable(9.10.hotel chap9/9.10.hotel.c)