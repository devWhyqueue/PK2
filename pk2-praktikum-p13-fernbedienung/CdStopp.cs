namespace Fh.Pk2.Commands{
    using Fh.Pk2.Rc;
    using Fh.Pk2.Devices;

    public class CdStopp : Command{
        private CdPlayer player;

        public CdStopp(CdPlayer player){
            this.player = player;
        }

        public override void Execute(){
            player.Stopp();
        }
    }
}