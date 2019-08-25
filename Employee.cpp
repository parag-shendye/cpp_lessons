#include "Employee.h"
#include <iostream>
using namespace std;

namespace Records {
	Employee::Employee(const std::string& firstName, const std::string& lastName) {
		mFirstName = firstName;
		mLastName = lastName;

	}

	void Employee::promote(int raiseamt)
	{
		std::cout << getEmployeeNumber() << "is promted" << std::endl;
		setSalary(getSalary() + raiseamt);
	}

	void Employee::demote(int demeritamt)
	{
		std::cout << getEmployeeNumber() << "is demoted" << std::endl;
		setSalary(getSalary() + demeritamt);
	}

	void Employee::hire()
	{
		mHired = true;
	}

	void Employee::fire()
	{
		mHired = false;
	}

	void Employee::display() const
	{
		cout << "Employee: " << getFirstName() << " " << getLastName() << endl;
		cout << (isHired() ? "current Employee" : "Former Employee") << endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "---------------------------" << endl;

	}

	void Employee::setFirstName(const std::string& firstName)
	{
		mFirstName = firstName;
	}
	const std::string& Employee::getFirstName() const
	{
		return mFirstName;
	}
	void Employee::setLastName(const std::string& lastName)
	{
		mLastName = lastName;
	}

	const std::string& Employee::getLastName() const
	{
		return mLastName;
	}

	void Employee::setEmployeeNumber(int employeeNumber)
	{
		mEmployeeNumber = employeeNumber;
	}

	int Employee::getEmployeeNumber() const
	{
		return mEmployeeNumber;
	}

	void Employee::setSalary(int newSalary)
	{
		mSalary = newSalary;
	}

	int Employee::getSalary() const
	{
		return mSalary;
	}

	bool Employee::isHired() const
	{
		return mHired;
	}
}
