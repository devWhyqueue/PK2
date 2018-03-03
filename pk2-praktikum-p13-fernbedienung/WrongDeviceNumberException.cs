public class WrongDeviceNumberException : System.Exception
{
    public WrongDeviceNumberException() : base("Die eingegebene Gerätenummer befindet sich außerhalb des Gültigkeitsbereiches!") { }
}