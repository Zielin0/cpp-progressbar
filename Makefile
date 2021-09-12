CC = g++
CFLAGS = -Wall -g

progressbar:
	$(CC) $(CFLAGS) -o progressbar src/main.cpp src/Progress.cpp

clean:
	$(RM) progressbar

