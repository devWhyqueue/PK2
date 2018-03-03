# PK2 Praktikum 8 - LinkedList-Template

Eine LinkedList-Templateklasse in C++ angewendet auf die Medienverwaltung aus Praktikum 8.

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

1. Modizieren Sie die Klasse LinkedList (siehe Blatt 7 und 9), so dass es sich
um eine Template-Klasse handelt. Die Liste kann dann alle Objekte eines vorgegebenen
Typs aufnehmen.1 Zur Vereinfachung soll die LinkedList in der neuen
Ausbaustufe die folgenden Elementfunktionen besitzen (der Destruktor und der
Kopier-Konstruktor soll ebenfalls vorhanden sein).
/* Erzeugt eine leere Liste. */
LinkedList();
/* Liefert den Zugriff auf einen Iterator fuer die Liste. */
Iterator<T>* iterator();
/* Fuegt ein Element vom Typ T (in konstanter Zeit) an der */
/* letzten Listenposition hinzu. */
/* Liefert den Wert 1, wenn das Element eingefuegt werden */
/* konnte. Ansonsten wird der Wert 0 geliefert. */
int append(T inhalt);
/* Fuegt ein Element vom Typ T an der Position p ein. */
/* Das erste Element der Liste befindet sich an der */
/* Position 0. */
/* Das Element, das sich aktuell an der Position p befindet,*/
/* wird nach rechts geschoben.
/* Falls sich weniger als p Elemente in der Liste befinden, */
/* wird der Text am Ende angefuegt. */
int insert(T inhalt, int p);
/* Loescht das Listenelement an der Position p. Das erste */
/* Element befindet sich an der Position 0. */
/* Falls das p-te Element nicht existiert, wird das letzte */
/* Element geloescht. Die Anzahl der geloeschten Elemente */
/* wird als Funktionswert geliefert. */
int remove(int p);
/* Liefert das Element vom Typ T an der p-ten Listenpos. */
/* Das erste Listenelement befindet sich an der Position 0. */
/* Falls das p-te Element nicht existiert, wird nullptr */
/* geliefert. */
T get(int p);
/* Besucht alle Elemente der Liste und ruft fuer jedes */
/* Element die Funktion work auf. */
1Sie mussen die Liste nur fur Zeigertypen implementieren.
void visit_all(void (*work)(T t));
2. Schreiben Sie dann ein Hauptprogramm. Speichern Sie dort Audio- und Bild-
Objekte (siehe Blatt 8) in einer LinkedList.2 Geben Sie dann mit visit all
die Daten aller gespeicherten Medien aus. Loschen Sie anschlieend mit visit all
alle in der Liste verzeichneten Medien.3
2Um die Vorteile des Polymorphismus nutzen zu konnen, mussen Sie mit Zeigertypen arbeiten.
3Die dann
"
leeren\ Listenelemente mussen Sie ggf. separat uber die remove-Funktion loschen.
