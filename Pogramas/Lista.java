
public class Lista {

    private Object item[];
    private int primeiro, ultimo, pos;

    //Operações
    public Lista(int maxTam) { // Cria uma Lista vazia
        this.item = new Object[maxTam];
        this.pos = −1;
    this.primeiro = 0;
        this.ultimo = this.primeiro;
    }
