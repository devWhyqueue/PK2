public class Info {
public Info(Fuhrpark f){
        f.AutoEvent += ausgabe;
}

public void ausgabe(object sender, Auto args){
        System.Console.Write("Das folgende Auto wurde hinzugefügt: ");
        args.DruckeDaten();
}
}
