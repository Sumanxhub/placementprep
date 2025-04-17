# RDBMS – Introduction

## Database (DB)

- A database is a collection of records .  
- Records are the collection of organized and structured file, and file always contains data.

## Relational Database (RDB)

- It is a collection of tables. Table is collection of records.
- Record is a collection of organised and structured file and file always contains data.

## DB vs RDB

- RDB stores data in tabular form, DB may or may not.

## DBMS

- DBMS is a system software that performs operations over database.  
- Operations like Insertion, Selection, Updation, Deletion.

## RDBMS

- It is a system software that performs operations over relational database.

---

## Data vs Information vs Knowledge

- **Data** : Any raw facts or raw material is called data.
- **Information** : Meaningful data is called information.
- **Knowledge** : Information which is used in decision making is called knowledge.

---

## Types of Database

1. Homogeneous - Database format are same.
2. Heterogeneous - Database format are different. Database communicates via XML.

---

## Table

- Table is a database schema object.  
- It is a collection of records.

---

## Structure : Three types

1. Logical structure of a database is called **schema** .
2. Physical structure of a database is called **table** .
3. Virtual structure of database is called **view** .

---

## Key points 

- **Attributes** : Attributes is a piece of logical entity.
- **Entity**: A particular record of a table is called entity.
- **Entity types** : Collection of entity/record is called entity types.
- **Entity set** : Collection of all records is called entity sets.
- **Domain** : A particular column of table is called domain.

---

### What is uniqueness property ? 
- In a domain, all values are unique is called uniqueness property.

### What is Not Null property?
- In a domain, no value is null is called not null property.

---

## Key

- Constraints applying on domain is called key.

### Types of Key :

1. Candidate key  
2. Primary key  
3. Secondary key  
4. Alternate key  
5. Composite key or Compound key  
6. Unique key  
7. Surrogate key  
8. Super key  
9. Foreign key  

---

1. **Candidate key** : Candidate key is an attribute or set of attribute which value founds all the values of that particular record.

2. **Primary key** : A candidate key which have uniqueness and not null property is called primary key.

3. **Secondary key** : Accept primary key all the candidate keys are called secondary key.

4. **Alternate key** : A secondary key which have uniqueness and not null property is called alternate key.

5. **Composite or Compound key** : Two or more than two attributes join together and make a candidate key is called composite or compound key.

6. **Unique key** : An attribute or set of an attribute have uniqueness property is called unique key.

7. **Surrogate key** :  When our database does not have a primary key then the database designer generates a default primary key is called the surrogate key.

8. **Super key** : Superset of a candidate key is called super key.

9. **Foreign key** : The primary key of a child table has reference to the parent table, that reference attribute is called foreign key.

