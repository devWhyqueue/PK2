namespace Fh.Pk2.Commands{
    using Fh.Pk2.Rc;
    using Fh.Pk2.Devices;
    
    public class GaragentorHoch : Command{
        private Garagentor tor;

        public GaragentorHoch(Garagentor tor){
            this.tor = tor;
        }

        public override void Execute(){
            tor.Hoch();
        }
    }
}