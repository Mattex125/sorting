# Compilatore da utilizzare
CC = gcc

# Opzioni di compilazione:
# -Wall: abilita tutti gli avvisi
# -Wconversion: avvisa sulle conversioni implicite potenzialmente pericolose
# -g: include informazioni di debug
# -lm: collega la libreria matematica (non necessaria in questo progetto, ma utile per esempi futuri)
CFLAGS = -Wall -Wconversion -g -lm

# Nome dell'eseguibile finale
TARGET = main.out

# Trova automaticamente TUTTI i file .c nella cartella corrente
SOURCES = $(wildcard *.c)

# Regola principale: costruisce l'eseguibile finale
$(TARGET): $(SOURCES)
	# Compila TUTTI i sorgenti in un unico passaggio
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

# Regola per pulire la cartella
clean:
	# Rimuove l'eseguibile e eventuali file oggetto residui
	rm -f $(TARGET) *.o