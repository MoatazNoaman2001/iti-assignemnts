from sqlite3 import Date
from enum import Enum
from typing import List
import re
import mysql.connector


Gender= Enum('M','F')
config = {
    'user': 'root',
    'password': '1234',
    'host': 'localhost',
    'database': 'iti',
}

try:
    connection = mysql.connector.connect(**config)
    cursor = connection.cursor()
except mysql.connector.Error as err:
    print(f"Error: {err}")




class Person :
    def __init__(self, name, money, mood, healthRate):
        super().__init__()
        self.name=name
        self.money =money
        self.mood = mood
        self.healthRate=healthRate

    def sleep(self, hours):
        if (hours == 7):
            return "happy"
        elif(hours > 7):
            return "lazy"
        else:
            return "tired"

    def eat(self, meals):
        if(meals == 3):
            return "100%"
        if (meals == 2):
            return "75%"
        if (meals == 1):
            return "50%"

    def buy(self, items):
        if (items == 1):
            return self.money * 0.9
        pass

class Car:
    def __init__(self, name, fuelRate, velocity):
        self.name=name
        self._fuelRate=fuelRate
        self._velocity=velocity

    def _calculate_fuel(self, distance):
        if self.fuel is None:
            return 100 - (distance / 10)
        else:
            return self.fuel - (distance / 10)
    def run(self, velocity, distance):
        distance = distance / 1000
        self.fuel = self._calculate_fuel(distance)
        if (self.fuel <= 0):
            print("you ran out of fuel")
            self.stop()
            self.fuel = 0

    def stop(self, remaining_distance=0):
        self._velocity = 0
        print(f"Car stopped. Remaining distance: {remaining_distance} km")
    @property
    def velocity(self):
        return self._velocity

    @velocity.setter
    def velocity(self, velocity):
        if 0 <= velocity <= 200:
            self._velocity= velocity
        else:
            self._velocity= 200
    @property
    def fuelRate(self):
        return self._velocity

    @fuelRate.setter
    def fuelRate(self, fuelRate):
        if 0 <= fuelRate <= 100:
            self._fuelRate= fuelRate
        else:
            self._fuelRate= 100
class Employee(Person):
    def __init__(self, id, car:Car, email, salary, distanceToWork):
        self.id = id
        self.car = car
        self._email = None
        self._salary = None
        self.email = email
        self.salary = salary
        self.distanceToWork = distanceToWork
    def work(self):
        pass;
    def drive(self , distance):
        self.car.run(self.car.velocity, distance)
    def refuel(self, gasAmount=100):
        self.fuel = gasAmount / 10
    def sendMail(self):
        pass

    def insert_employee(self):
        query = """
        INSERT INTO employees (name, email, salary, distanceToWork, car_name, car_fuelRate, car_velocity)
        VALUES (%s, %s, %s, %s, %s, %s, %s)
        """
        values = (
            self.name, self.email, self.salary, self.distanceToWork,
            self.car.name, self.car.fuelRate, self.car.velocity
        )
        cursor.execute(query, values)
        connection.commit()
        return cursor.lastrowid
    @property
    def email(self):
        return self._email

    @email.setter
    def email(self, value):
        email_regex = r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$'
        if re.match(email_regex, value):
            self._email = value
        else:
            raise ValueError("Invalid email address")

    @property
    def salary(self):
        return self._salary

    @salary.setter
    def salary(self, value):
        if value <= 1000:
            self._salary = value
        else:
            raise ValueError("Salary must be less than or equal to 1000")

    def work(self, hours):
        if hours == 8:
            return "happy"
        elif hours > 8:
            return "tired"
        else:
            return "Lazy"


class Office:
    def __init__(self, name, employees:List[Employee]):
        self.name = name
        self.employees=employees

    def insert_office(self):
        query = "INSERT INTO offices (name) VALUES (%s)"
        values = (self.name,)
        cursor.execute(query, values)
        connection.commit()
        return cursor.lastrowid
    def get_all_employees(self):
        return self.employees
    def get_employee(self, emoId):
        return  self.employees[emoId]
    def hire(self, employee):
        self.employees[employee.id] =(employee)
        pass
    def fire(self, empId):
        self.employees.remove(empId)
        pass

    @staticmethod
    def calculate_lateness(targetHour, moveHour, distance, velocity):
        travel_time = distance / velocity
        arrival_time = moveHour + travel_time
        return arrival_time > targetHour

    def deduct(self, empId, deduction):
        emp = self.get_employee(empId)
        if emp:
            emp.salary -= deduction

    def reward(self, empId, reward):
        emp = self.get_employee(empId)
        if emp:
            emp.salary += reward

    def check_lateness(self, empId, moveHour):
        emp = self.get_employee(empId)
        if emp:
            is_late = Office.calculate_lateness(9, moveHour, emp.distanceToWork, emp.car.velocity)
            if is_late:
                self.deduct(empId, 10)
            else:
                self.reward(empId, 10)



