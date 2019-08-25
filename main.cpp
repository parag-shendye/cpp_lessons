#include <iostream>
#include "Employee.h"
#include "Database.h"
using namespace std;


/*
--To add an employee
--To fire an employee
--To promote an employee
--To view all employees, past and present
--To view all current employees
--To view all former employees
*/

int main() {
	/*
	cout << "Testing Employee class" << endl;
	Records::Employee emp;
	emp.setFirstName("John");
	emp.setLastName("Galt");
	emp.setEmployeeNumber(20);
	emp.setSalary(40000);
	emp.promote(500);
	emp.hire();
	emp.display();
	cout << emp.getSalary() << endl;*/

	Records::Database myDB;
	Records::Employee& emp1 = myDB.addEmployee("Parag", "Shendye");
	//emp1.promote(50);

	Records::Employee& emp2 = myDB.addEmployee("ABC", "XYZ");
	//emp2.promote(100);

	Records::Employee& emp3 = myDB.addEmployee("Rahul", "Pappu");
	emp3.fire();

	std::cout << "all Employees: " << std::endl;
	myDB.displayall();

	std::cout << std::endl << "current Employees: " << std::endl;
	myDB.displaycurrent();


 //std::string sAge = "0";
 //std::cout << "Enter your age: ";
 //getline(std::cin, sAge);
 //int nAge = std::stoi(sAge);

 //if ((nAge >= 1) && (nAge <= 18)) {
	// std::cout << "Important birthday" << std::endl;
 //}
 //else {
	// std::cout << "not important" << std::endl;
 //}




}