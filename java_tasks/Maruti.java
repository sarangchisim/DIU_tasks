
public class Maruti {
    public String model;
    public double price;
    public Engine En;

    public Maruti (String model, double price, Engine En){
        this.model = model;
        this.price = price;
        this.En = En;
        System.out.println("Model is: "+model);
        System.out.println("Price is: "+price);
        En.speedUp();
    }

    public static void main(String[] args){
        Engine e = new Engine();
        Maruti m = new Maruti("Maruti",100000,e);
    }
}

