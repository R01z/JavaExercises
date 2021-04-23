package model.services;

import java.util.Calendar;
import java.util.Date;

import model.entites.Contract;
import model.entites.Installment;

public class ContractService {
	private OnlinePaymentService paymentService;
	
	public ContractService() {}
	
	public ContractService(OnlinePaymentService paymentService) {
		this.paymentService = paymentService;
	}


	public void processContract(Contract contract, int months) {
		double basic = (contract.getTotalValue()/months);
		for(int i=1;i<=months;i++) {
			Date date = addMonths(contract.getDate(), i);
			double interest = basic + paymentService.interest(basic,i);
			double amount = interest + paymentService.paymentFee(interest);
			
			contract.addInstallment(new Installment(date,amount));
		}
	}
	
	private Date addMonths(Date date, int n) {
		Calendar cal = Calendar.getInstance();
		cal.setTime(date);
		cal.add(Calendar.MONTH, n);
		return cal.getTime();
	}
}
