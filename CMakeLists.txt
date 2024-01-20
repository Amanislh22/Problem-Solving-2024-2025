cmake_minimum_required(VERSION 3.27)
project(Problem_Solving_2024_2025)

set(CMAKE_CXX_STANDARD 14)

include_directories("Problem Solving Betounsi in C++/France_IOI/Level3")

add_executable(FrancIOI_problem1
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem1_my_solution.cpp")
add_executable(FrancIOI_problem1_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem1_correction.cpp")


add_executable(FrancIOI_problem2
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem2_My_solution.cpp")
add_executable(FrancIOI_problem2_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem2_correction.cpp")


add_executable(FrancIOI_problem3
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem3.cpp")
add_executable(FrancIOI_problem4
        "Problem Solving Betounsi in C++/France_IOI/Level3/problem4.cpp")

add_executable(code_forces_div3_p1
        "Problem Solving Betounsi in C++/CodeForces/Div3/prob1.cpp")