public class Auto {
private string hersteller;
public string Hersteller {
        get{return hersteller;} set{hersteller = value;}
}
public int Baujahr {
        get; set;
}

public Auto(int baujahr, string hersteller){
        Baujahr = baujahr;
        Hersteller = hersteller;
}

public int Alter(){
        return 2018 - Baujahr;
}

public void DruckeDaten(){
        System.Console.Write("Hersteller: {0}, Baujahr: {1}\n", Hersteller, Baujahr);
}
}
