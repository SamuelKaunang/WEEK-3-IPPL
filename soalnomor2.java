import java.util.Scanner;

public class calculatorServicesComputer {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int jumlahKomputer;
        int jumlahPheriperal;
        boolean jamService;
        boolean willingDropPick;
        double baseFee = 0;
        double additionalFee = 0;
        double totalFee = 0;


        System.out.print("Masukan jumlah komputer: ");
        jumlahKomputer = input.nextInt();

        System.out.print("Masukkan jumlah Pheriperal: ");
        jumlahPheriperal = input.nextInt();

        System.out.print("Apakah didalam waktu kerja? (true/false): ");
        jamService = input.nextBoolean();

        System.out.print("Apakah customer mau drop off dan pick up? (true/false): ");
        willingDropPick = input.nextBoolean();

        if(jumlahKomputer == 1 || jumlahKomputer == 2){
            baseFee = 50;
            additionalFee = 0;
        } else if (jumlahKomputer >= 3 && jumlahKomputer <= 10) {
            baseFee = 100;
            additionalFee = 10 * jumlahPheriperal;
        } else if (jumlahKomputer > 10) {
            baseFee = 500;
            additionalFee = 10 * jumlahPheriperal;
        }

        totalFee = baseFee + additionalFee;

        if(!jamService){
            baseFee *= 2;
            totalFee = baseFee + additionalFee; 
        }

        if(willingDropPick){
            totalFee /= 2;
        }

        System.out.println("==================================");
        System.out.println("Biaya Servis Komputer");
        System.out.println("Jumlah komputer   : " + jumlahKomputer);
        System.out.println("Jumlah peripheral : " + jumlahPheriperal);
        System.out.println("Base fee          : $" + baseFee);
        System.out.println("Additional fee    : $" + additionalFee);
        System.out.println("Total fee         : $" + totalFee);

        input.close();
    }
}
