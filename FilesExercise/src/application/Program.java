package application;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

import entities.Product;

public class Program {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		List<Product> list = new ArrayList<>();//Lista de produtos
		
		String strPath = sc.nextLine();
		
		File sourceFile = new File(strPath);//Arquivo que será lido
		String sourceFolder = sourceFile.getParent();//Caminho do arquivo
		
		String targetFile = sourceFolder + "\\out\\summary.csv";//Arquivo de saída na mesma pasta
		
		try(BufferedReader br = new BufferedReader(new FileReader(strPath))){
			//Lê o arquivo, cria objetos e insere na lista
			String itemCsv = br.readLine();
			while(itemCsv!= null) {
				String[] fields = itemCsv.split(",");
				String name = fields[0];
				double price = Double.parseDouble(fields[1]);
				int quantity = Integer.parseInt(fields[2]);
				
				list.add(new Product(name,price,quantity));
				itemCsv = br.readLine();
			}
			
			try(BufferedWriter bw = new BufferedWriter(new FileWriter(targetFile))){
				//Escreve no arquivo de saida
				for(Product c : list) {
					bw.write(c.getName() + "," + String.format("%.2f", c.total()));
					bw.newLine();
				}
			}catch(IOException e) {
				System.out.println("Error writeing file: " + e.getMessage());
			}
		} catch(IOException e) {
			System.out.println("Error reading file: " + e.getMessage());
		}
		
		sc.close();
	}

}
