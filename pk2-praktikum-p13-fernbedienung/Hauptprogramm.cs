namespace Praktikum13{
    using Fh.Pk2.Devices;
    using Fh.Pk2.Rc;
    using Fh.Pk2.Commands;

    public class Hauptprogramm{
        private static CdPlayer player;
        private static Garagentor tor;

        public static void Main(){
            player = new CdPlayer();
            tor = new Garagentor();

            RemoteControl rc = new RemoteControl();
            try{
            rc.SetCommand(0, new CdStart(player), new CdStopp(player));
            rc.SetCommand(1, new GaragentorHoch(tor), new GaragentorRunter(tor));

            rc.PressOn(0);
            rc.PressOn(1);
            rc.PressOff(0);
            rc.PressOff(1);
            }
            catch(WrongDeviceNumberException e){
                System.Console.Write(e.Message);
            }
        }
    }
}