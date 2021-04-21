package application;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

import entities.ImportedProduct;
import entities.Product;
import entities.UsedProduct;

public class Program {

	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		
		List<Product> list = new ArrayList<>();
		
		System.out.print("Enter the number of products: ");
		int n = sc.nextInt();
		
		for(int i=0;i<n;i++) {
			System.out.println("Product #"+(i+1)+ " data:");
			System.out.print("Common, used or imported (c/u/i)? ");
			char ch = sc.next().charAt(0);
			System.out.print("Name: ");
			sc.nextLine();
			String name = sc.nextLine();
			System.out.print("Price:  ");
			double price = sc.nextDouble();
			
			if(ch == 'i') {
				System.out.print("Customs fee: ");
				double customFee = sc.nextDouble();
				Product imported = new ImportedProduct(name,price,customFee);
				list.add(imported);
			}
			else if(ch == 'u') {
				System.out.print("Manufacture date (DD/MM/YYYY): ");
				Date date = sdf.parse(sc.next());
				Product used = new UsedProduct(name,price,date);
				list.add(used);
			}
			else if(ch == 'c') {
				Product product = new Product(name,price);
				list.add(product);
			}
		}
		
		System.out.println("\nPRICE TAGS:");
		for(Product c : list) {
			System.out.println(c.priceTag());
		}
		
		sc.close();
	}

}
