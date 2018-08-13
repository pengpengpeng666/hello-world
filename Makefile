CC := gcc
CFLAGS := 
OBJS := $(patsubst %.c,%.o,$(wildcard *.c))
TARGET := hello

hello:hello.c
	$(CC)  -o $@ $^

clean: 
	rm *.o $(TARGET)

test:
	echo "Warning: Pending to add tests." 
