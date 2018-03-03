# PK2 Praktikum 8 - Medienverwaltung

Beispiel zur Vererbung in C++.

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

1. Sie werden beauftragt, die folgenden zentralen Klassen einer Medienverwaltung in
C++ zu implementieren.1 Es geht darum, die folgende Vererbungshierarchie zu
realisieren.2
Bitte beachten Sie bei der Implementierung die folgenden Randbedingungen:
 Jede Klasse erhalt genau einen geeigneten Konstruktor.
 In der Altersberechnung konnen Sie zur Vereinfachung das Jahr 2017 als aktuelles
Jahr verwenden (d.h. Sie mussen das aktuelle Datum nicht ermitteln).
 Sobald ein beliebiges Medium neu angelegt wird, erfolgt eine automatische
Vergabe der eindeutigen Id. Das erste Objekt bekommt die Id mit dem Wert
0. Fur jedes neue Medienobjekt wird die Id automatisch um den Wert 1
hochgezahlt.
 Erganzen Sie die Klasse um weitere Elementfunktionen, die Sie evtl. benotigen,
um auf den Zustand eines Objekts zuzugreifen.
 Nur getter-Elementfunktionen durfen als inline deklariert und implementiert
werden.
 Sorgen Sie fur eine geeignete Implementierung der Elementfunktion
druckeDaten in den abgeleiteten Klassen (siehe unten).
 Sie durfen die Klasse string aus der C++-Standardbibliothek verwenden
(#include <string>). Bitte beachten Sie dabei den Namensraum std. Ein
Wertobjekt text kann z.B. mit std::string text("Hallo"); deniert werden.
2. Schreiben Sie ein Hauptprogramm und fuhren Sie die folgenden Implementierungen
durch.
 Denieren Sie ein Array mit zwei Zeigern auf Medien.
 Erzeugen Sie jeweils ein Audio- und ein Bild-Objekt und speichern Sie die
Zeiger im eben erzeugten Feld.
 Rufen Sie fur beide Objekte die Elementfunktion druckeDaten uber das Array
auf.
Die Ausgabe von druckeDaten sollte die folgenden Informationen enthalten:
ID = 0 "It Means Nothing" von Stereophonics aus 2007 Spieldauer: 229 sek.
ID = 1 "Gebaeude FB Informatik" aufgenommen im Jahr 2014 in Dortmund
