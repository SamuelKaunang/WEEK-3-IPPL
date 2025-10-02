import java.util.Scanner;
class Account {
    String accountNumber;
    String statusCode;
    Account(String accountNumber, String statusCode) {
        this.accountNumber = accountNumber;
        this.statusCode = statusCode;
    }
}
public class ComputerService {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Account[] accounts = {
            new Account("1001", "valid"),
            new Account("1002", "invalid"),
            new Account("1003", "valid")
        };
        System.out.print("Masukkan Account Number: ");
        String accNum = scanner.nextLine();
        boolean found = false;
        for (Account acc : accounts) {
            if (acc.accountNumber.equals(accNum)) {
                found = true;
                if (acc.statusCode.equals("valid")) {
                    System.out.println("===== INVOICE =====");
                    System.out.println("Account Number: " + acc.accountNumber);
                    System.out.println("Amount of Sale: Rp100.000" );
                    System.out.println("===================");
                } else {
                    System.out.println("Error: Status akun tidak valid!");
                }
                break; 
            }
        }
        if (!found) {
            System.out.println("Error: Account tidak ditemukan!");
        }
        scanner.close();
    }
}
