CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: palindrome selectionSort vertical

palindrome: palindrome.cpp pfunctions.cpp
	$(CXX) $(CXXFLAGS) -o palindrome palindrome.cpp pfunctions.cpp

selectionSort: selectionSort.cpp sfunctions.cpp
	$(CXX) $(CXXFLAGS) -o selectionSort selectionSort.cpp sfunctions.cpp

vertical: vertical.cpp
	$(CXX) $(CXXFLAGS) -o vertical vertical.cpp

clean:
	rm -f palindrome selectionSort vertical