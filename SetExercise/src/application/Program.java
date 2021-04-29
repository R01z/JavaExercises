package application;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

import entities.Student;

public class Program {

	public static void main(String[] args) {
		int number,i,cod;
		Scanner sc = new Scanner(System.in);
		
		Set<Student> set = new HashSet<>();
		
		System.out.print("How many students for course A?");
		number = sc.nextInt();
		for(i=0;i<number;i++) {
			cod=sc.nextInt();
			set.add(new Student(cod));
		}
		
		System.out.print("How many students for course B?");
		number = sc.nextInt();
		for(i=0;i<number;i++) {
			cod=sc.nextInt();
			set.add(new Student(cod));
		}
		
		System.out.print("How many students for course C?");
		number = sc.nextInt();
		for(i=0;i<number;i++) {
			cod=sc.nextInt();
			set.add(new Student(cod));
		}
		
		System.out.println("Total students: " + set.size());
	}

}
