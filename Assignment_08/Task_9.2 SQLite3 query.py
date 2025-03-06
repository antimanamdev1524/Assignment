# sqlite3
import sqlite3

connect_1= sqlite3.connect("database.db")
cursor=connect_1.cursor()

cursor.execute('''CREATE TABLE IF NOT EXISTS user_1 (
      ID integer primary key autoincrement,
      NAME text,
      SUBJECT text,
      CLASS text)''')

cursor.execute("INSERT INTO user_1 (ID, NAME, SUBJECT, CLASS) VALUES(?, ?, ?, ?)", (1, 'AB', "Physics", "v"))
connect_1.commit()

cursor.execute("select * from user_1")
rows= cursor.fetchall()
for row in rows:
    print(row)

connect_1.close()

print("operation completed!!")


#PyMySQL
import pymysql

mydb= pymysql.connect(host="Localhost", user="root", password="Annu@1524")
mycursor= mydb.cursor()
print("DB connection successfull..")

mycursor.execute("CREATE DATABASE IF NOT EXISTS pydb_0")
mydb.commit()
print("DB successfully created..")

mydb= pymysql.connect(host="localhost", user="root", password="Annu@1524", database= "pydb_0")
mycursor= mydb.cursor()
print("DB successfully posted to localhost")

mycursor.execute('''CREATE TABLE IF NOT EXISTS pydb_table_0(id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, Name VARCHAR(40))''')
mydb.commit()
print("table created!!")