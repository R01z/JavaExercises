package entities;

public class ImportedProduct extends Product{
	private double customsFee;
	
	//Construtores
	public ImportedProduct() {super();}

	public ImportedProduct(String name, double price, double customsFee) {
		super(name, price);
		this.customsFee = customsFee;
	}

	
	//Getters e Setters
	public double getCustomsFee() {
		return customsFee;
	}

	public void setCustomsFee(double customsFee) {
		this.customsFee = customsFee;
	}

	//Funções
	@Override
	public String priceTag() {
		return getName() + " $ " + String.format("%.2f",totalPrice()) + 
				" (Customs fee: $ " + String.format("%.2f",customsFee) + ")";
	}
	
	public double totalPrice() {
		return getPrice()+customsFee;
	}
}
