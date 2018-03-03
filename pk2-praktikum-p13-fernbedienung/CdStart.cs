namespace Fh.Pk2.Commands{
    using Fh.Pk2.Rc;
    using Fh.Pk2.Devices;

    public class CdStart : Command{
        private CdPlayer player;

        public CdStart(CdPlayer player){
            this.player = player;
        }

        public override void Execute(){
            player.Start();
        }
    }
}