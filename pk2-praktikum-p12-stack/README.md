# PK2 Praktikum 12 - Stack

Ein Stack mit den Standardmethoden und Exception Handling.

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

In der Vorlesung wurde ein dynamischer Stack in C++ implementiert (siehe Vorlesung 9
und 10). Bei einem leeren Stack liefert die Operation pop dort den Ruckgabewert -1. Damit
kann derWert -1 nicht ordnungsgema auf dem Stack gespeichert werden. Erganzen
Sie die Implementierung daher um ein Exception-Handling. Bei einem leeren Stack soll
die Operation pop eine selbst denierte Exception vom Typ empty stack exception
werfen. Fugen Sie die eigene Exception sinnvoll in die bestehende Exception-Hierarchie
der Standard-Library ein. Fuhren Sie im Hauptprogramm die Operation pop auf einem
leeren Stack aus. Vermeiden Sie einen Programmabbruch durch eine nicht behandelte
Ausnahme.

### TO-DO

schnellerer Copy-Konstruktor
