# Compilatore e flag
CC = gcc
CFLAGS = -Wall -Wconversion -g -lm

# Nome dell'eseguibile
TARGET = main

# Trova tutti i file .c nella directory corrente
SRCS = $(wildcard *.c)

# Crea una lista dei file oggetto corrispondenti
OBJS = $(SRCS:.c=.o)

# Regola principale
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Regola per compilare i file .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Pulizia dei file oggetto e dell'eseguibile
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
