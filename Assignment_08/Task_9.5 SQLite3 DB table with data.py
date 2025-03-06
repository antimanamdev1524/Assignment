# WAP to create a database and a table using SQLite3. 

import sqlite3

mydb= sqlite3.connect("sqdb.db")
mycursor= mydb.cursor()

mycursor.execute('''CREATE TABLE IF NOT EXISTS sq_user (
                     Roll_No INTEGER PRIMARY KEY AUTOINCREMENT,
                     Name TEXT,
                     Course TEXT
                   )'''
                )

mycursor.execute("INSERT INTO sq_user (Name, Course) VALUES(?, ?)", ('XY', 'Backend Development'))
mydb.commit()


mycursor.execute("select * from sq_user")
rows= mycursor.fetchall()
for row in rows:
    print(row)

print("operation successful")
mydb.close()


