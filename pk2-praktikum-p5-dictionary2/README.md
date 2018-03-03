# PK2 Praktikum 5 - Dicitionary2

Ein typisches Wörterbuch mit den Funktionen insert(), delete() und member() und Sondierung mithilfe linearer Listen.

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

Implementieren Sie wieder ein Dictionary A unter Verwendung von Hashing (siehe
Praktikum 4). Verwenden Sie fur die Implementierung nun aber das Hashing mit verketteten
Listen (resolution by chaining). Dazu denieren Sie ein Array aus m Listenkopfen
(diese sollten vom Typ der Listenelemente sein). Fur eine Eingabe a berechnen Sie dann
mit der Hashfunktion h(a) = a mod m eine Behalternummer (den Arrayindex). Fur
die Operation insert nehmen Sie dann die Zahl in die lineare Liste der entsprechenden
Arrayposition auf. Sie mussen keine Dubletten verhindern (d.h. eine Zahl darf mehrfach
eingetragen werden). Wenn nicht genugend Speicherplatz zur Verfugung steht, dann
liefert die Funktion insert den Wert 0, ansonsten den Wert 1. Die Funktion insert
soll in konstanter Laufzeit arbeiten. Fur die Operation member durchsuchen Sie die
Liste an der Arrayposition h(a). Geben Sie nur dann den Wert 1 zuruck, wenn sich a
in der Liste bendet. Die Funktion delete liefert den Wert 1, falls der Schlussel (das
Listenelement) geloscht werden konnte. Ansonsten wird der Wert 0 geliefert.
Als Test lassen Sie die folgende Sequenz ablaufen (SIZE entspricht der Anzahl der
Arrayelemente).
int i;
for(i = 1; i <= 2 * SIZE; i++){
printf("%d", insert(i));
}
for(i = 1; i <= SIZE; i++){
printf("%d", member(i));
}
for(i = SIZE+1; i <= 2*SIZE; i++){
printf("%d", delete(i));
}
for(i = 1; i <= 2*SIZE; i++){
printf("%d", member(i));
}
printf("\n");
Es muss zunachst eine Folge von 5 * SIZE Einsen ausgegeben werden. Direkt danach
erfogt die Ausgabe von SIZE Nullen.
Schreiben Sie dann ein weiteres Hauptprogramm. Nehmen Sie zunachst alle Zahlen in
das Dictionary auf, die uber die Kommandozeile ubergeben werden. Lesen Sie danach
Zahlen uber die Tastatur ein. Fur jede eingegebene Zahl wird eine Meldung ausgeben,
ob sich die Zahl im Dictionary bendet. Nach Eingabe der Zahl -1 wird das Programm
beendet.
