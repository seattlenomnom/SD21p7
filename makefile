# makefile for sd21p7
#
#
sd21p7: sd21p7.cpp
	g++ -Wall -g sd21p7.cpp -o ./Build/DEBUG/sd21p7

.Phony: clean
clean:
	rm ./Build/DEBUG/sd21p7
