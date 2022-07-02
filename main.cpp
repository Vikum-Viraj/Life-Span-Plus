int main() {
  
//Default Construtor
Member mem1;
mem1.setMemberDetails();
mem1.displayMemberDitails();
  
Doctor doc1;
doc1.setDoctorDetails();
doc1.getDocterDetails();
  
Admin Add1;
Add1.setAdminDetails();
  
Appointment app1;
app1.displayAppointment();
  
BMICalculator BMI1;
BMI1.Calc_BMI(6, 65);
  
CreditCard CRD1;
CRD1.displayDetails();
  
DietPlan DPlan1;
DPlan1.DisplayDietPlan();
  
MedicalReport MDR1;
  
MembershipPlan PLAN1;
PLAN1.getMembershipPlan();
PLAN1.updateMembershipPlan();
PLAN1.displayMembershipPlan();
  
Payment Pyment1;
Pyment1.DisplayPaymentDetails();
  
Prescription Preptn1;
Preptn1.DisplayPrescription();

  
return 0;
}