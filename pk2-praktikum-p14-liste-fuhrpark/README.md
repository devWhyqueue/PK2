# PK2 Praktikum 14 - Liste und Fuhrpark

Eine klassische LinkedList-Implementierung und eine Fahrzeugverwaltung. (C#)

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

Um die Unterschiede der Sprachen C++ und C# besser verstehen zu k¨ onnen, werden
Sie in diesem Praktikum bereits bekannte Aufgabenstellungen mit der Sprache C#
l¨ osen.
1. Implementieren Sie die Klasse LinkedList mit C#. Dabei soll es sich jetzt aber
nur um eine einfach verkettete Liste handeln. Es gibt nur eine Methode Add, um ein
Element in die Liste aufzunehmen und eine Methode Remove, um das i-te Element
zu l¨ oschen. Beachten Sie dabei die folgenden Randbedingungen:
• Die Klasse ist generisch.
• Schreiben Sie eine Schnittstelle Iterator mit den Methoden HashNext() und
Next(). Die Klasse ListIterator implementiert dann die Schnittstelle.
• Schreiben Sie die Klasse ListIterator als innere Klasse von LinkedList,
d.h. die Klasse ist innerhalb der anderen Klasse definiert. Auch die Klasse fur ¨
das Listenelement soll eine innere Klasse sein.
• Verwenden Sie an geeigneten Stellen Eigenschaften.
2. Implementieren Sie die aus der Vorlesung bekannte Klasse Auto in C#. Implementieren Sie das Feld hersteller als Eigenschaft und das Feld baujahr als automatische Eigenschaft (automatic property).
3. Schreiben Sie eine Klasse Fuhrpark, mit der der Fuhrpark eines Unternehmens
verwaltet werden kann. Die Klasse bietet die folgenden Elementfunktionen:
• void Aufnehmen(Auto a): Ein Auto wird in den Fuhrpark aufgenommen.
Eine Prufung auf Dubletten muss nicht vorgenommen werden. ¨
• void Inventur(): Gibt die Daten (Hersteller und Baujahr) aller Fahrzeuge
auf der Konsole aus.
• double BerechneFlottenalter(): Berechnet das durchschnittliche Alter der
Fahrzeuge im Fuhrpark.
Fur die interne Verwaltung der Fahrzeuge verwenden Sie die Klasse ¨ LinkedList.
Falls Sie die Klasse LinkedList nicht erstellt haben, dann verwenden Sie alternativ
ein Array. Testen Sie die Klasse, indem Sie Fahrzeuge in den Fuhrpark aufnehmen.
Danach zeigen Sie die Inventurliste an und geben das durchschnittliche Alter aus.
4. Erg¨ anzen Sie die Klasse Fuhrpark um ein Event. Interessierte Klassen k¨ onnen uber ¨
das Event eine Methode registrieren. Diese Methode wird aufgerufen, sobald ein
neues Auto in den Fuhrpark aufgenommen wird. Schreiben Sie eine Klasse Info,
welche die Daten jedes Autos ausgibt, welches neu in den Fuhrpark aufgenommen
wird.
Verwenden Sie fur die L ¨ ¨ osung das Event-Pattern, d.h. implementieren Sie insbesondere eine spezielle EventArgs-Klasse.
Schreiben Sie ein Hautprogramm, um Ihre Implementierung auszuprobieren.
