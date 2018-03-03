namespace Fh.Pk2.Rc{
    using Fh.Pk2.Rc;

    public class RemoteControl{
        public Command[,] deviceCommands;

        public RemoteControl(){
            deviceCommands = new Command[4,2];
        }

        public void SetCommand(int i, Command on, Command off){
            if(i < 0 || i > 3)
                throw new WrongDeviceNumberException();

            deviceCommands[i,0] = on;
            deviceCommands[i,1] = off;
        }

        public void PressOn(int i){
            if(i < 0 || i > 3)
                throw new WrongDeviceNumberException();
            
            deviceCommands[i,0].Execute();
        }

        public void PressOff(int i){
            if(i < 0 || i > 3)
                throw new WrongDeviceNumberException();
            
            deviceCommands[i,1].Execute();
        }


    }
}