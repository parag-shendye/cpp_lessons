#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records {
	const int kFirstEmployeeNumber = 1000;

	class Database {
	public:
		Employee& addEmployee(const std::string& firstName, const std::string& lastName);

		Employee& getEmployee(int EmployeeNumber);

		Employee& getEmployee(const std::string& firstName, const std::string& lastName);

		void displayall() const;
		void displaycurrent() const;
		void displayformer() const;

	private:
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployeeNumber;

	};


}