import java.util.Scanner;

public class warmindo {
    public static void main(String args[]){

        Scanner input = new Scanner(System.in);

        int pilihan;
        char ulang;

        do {
            System.out.println("##  Daftar Menu Makanan & minuman ##");
            System.out.println("============================");
            System.out.println("1. Indomie");
            System.out.println("2. Nasi ayam");
            System.out.println("3. Nasi ikan");
            System.out.println("4. Nasi telur");
            System.out.println("5. Teh tarik");
            System.out.println("6. Teh anget");
            System.out.println("7. Es teh");
            System.out.println("8. Kopi hitam");
            System.out.println();

            System.out.print("Pilihan anda: ");
            pilihan = input.nextInt();

            switch(pilihan){
                case 1:
                    System.out.println("Anda memilih indomie");
                    break;
                case 2:
                    System.out.println("Anda memilih nasi ayam");
                    break;
                case 3:
                    System.out.println("Anda memilih nasi ikan");
                    break;
                case 4:
                    System.out.println("Anda memilih nasi telur");
                    break;
                case 5:
                    System.out.println("Anda memilih Teh Tarik");
                    break;
                case 6:
                    System.out.println("Anda memilih Teh anget");
                    break;
                case 7:
                    System.out.println("Anda memilih Es teh");
                    break;
                case 8:
                    System.out.println("Anda memilih Kopi hitam");
                    break;
                default:
                    System.out.println("Menu tidak tersedia");
            }

            System.out.println();

            System.out.print("Ingin memilih menu lain (y/t)? ");
            ulang = input.next().charAt(0);

            System.out.println();
        }
        while (ulang!= 't');

        System.out.println("Terimakasih...");

    }
}
