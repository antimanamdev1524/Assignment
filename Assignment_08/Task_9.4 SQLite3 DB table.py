# WAP to create a database and a table using SQLite3. 

import sqlite3

mydb= sqlite3.connect("sqdb_1.db")
mycursor= mydb.cursor()

mycursor.execute('''CREATE TABLE IF NOT EXISTS sq_user_00(
                     id INTEGER PRIMARY KEY AUTOINCREMENT,
                     Employee_Name TEXT,
                     Salary INT
                   )'''
                )

mydb.commit()

print("operation successful")
mydb.close()


