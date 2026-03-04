
all: palindrome selectionSort vertical

palindrome: palindrome.cpp pfunctions.cpp
	g++ -std=c++17 -Wall -o palindrome palindrome.cpp pfunctions.cpp

selectionSort: selectionSort.cpp sfunctions.cpp
	g++ -std=c++17 -Wall -o selectionSort selectionSort.cpp sfunctions.cpp

vertical: vertical.cpp
	g++ -std=c++17 -Wall -o vertical vertical.cpp

clean:
	rm -f palindrome selectionSort vertical