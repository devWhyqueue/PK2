namespace Fh.Pk2.Commands{
    using Fh.Pk2.Rc;
    using Fh.Pk2.Devices;

    public class GaragentorRunter : Command{
        private Garagentor tor;

        public GaragentorRunter(Garagentor tor){
            this.tor = tor;
        }

        public override void Execute(){
            tor.Runter();
        }
    }
}