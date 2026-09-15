class Main{
    static class Mountain{
        byte[] data;
        Mountain(int sizeMB){
            data=new byte[sizeMB*1024*1024];
        }
    }
    
    static long usedMemory(){
        Runtime r=Runtime.getRuntime();
        return r.totalMemory()-r.freeMemory();
    }

    public static void main(String[] args)throws InterruptedException{
        System.out.println("before allocation: " +usedMemory()/1024/1024+" MB");

        Mountain[] mountains=new Mountain[10];
        for(int i=0;i<mountains.length;i++)
            mountains[i]=new Mountain(1);

        System.out.println("after allocation: "+ usedMemory()/1024/1024 + " MB");

        Mountain k2=mountains[0];
        mountains=null;

        System.gc();
        Thread.sleep(1000);

        System.out.println("after gc request: " +usedMemory()/1024/1024 +" MB (k2 kept: "+k2.data.length/1024/1024+" MB)");
    }
}
