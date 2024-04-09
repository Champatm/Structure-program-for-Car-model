CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRCS = main.c function.c car_model.c
OBJS = $(SRCS:.c=.o)
EXEC = car_models

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)