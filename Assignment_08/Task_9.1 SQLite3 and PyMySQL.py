# SQLite3
import sqlite3

# using database configuration to connect localhost with python
mydb = sqlite3.connect("sqlite.db")   #database name "sqlite"  
mycursor= mydb.cursor()    #calling cursor which is in-built method to post data into sql
print("connection successful")  # created a cursor object to execute queries

# Create table if it doesn't exist
#"sqlite_table" is table name 
mycursor.execute('''CREATE TABLE IF NOT EXISTS user   
                (
                    id INTEGER PRIMA]RY KEY AUTOINCREMENT,
                    Name TEXT, 
                    Age INTEGER 
                )''')

print("database created successfully")

#Insert data into table
# Data= [("x", 44), ("y", 45), ("z", 46),]    
# mycursor.executemany("INSERT INTO user(Name, Age) VALUES(?, ?)", Data)
# print("created database successfully posted to local host")


# commit changes and close the connection
mydb.commit()
print("create table successfully")


# to fetch all the data
mycursor.execute("SELECT * FROM user")
rows= mycursor.fetchall()

print("stored data into database")

for row in rows:
    print(row)

mydb.close()