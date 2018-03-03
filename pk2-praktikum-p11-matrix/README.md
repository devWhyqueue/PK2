# PK2 Praktikum 11 - Matrizenmultiplikation

Operatorüberladung zur Nutzung bei einer Multiplikation von Matrizen.

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

Wir werden nun eine sehr lehrreiche C++-Aufgabe bearbeiten. Zur Losung der Aufgabe
mussen Sie einen Konstruktor, einen Destruktor, einen Kopier-Konstruktor, konstante
Elementfunktionen, Zeiger, Referenzen, Templates und uberladene Operatoren einset-
zen.
Schreiben Sie eine Klasse Matrix fur die Erzeugung von (nn)-Matrizen. Schreiben Sie
einen Operator  fur die Multiplikation von zwei (n  n)-Matrizen. Uberladen Sie den
Ausgabeoperator << fur die formatierte Ausgabe einer Matrix. Uber den Konstruktor
der Klasse Matrix kann die Dimension n ubergeben werden. Fur die dynamische Ver-
waltung eines (n  n)-Arrays verwenden Sie einen Zeiger **m, der auf ein Array von
n Zeigern verweist. Jeder dieser Zeiger verweist auf eine Zeile der Matrix. Eine Zeile
besteht wieder aus einem Array der Lange n. Alle n+1 Arrays fur eine Matrix werden
dynamisch mit new erzeugt. Sie konnen dann komfortabel mit der Indexschreibweise
(m[i][j]) auf die einzelnen Eintrage des 2-dimensionalen Arrays zugreifen. Fur das
Testprogramm
Matrix<int> m(2);
m.set(0,0,1);
m.set(0,1,2);
m.set(1,0,3);
m.set(1,1,4);
std::cout << m << "*" << std::endl << m << "=" << std::endl << m*m;
soll die Ausgabe wie folgt aussehen:
1 2
3 4
*
1 2
3 4
=
7 10
15 22
Naturlich soll das Programm auch fur andere Dimensionen und Matrizen korrekt funk-
tionieren.
