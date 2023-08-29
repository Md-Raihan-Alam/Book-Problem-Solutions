# Terms

<br/>
1. Data-definiton language:<br/>
    Data-definition lanaguage(DDL) is a subset of Structured Query Language(SQL) that focuses on defining and managing the structure of database.DDL statements are used to establish the schema of the database, which includes specifying data types for columns, setting up relationships between tables, and defining various constraints to ensure data integrity.<br/><br/>
2. Data-manipulation language:<br/>
    Data-manipulation langugage(DML) is a subset of Structured Query Language(SQL) that used in database management system to interact with and manipulate data stored within the database.DML consists of commands that allow users to perform various operations on the data, such as retrieving, inserting, updating, and deleting records<br/><br/>
3. Database schema:<br/>
    A database schema in the context of database management system refers to the logical and structure blueprint that defines the organization, structure , relationships and constraints of the data stored within the database.. It serves as a framework for how data is organized and stored, ensuring consistency and integrity in the way data is accessed and manipulated.<br/><br/>
4.  Databaes instance:<br/>
    A database instance refers to a specific snapshot or state of a database at a given point in time.<br/><br/>
5. Relation Schema:<br/>
    A relation schema defines the structure of a relation (table) in a relational database. It sepcifies the name of the relation and the names and data types of its attributes (columns). The relation schema provides a blueprint for creating instances of the relation and determines the allowable data types and constraints for reach attribute.<br/><br/>
6. Null Value:<br/>
    Null value represents the absence of a value or the unknown state for a particular attribute in a tuple. It indicates that no valid data is currently avaible or theat the value is not applicable.<br/><br/>
7. Query Language:<br/>
    A query language is a language used to interact with a database and perform operations such as querying, inserting, updataint and deleting data.<br/><br/>
8. SQL query structure:<br/>
    The structure of an SQL(Structured Query Language) query is a set of commands and clauses that allow one to intereact with database and retrieve, manipulate or manage data.<br>
        - select clause: This clause specifies the columns you want to retrieve data from<br/>
        - from clase: This clause specifies the table or tables from which one want to retrieve data.<br/>
        - where clause: This clause is used to filter the data based on specific operations.<br/<br>
9. Natural join operation:<br/>
    The Natural join operation in SQL is used to combine rows from two or more tables based on columns with matching names and data types.<br/>
10. as clause:<br/>
    the as clause is used to provide an alias or temporary name to a table or a column in the context of an SQL query.<br/><br/>
11. order by clause:<br/>
    The order by clause is used to sort the result set based on one or more columns.<br/><br/>
12. Correlation name:<br/>
    A correlation name, also known as a correlation variable or tuple variable, is an alias assigned to a table or a subquery in an SQL statement<br/><br/>
13. Set operations:<br/>
    Set operations in SQL allow you to perform operations on the sets of rows returned by two or more SELECT queries. These operations help you combine, compare, and manipulate the results from multiple queries.<br/>
        - union: The union operation combines the results of two or more SELECT queries, removing duplicates<br/>
        - intersect: The intersect operation returns the common rows that exist in the results of two or more SELECT queries<br/><br/>
        - except: The except operation returns the rows that exist in the result of the first SELECT query but not in the result of the second SELECT query.<br/><br/>
14. Null values:<br/>
    Null value represents the absence of a value or the unknown state for a particular attribute in a tuple.<br/>
        -Truth value "unknown": "Unknown" is a truth value in SQL's three-valued logic, used when data outcomes are undefined or missing, impacting comparisons and logic. Null values, signified by "unknown," require specific handling due to their uncertain nature.<br/><br/>
15. Relation Instance:<br/>
    A relation instance, also known as relation state, is a specific set of data stored in a relation (table) at a particular point in time.<br/><br/>
16. Primary key:<br/>
    A primary key is a special type of key used to uniquely identify each row(tuple) in a table.<br/><br/>
17. Foreign Key:<br/>
    A foreighn key is a set of attributes in a referencing relation, such that for reach tuple in the referencing relation, the values of the foreign key attributes are guaranteed to occur as primary key value of a tuple in the references relation<br/>
        -Referencing Relation( Child Table):
        The referencing relation also known as child table, is the table that contains the foreign key. The foreign key in the referencing relation points to the primary key in the referenced relation.The referencing relation depends on the referenced relation to establish a relationship between the two.<br/>
        -Referenced Relation (Parent Table):
        The referenced relation, also known as the parent table, is the table to which the foreign key in ther referencing relation points. It holds the primary key that is referenced by the foreign key in the referencing relation<br/><br/>
18. Aggregate functions:<br/>
    An aggregate function in the context of database management systems is a function that performs a calculation on a set of values and returns a single value as the result<br/><br/>
    -AVG,MIN,MAX,SUM,COUN:
        SUM: Calculates the sum of values in a numeric column.
        AVG (Average): Computes the average value of a numeric column.
        COUNT: Counts the number of rows or non-null values in a column.
        MAX (Maximum): Returns the highest value in a column.
        MIN (Minimum): Returns the lowest value in a column.<br/>
    -Group by: The group by clause in SQL is used to group rows of data based on the values in one or more columns.<br/>
    -Having: The having caluse in SQL is used to filter the results of a query based on conditions applied to the aggregated data.<br/><br/>
19. Nested subqueries:<br/>
    Nested subqueries, also known as nested queries or subqueries within subqueries, are SQL queries that include on or more queries embedded within another query.<br/><br/>
20. Set compariosns:<br/>
    Set comparisons in SQL involve comparing a single value or expression with a set of values returned by a subquery.<br/>
        - {<, <=, >, >=} { some, all }:
            {<, <=} SOME: Returns true if the comparison holds true for at least one element in the set.
            {>, >=} ALL: Returns true if the comparison holds true for all elements in the set.<br/>
        - Exists:
            The "EXISTS" keyword in SQL is used to check the existence of rows in the result set of a subquery. It returns true if the subquery returns any rows, and false if the subquery result is empty.
        -Unique:
            The term "unique" in SQL is often associated with ensuring that values within a column or set of columns are distinct and not duplicated. 
21. Lateral clause:<br/>
    The lateral clause in SQL is used to refer to the result of a subquery within the context of an outer query, enabling you to use the output of the subquery as if it were a table or column in the main query. <br/><br/>
22. with clause:<br/>
    The "WITH" clause in SQL, also known as a Common Table Expression (CTE), is used to define a temporary result set that can be referenced within the context of a larger query<br/><br/>
23. Scalar subquery:<br/>
    A scalar subquery in SQL is a type of subquery that returns a single value, rather than a result set with multiple rows and columns<br/><br/>
24. Database modification:<br/>
    Database modification refers to the process of altering the data stored in a database.<br/>
        -Insertion:
            Adding new records or rows to a database table<br/>
        -Deletion:
            Removing records from a database table<br/>
        -Updating:
            Modifying existing records in a database table.<br/><br/>
