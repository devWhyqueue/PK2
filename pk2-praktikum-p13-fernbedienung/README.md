# PK2 Praktikum 13 - Fernbedienung

Eine Fernbedienung für vier Geräte, die verschiedene Geräte an- und ausschalten kann. (C#)

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor,
Windows-Betriebssystem,
ggf. GNU-Compiler

### Task

1. Sie implementieren Klassen fur eine programmierbare Fernbedienung in der
Sprache C#. Die Fernbedienung hat vier On-Tasten und vier O-Tasten. Die
Tasten sind paarweise angeordnet. Die Tasten konnen paarweise frei belegt
(programmiert) werden.
Schreiben Sie eine Klasse RemoteControl fur die programmierbare Fernbedienung.
Sie mussen naturlich keine GUI fur die Fernbedienung programmieren. Wir steuern
die Fernbedienung allein uber die Methoden der Klasse RemoteControl. Auch die
angesteuerten Gerate reagieren nur mit einfachen Textausgaben.
Uber eine Methode void SetCommand(int i, Command on, Command off) kann
das i-te Tastenpaar mit Funktionen fur ein bestimmtes Gerat belegt werden. Mit
den Methoden void PressOn(int i) und void PressOff(int i) kann die i-te
On- bzw. die i-te O-Taste gedruckt werden.
Uber die Tasten sollen unterschiedliche Gerate bedient werden konnen. Die Gerate
werden uber Klassen angesteuert. Es gibt z.B. eine Klasse CdPlayer mit den Me-
thoden void Start() und void Stopp():
class CdPlayer {
public void Start(){
Console.WriteLine("CD-Player start");
}
public void Stopp(){
Console.WriteLine("CD-Player stopp");
}
}
Schreiben Sie zudem eine Klasse Garagentor mit den Methoden void Hoch() und
void Runter(). Fur die Zukunft konnen beliebig viele weitere Gerate-Klassen auf
den Markt kommen. Alle sollen dann uber die Klasse RemoteControl angesteu-
ert werden konnen, ohne dass die Klasse RemoteControl geandert werden muss,
und ohne dass Anpassungen an den Gerateklassen erforderlich sind. Dazu entkop-
peln wir die Fernbedienung uber eine abstrakte Command-Klasse von den konkreten
Geraten. Die Tasten der Fernbedienung werden dann mit konkreten Kommandos
belegt. Fur den Cd-Player mussen also zwei konkrete Kommandos implementiert
werden. Jedes Cd-Player Kommando muss den konkreten CD-Player kennen, um
dort die richtige Taste
"
drucken\ zu konnen. Diese Situation ist fur die Taste Start
des CD-Players im folgenden Klassendiagramm skizziert.
Das Klassendiagramm ist in der allgemeinen UML-Notation angegeben. Bitte ver-
wenden Sie fur die Methodennamen die empfohlene C#-Schreibweise. Die Si-
gnaturen der Methoden sind im Diagramm absichtlich unvollstandig angegeben.
Wahlen Sie fur die Implementierung geeignete Signaturen. Erstellen Sie die vier
Namensraume Fh.Pk2.Devices, Fh.Pk2.Commands, Fh.Pk2.Rc und Praktikum13.
Die Namensraume enthalten in der angegebenen Reihenfolge die konkreten Gerate,
die Kommandos, die Fernbedienung (inkl. dem abstrakten Kommando) und das
Hauptprogramm. Erstellen Sie fur jeden Namensraum eine eigene Datei.
Schreiben Sie ein Hauptprogramm. Dort belegen Sie die Tasten der Fernbedienung,
so dass Sie einen Cd-Player und ein Garagentor uber die Fernbedienung steuern
konnen. Erzeugen Sie uber die Fernbedienung die folgende Ausgabe:
CD-Player start
Garagentor hoch
CD-Player stopp
Garagentor runter
Zur weiteren Ubung konnen Sie Command als Interface implementieren. Zusatzlich
konnen Sie die Aufgabe auch mit C++ implementieren.