public class Hauptprogramm {

public static void Main()
{
        LinkedList<int> list = new LinkedList<int>();

        try{
                list.Add(1);
                list.Add(2);
                list.Add(3);
                list.Add(4);
                list.Add(5);
        }catch(System.Exception e) {
                System.Console.Write("{0}", e.Message);
        }

        Iterator<int> it = list.Iterator();
        while(it.HasNext())
                System.Console.Write("{0}\n", it.Next());

        try{
                list.Remove(0);
                list.Remove(1);
        }catch(System.Exception e) {
                System.Console.Write("{0}", e.Message);
        }

        it = list.Iterator();
        System.Console.Write("After removal:\n");
        while(it.HasNext())
                System.Console.Write("{0}\n", it.Next());
}
}
