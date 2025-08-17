<!-- PROJECT LOGO -->

<br />
<div align="center">
  <img width="200" alt="Image" src="https://github.com/user-attachments/assets/9c663bd9-e74e-492e-b43d-d64c232a5e30" />
  </a>

  <p align="center">
    Eine eigene C-Standardbibliothek für den 42-Cursus
    <br />
  </p>
</div>

<!-- TABLE OF CONTENTS -->

## Inhalt

* [Über das Projekt](#über-das-projekt)
* [Verwendete Funktionen](#verwendete-funktionen)
* [Projektstruktur](#projektstruktur)
* [Build](#build)
* [Verwendung](#verwendung)
* [Beispiel](#beispiel)

* [Kontakt](#kontakt)

## Über das Projekt

Mit diesem Projekt habe ich meine eigene C-Bibliothek geschrieben. Sie enthält die wichtigsten Funktionen für Zeichen, Strings, Speicher und einfache Listen. Ich habe sie als Werkzeugkasten und Grundlage für viele weitere Projekte im 42-Cursus verwendet.

## Verwendete Funktionen

### Zeichenfunktionen

* `ft_isalpha` – prüft, ob Buchstabe
* `ft_isdigit` – prüft, ob Zahl
* `ft_isalnum` – prüft, ob Buchstabe oder Zahl
* `ft_isascii` – prüft, ob ASCII-Zeichen
* `ft_isprint` – prüft, ob druckbares Zeichen

### Stringfunktionen

* `ft_strlen` – Länge eines Strings
* `ft_strdup` – dupliziert String
* `ft_strchr` – sucht Zeichen von vorne
* `ft_strrchr` – sucht Zeichen von hinten
* `ft_strncmp` – vergleicht zwei Strings (n Zeichen)
* `ft_strnstr` – sucht Teilstring in String
* `ft_strlcpy` – kopiert String (mit Begrenzung)
* `ft_strlcat` – hängt String an (mit Begrenzung)
* `ft_strjoin` – verbindet zwei Strings
* `ft_strtrim` – entfernt führende/folgende Zeichen
* `ft_split` – teilt String nach Trenner
* `ft_substr` – gibt Teilstring zurück
* `ft_strmapi` – erstellt neuen String mit Funktion auf jedem Zeichen
* `ft_striteri` – führt Funktion auf jedem Zeichen aus

### Speicherfunktionen

* `ft_memset` – füllt Speicherblock mit Wert
* `ft_bzero` – setzt Speicherblock auf Null
* `ft_memcpy` – kopiert Speicherblock
* `ft_memmove` – wie `ft_memcpy`, aber sicher bei überlappenden Bereichen
* `ft_memchr` – sucht Byte in Speicherblock
* `ft_memcmp` – vergleicht zwei Speicherblöcke
* `ft_calloc` – reserviert Speicher und setzt auf Null

### Umwandlungsfunktionen

* `ft_atoi` – wandelt String in Zahl um
* `ft_toupper` – wandelt zu Großbuchstabe
* `ft_tolower` – wandelt zu Kleinbuchstabe

### Ausgabe auf File Descriptors

* `ft_putchar_fd` – schreibt Zeichen in ein gewähltes fd
* `ft_putstr_fd` – schreibt String in ein gewähltes fd
* `ft_putendl_fd` – schreibt String mit Newline in ein gewähltes fd
* `ft_putnbr_fd` – schreibt Zahl in ein gewähltes fd

### Bonus (Listen)

* `ft_lstnew` – erstellt ein neues Listenelement
* `ft_lstadd_front` – fügt Element vorne an
* `ft_lstadd_back` – fügt Element hinten an
* `ft_lstlast` – gibt letztes Element zurück
* `ft_lstsize` – zählt Elemente in einer Liste
* `ft_lstdelone` – löscht ein Element
* `ft_lstclear` – löscht ganze Liste

## Projektstruktur

```
libft/
├─ *.c                # Implementierungen der Funktionen
├─ libft.h            # Header-Datei
└─ Makefile           # Build-Regeln
```

## Build

```sh
make        # baut libft.a
make clean  # entfernt Objektdateien
make fclean # entfernt auch libft.a
make re     # baut neu
```

## Verwendung

1. Bibliothek bauen:

   ```sh
   make
   ```
2. Beim Kompilieren linken:

   ```sh
   cc main.c -L. -lft -I . -o myprog
   ```
3. Im Code:

   ```c
   #include "libft.h"
   ```

## Beispiel

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s = "  Hello 42  ";
    char *temp = ft_strtrim(s, " ");
    printf("%s\\n", temp);   // Ausgabe: "Hello 42"
    free(temp);
    return 0;
}
```
