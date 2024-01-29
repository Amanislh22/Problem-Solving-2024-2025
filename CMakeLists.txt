cmake_minimum_required(VERSION 3.27)
project(Problem_Solving_2024_2025)

set(CMAKE_CXX_STANDARD 14)

#****************************** france IOI level3 *********************************************************
include_directories("Problem Solving Betounsi in C++/France_IOI/Level3")

add_executable(FrancIOI_problem1
        "Problem Solving Betounsi in C++/France_IOI/Level3/NbAmour_my_solution.cpp")
add_executable(FrancIOI_problem1_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/NbAmour_correction.cpp")

add_executable(FrancIOI_problem2
        "Problem Solving Betounsi in C++/France_IOI/Level3/TitrePalindr_My_solution.cpp")
add_executable(FrancIOI_problem2_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/TitrePalindr_correction.cpp")

add_executable(FrancIOI_problem3
        "Problem Solving Betounsi in C++/France_IOI/Level3/FreqDapp_My_solution.cpp")
add_executable(FrancIOI_problem3_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/FreqDapp_correction.cpp")

add_executable(FrancIOI_problem4
        "Problem Solving Betounsi in C++/France_IOI/Level3/Inversion_dic_Mysolution.cpp")
add_executable(FrancIOI_problem4_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/Inversion_dic_Correction.cpp")

add_executable(FrancIOI_problem5
        "Problem Solving Betounsi in C++/France_IOI/Level3/acronyme_Mysolution.cpp")
add_executable(FrancIOI_problem5_corr
        "Problem Solving Betounsi in C++/France_IOI/Level3/acronyme_Correction.cpp")


add_executable(FrancIOI_astuces
        "Problem Solving Betounsi in C++/France_IOI/Level3/Astuces_FL3.cpp")


#CodeForces
add_executable(code_forces_div3_p1
        "Problem Solving Betounsi in C++/CodeForces/Div3/prob1.cpp")