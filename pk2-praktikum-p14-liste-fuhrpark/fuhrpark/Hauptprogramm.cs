public class Hauptprogramm {

public static void Main()
{
        Fuhrpark flotte = new Fuhrpark();
        Info inf = new Info(flotte);

        flotte.Aufnehmen(new Auto(1950, "Mazda"));
        flotte.Aufnehmen(new Auto(1960, "Mercedes"));
        flotte.Aufnehmen(new Auto(1970, "Opel"));
        flotte.Aufnehmen(new Auto(1980, "VW"));
        flotte.Aufnehmen(new Auto(1990, "Audi"));

        System.Console.Write("Fuhrpark:\n");
        flotte.Inventur();
        System.Console.Write("Durchschnittliches Flottenalter: {0} Jahre\n", flotte.BerechneFlottenalter());
}
}
