public class Fuhrpark {
private LinkedList<Auto> flotte;
public event AutoAnkunftEventHandler AutoEvent;

public Fuhrpark(){
        flotte = new LinkedList<Auto>();
}

public void Aufnehmen(Auto a){
        flotte.Add(a);
        AutoEvent(this, a);
}

public void Inventur(){
        Iterator<Auto> it = flotte.Iterator();
        while(it.HasNext())
                it.Next().DruckeDaten();
}

public double BerechneFlottenalter(){
        Iterator<Auto> it = flotte.Iterator();
        double avgAlter = 0;
        int anzAutos = 0;
        while(it.HasNext()) {
                avgAlter += it.Next().Alter();
                anzAutos++;
        }
        return avgAlter / anzAutos;
}

public delegate void AutoAnkunftEventHandler (object sender, Auto args);
}
