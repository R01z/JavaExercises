package application;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import entities.Company;
import entities.Individual;
import entities.TaxPayer;

public class Program {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		char ch;
		String name;
		double anualIncome,healthExpenditures;
		int employees,N;
		
		List<TaxPayer> list = new ArrayList<>();
		
		System.out.print("Enter the number of tax payers: ");
		N = sc.nextInt();
		
		for(int i=0;i<N;i++) {
			System.out.println("Tax payer #"+(i+1)+" data:");
			System.out.print("Individual or company (i/c)? ");
			ch = sc.next().charAt(0);
			System.out.print("Name: ");
			sc.nextLine();
			name = sc.nextLine();
			System.out.print("Anual income: ");
			anualIncome = sc.nextDouble();
			
			if(ch == 'i') {
				System.out.print("Health expenditures: ");
				healthExpenditures = sc.nextDouble();
				TaxPayer individual = new Individual(name,anualIncome,healthExpenditures);
				list.add(individual);
			}
			else if(ch == 'c') {
				System.out.print("Number of employees: ");
				employees = sc.nextInt();
				TaxPayer company = new Company(name,anualIncome,employees);
				list.add(company);
			}
		}
		
		double totalTaxes = 0;
		System.out.println("\nTAXES PAID:");
		for(TaxPayer c : list) {
			System.out.println(c.toString());
			totalTaxes+=c.tax();
		}
		System.out.println("\nTOTAL TAXES: $ " + String.format("%.2f",totalTaxes));
	}

}
