CC = g++
CFLAGS = -I. -Wall
TARGET = output
OBJS = main.o board.o queen.o

all: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	del /F /Q $(OBJS) $(TARGET) 2>nul || rm -f $(OBJS) $(TARGET)
