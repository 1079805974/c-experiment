g++ -c lab2_4.cpp lab2_3.cpp lab2_2.cpp lab2_1.cpp
g++ lab2_1.cpp -D LAB2_1 -o lab2_1
g++ lab2_1.cpp lab2_2.cpp -D LAB2_2 -o lab2_2
g++ lab2_1.cpp lab2_2.cpp lab2_3.cpp -D LAB2_3 -o lab2_3
g++ lab2_1.cpp lab2_2.cpp lab2_3.cpp lab2_4.cpp -D LAB2_4 -o lab2_4