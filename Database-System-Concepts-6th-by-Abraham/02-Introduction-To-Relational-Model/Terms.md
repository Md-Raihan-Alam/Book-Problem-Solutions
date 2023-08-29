# Terms

<br/>
1. Table:<br/>
    A table is a fundamental componenet of a relational database. It is a collection of related data organized into rows and columns. ach table represents a specific entity or conecpt in the database. Tables have defined strucutre with names columns (attributes) and sotre data in rows(tuples) that correspond to individual instances of the entity.<br/><br/>
2. Relation:<br/>
    In the ocntext of the relational model, a relation refers to a mathematical concept representing a table in a database. A relation is a set of tuples (rows) that share a common strcutre defined by the table's attributes ( columns). In other words, a relation is a logcal representation of a table within the relational database model.<br/><br/>
3. Attribute:<br/>
    An attribute, also known as a column or field, represents a specific characterisitc or property of a table or relation. It defines the type of data that can be stored in ttha column.<br/><br/>
4. Domain:<br/>
    A domain refers to the set of allowable value for a specific attribute in a table. It defines the range of valid data that can be stored in that attribute.<br/><br/>
5. Tuple:<br/>
    A tuple, also known as row or recod, represents a single instance or a specific set of data in a table. It is a collection of attribute values that correspond to a particualr entity or occurrence.<br/><br/>
6. Atomic Domain:<br/>
    An atomic domain refers to the smalles unit of data that can be individually identified and manipulated within a database system.<br/><br/>
7. Null Value:<br/>
    Null value represents the absence of a value or the unknown state for a particular attribute in a tuple. It indicates that no valid data is currently avaible or theat the value is not applicable.<br/><br/>
8. Referential Integrity Constraint:<br/>
    Referential Integrity Constraint is a rule or condition enforced in a database system to maintain consistency and accuracy of data relationships between tables. It ensures that foreign key value in one table match primary key value in another table.<br/><br/>
9. Database Schema:<br/>
    A database schema is the structure or blueprint of a database. It defines the organization and logical representation of database objects.<br/><br/>
10. Schema Diagram:<br/>
    A schema diagram is a visual representation or graphical illustration fo database schema.<br/><br/>
11. Databaes instance:<br/>
    A database instance refers to a specific snapshot or state of a database at a given point in time.<br/><br/>
12. Query Language:<br/>
    A query language is a language used to interact with a database and perform operations such as querying, inserting, updataint and deleting data. Two types of query language commonly used in DBMS are:<br/>
        - Procedural Language: A procedural query language involved specifying detailed steps or procedures to achieve and desired result. Examples: SQL/PSM/PL<br/>
        - Nonprocedural Language: A nonprocedural query language allows users t ospecify what data they want without specifying hwo to obtain it. It focuses on the desired result rather than the step-by-step process. Example:SQL<br/><br/>
13. Relation Schema:<br/>
    A relation schema defines the structure of a relation (table) in a relational database. It sepcifies the name of the relation and the names and data types of its attributes (columns). The relation schema provides a blueprint for creating instances of the relation and determines the allowable data types and constraints for reach attribute.<br/><br/>
14. Relation Instance:<br/>
    A relation instance, also known as relation state, is a specific set of data stored in a relation (table) at a particular point in time.<br/><br/>
15. Key:<br/>
    A key is an attribute or a combination of attributes within a database table that is used to identify and uniquely distinguish each row(tuple) in thta table.<br/>
        -Superkey:A superkey of a relation is a set of one or more attributes whose value are guaranteed to identify tuple in the relation uniquely.<br/>
        -Candidate key: A candidate key is a minimal superkey, that is, a set of attributes that forms a superky but non o whose subsets is a superkey.<br/>
        -Primary key: A primary key is a special type of key used to uniquely identify each row(tuple) in a table.<br/><br/>
16. Foreign Key:<br/>
    A foreighn key is a set of attributes in a referencing relation, such that for reach tuple in the referencing relation, the values of the foreign key attributes are guaranteed to occur as primary key value of a tuple in the references relation<br/>
        -Referencing Relation( Child Table):
        The referencing relation also known as child table, is the table that contains the foreign key. The foreign key in the referencing relation points to the primary key in the referenced relation.The referencing relation depends on the referenced relation to establish a relationship between the two.<br/>
        -Referenced Relation (Parent Table):
        The referenced relation, also known as the parent table, is the table to which the foreign key in ther referencing relation points. It holds the primary key that is referenced by the foreign key in the referencing relation<br/><br/>
17. Operatorns on relations:<br/>
    Operations on relations, also known as relational algebra operations, are fundamental operations performed on relations (tables) in a Database Management System (DBMS) to manipulate and retrieve data<br/>
        -Selection of tuples (σ):The selection operations involves retrieving specific rows (tuples) from a relation that meet certain conditions or criteria. It is also known as "filtering" operation.<br/>
        -Selection of Attributes(Projection)(π):The selection of attributes involves retrieving specific columns (attributes) from a relation while excluding others.<br/>
        -Natural Join(⋈)::A natural join is an operation that combines two or more relations based on their common atrbiutes.<br/>
        -Cartesian Product (×)::The cartesian product, also known as cross join is an operation that cmbines all rows from two or more relations, resulting in a new relation with a number of rows equal to the product of the original relation's row ocunt<br/>
        -Set Operations(Union (∪), Intersection (∩), Difference (−)):Set operations are operation that involve combining the rows from two or more relatin a dn eliminaing duplicates.<br/><br/>
18. Relational algebra:<br/>
    Relational algebra is a formal mathematical language used to describe the operations and transformations performed on relations (tables) within a relational database management system (DBMS). It is based on set theory and provides a theoretical foundation for querying and manipulating data in a relational database.<br/><br/>
