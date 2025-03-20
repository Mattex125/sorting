# Makefile per compilare un file C in un eseguibile nomefile.out

CC = gcc
CFLAGS = -Wall -Wconversion -g -lm

# Regola generica: se si esegue "make nomefile" allora:
# - elimina nomefile.out (se esistente)
# - compila nomefile.c in nomefile.out
# - esegue nomefile.out
%:
	@rm -f $@.out
	$(CC) $(CFLAGS) $@.c -o $@.out
	./$@.out

# Target per pulire tutti gli eseguibili .out
clean:
	@rm -f *.out

.PHONY: clean
