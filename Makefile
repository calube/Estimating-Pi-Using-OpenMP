CC=gcc
CXX=g++
RM= rm -f
TEST=test.cpp
MAIN=main
CASE1=100
CASE2=100000
CASE3=1000000000

build:
	$(CXX) $(TEST) -o $(MAIN)

n1:
	./$(MAIN) $(CASE1)

n2:
	./$(MAIN) $(CASE2)

n3:
	./$(MAIN) $(CASE3)

clean:

	$(RM) main.o