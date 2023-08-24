CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c89

SRCS = $(wildcard *.c)

TARGET = monty

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)
