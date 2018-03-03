# PK2 Praktikum 4 - Dicitionary

Ein typisches Wörterbuch mit den Funktionen insert(), delete() und member().

## Getting Started

Einfach auschecken und die ausführbare Datei in einer Konsole ausführen.

### Prerequisites

Texteditor
Windows-Betriebssystem
ggf. GNU-Compiler

### Task

1. Implementieren  Sie ein Dictionary  A unter  Verwendung von Hashing. Ein Dictio- nary ist eine Menge A, die nur die folgenden Operationen  unterstu¨tzt:
• insert(a): A ∪ {a}
• delete(a): A \ {a}
• member(a): true genau dann,  wenn a ∈ A

Das Dictionary soll nur ganze Zahlen (int) verwalten. Verwenden Sie fu¨r die Imple- mentierung  das geschlossene Hashing (open adressing)  auf der Basis eines Arrays. Das geschlossene Hashing muss mit m Behaltern  auskommen.  Fu¨r eine Eingabe a berechnen  Sie mit der Hashfunktion  h(a)  = a mod m eine Behalternummer (den
Arrayindex).  Fu¨r die Operation  insert speichern  Sie dann  die Zahl an  der  be- rechneten  Arrayposition.  Sie mu¨ssen  keine Dubletten verhindern  (d.h.  eine Zahl
darf  mehrfach  eingetragen  werden).  Falls  eine Kollision auftritt (die  berechnete 
Arrayposition  ist  bereits  belegt),  wird  unter  den
 
u¨brigen  Behaltern  nach  einem 
freien Platz  gesucht.  Es gibt  verschiedene  Verfahren,  die sich in der Reihenfolge der besuchten  Behalter  unterscheiden. Sie verwenden bitte  das lineare Sondieren. Beim linearen  Sondieren  (linear  probing) werden die u¨brigen  Behalter  der Reihe nach auf einen freien Platz  untersucht. Die Betrachtung eines Behalters  wird auch
als   Probe“  bezeichnet.  Bei der Suche nach einem Schlu¨ssel mu¨ssen wir dann  die
”
folgenden Falle unterscheiden:

1. Falls sich der Schlu¨ssel im aufgesuchten  Behalter  befindet,  ist die Suche er- folgreich.

2. Falls der aufgesuchte Behalter  leer ist, befindet sich der Schlu¨ssel nicht in der
Hash-Tabelle.

3. Falls sich ein anderer  Schlu¨ssel in dem Behalter  befindet, muss weitergesucht werden. Dabei muss am Ende der Tabelle  die Suche am Anfang der Tabelle fortgefu¨hrt werden.

Das bedeutet  aber auch, dass wir bei der Delete-Operation  besondere Vorkehrun- gen treffen mu¨ssen. Wir konnen nicht einfach ein Element loschen, da Elemente, die spater  eingefu¨gt wurden,  auf der Suche nach einem freien Platz  das zu loschende Element evtl. u¨bersprungen haben.  Da die Suche an einer freien Position  stoppt, konnten wir diese Elemente dann spater  nicht mehr finden. Bitte kennzeichnen Sie die Behalter daher mit einem Flag. Dieses Flag soll den Status  eines Behalters (z.B. frei oder geloscht) reprasentieren. Die Suche u¨berspringt dann einfach Behalter mit einem geloschten Inhalt.  Diese Behalter konnen spater natu¨rlich wieder gefu¨llt wer- den. Fu¨r die Darstellung  des Status  verwenden Sie bitte  eine Aufzahlung. Fu¨r die Arrayelemente definieren Sie bitte eine geeignete Struktur. Verwenden Sie zudem an
geeigneten Stellen die Schlu¨sselworter typedef und static. Wenn nicht genu¨gend
Speicherplatz  zur Verfu¨gung steht,  dann  liefert die Funktion  insert den Wert  0, 

ansonsten  den Wert  1. Die Funktion  delete gibt  den Wert  1 zuru¨ck,  wenn der
Schlu¨ssel a geloscht werden konnte.  Ansonsten wird der Wert  0 geliefert.

Fu¨r ein Array der Lange 2 sollte die folgende Sequenz z.B. fu¨nfmal eine 1 ausgeben:

printf("%d\n", insert(1));
printf("%d\n", insert(3));
printf("%d\n", delete(3));
printf("%d\n", insert(5));
printf("%d\n", member(5));
