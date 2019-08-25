#include "Database.h"
#include <iostream>
#include <stdexcept>


namespace Records {

	Employee& Records::Database::addEmployee(const std::string& firstName, const std::string& lastName)
	{
		Employee theEmployee(firstName, lastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1];

	}
	Employee& Database::getEmployee(int EmployeeNumber)
	{
		for (auto& Employee : mEmployees) {
			if (Employee.getEmployeeNumber() == EmployeeNumber) {
				return Employee;
			}
		}throw std::logic_error("No employee found");
	}
	Employee& Database::getEmployee(const std::string& firstName, const std::string& lastName)
	{
		for (auto& Employee : mEmployees) {
			if (Employee.getFirstName() == firstName && Employee.getLastName() == lastName) {
				return Employee;
			}
		}throw std::logic_error("No such employee found");
	}
	void Database::displayall() const
	{
		for (const auto& employee : mEmployees) {
			employee.display();
		}
	}
	void Database::displaycurrent() const
	{
		for (const auto& employee : mEmployees) {
			if (employee.isHired()) {
				employee.display();
			}
		}
	}
	void Database::displayformer() const
	{
		for (const auto& employee : mEmployees) {
			if (!employee.isHired()) {
				employee.display();
			}
		}
	}
}