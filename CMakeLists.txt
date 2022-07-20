
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

add_executable(usehotel chap9/hotel.h chap9/usehotel.c chap9/hotel.c)

add_executable(9.12.loccheck chap9/9.12.loccheck.c)
add_executable(9.13.swap1 chap9/9.13.swap1.c)
add_executable(9.13.swap3 chap9/9.13.swap3.c)
add_executable(10.1.day_mon1 chap10/10.1.day_mon1.c)
add_executable(10.5.designate chap10/10.5.designate.c)
add_executable(10.6.bounds chap10/10.6.bounds.c)
add_executable(10.8.pnt_add chap10/10.8.pnt_add.c)
add_executable(10.9.day_mon3 chap10/10.9.day_mon3.c)