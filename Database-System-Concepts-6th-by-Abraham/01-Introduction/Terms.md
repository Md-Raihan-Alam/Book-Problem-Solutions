# Terms

<br/>
1. Dabase Management System (DBMS):<br/>
    A DBMS is software that manages databases. It provides an interface to interact with database, handle data storage, retrieval, security, concurrecnty control, and other management tasks. Examples of DBMS include MySQL, Oracle, SQL Server, and PostgreSQL.<br/><br/>
2. Dabase System Applications:<br/>
    There are software applications that utilize a dabase sytem to store and manage data. Examples include invetory management systems, customer relationship management (CRM) system, human rsource management system (HRMS) and e-commerce platorforms<br/><br/>
3. File-processing Systems:<br/>
    File-prcessing systems are older data management sytems that use flat files to store and retireve data. They lack the davanced features and capabilities of DBMS, such as data integrity, concurrent access control, and efficient data retireval.<br/><br/>
4. Data Inconsistency:<br/>
    Data inconsistency refers to a state where data exists in multiple locations or in different formats and is not synchronized.<br/><br/>
5. Consistency Constraints:<br/>
    Consistency constraints are rules or conditions applied to a database to ensure data integrity. They define the permissible values and relationships between data elements, preventing inconsistencies and maintaining data accuracy.<br/><br/>
6. Data Abstraction:<br/>
    Data abstraction is a concept that hides complex details and presents simplieifed view of data to user or applications<br/><br/>
7. Instance:<br/>
    An instance refers to a specific snapshot or representation of a database at a given moment.<br/><br/>
8. Schema:<br/>
    A schema defines the logical structure and organization of a database. It specifies the tables, theire attributes, relationships and constraints. <br/>
        - Physcial Schema:Describes how the data is physically stored on the storage media.<br/>
        - Logical Schema: Describes the logical relationships, constrains and rules of the data tore in the databse.<br/><br/>
9. Physical Data Independence:<br/>
    Physical data independece refers to the ability to modify the physical store or organization of data without affecting the logical schema or appilcation programs<br/><br/>
10. Data models:<br/>
    Data modesl are conceptual frameworks used to represent and organize data withing a databse system. Common data models include:<br/>
        -Entity-Relationship Model(ER Model): The Entiti-Relationship (ER) model is a conceptual data model used to represent the structure of a databse. It focuses on the relations between entities(object, concepts or things) in the real world and represent them as entites, attributes and relationships<br/>
        -Relational Data Model: The Relational Data Model is a data model that organizes data into tables consisting of rows(tuple) and columns(attributes).<br/>
        -Object-Based Data Model:The Object-Based Data Model is a data model that extends the relational model by incorporating object-oriented programming concepts<br/>
        -Semistrcutred Data Model:The Semistructured Data Model is a flexible and schema-less data model that allows data with varying structures and formats( such as XML Documents, JSON data).<br/><br/>
11. Database Languages:<br/>
    Languages that are use to manipulate the data in databases.some are:
        -Data Definition Language (DDL):Used to define and manage database objects and their structure, such as tables, indexes, and views.<br/>
        -Data Manipulation Language (DML): Used to manipulate and retrieve data from the database, including operations like INSERT, UDPATE, DELETE, and SELECT.<br/>
        -Query Language:A specific language, such as SQL, used to retirive data froma database.<br/><br/>
12. Metadata:<br/>
    Metadata refers to data bout database itself. It includes information about the structure, definition, constrainst and relationships of the data stored in the database.<br/><br/>
13. Application Program:<br/>
    An application program is software developed to perform specific tasks or function using data from a databse. It interacts with DBM to store, retriev and manipulate data according to the application's requirements.<br/><br/>
14. Normalization:<br/>
    It is a process used for data modeling or database creation, where you organize your data and tables so it can be added and updated efficiently.<br/><br/>
15. Data dictionary:<br/>
    It contains information about the structure of any database object. It is the repository of information that governs the metadata.<br/><br/>
16. Storage manager:<br/>
    It is a program that provides an interface between the data stored in the database and the queries received. It maintains the consistency and integrity of the database by applying constraints and executing DCL statements<br/><br/>
17. Query processor:<br/>
    It interprets requests (queries) recevied from end-users via an application program into instructions. It also executes user rqeuests recieved from the DML compiler.<br/><br/>
18. Transactions:<br/>
    A transaction is a signle logical unit of work that accesses and possibly modifies the contents of a database.Transactions access data using read and write operations.Some parts of it are:<br/>
        -Atomicity:This property ensures that eitther the entire transaction takes place at once or doesn't happend at all.There is no midway i.e. transactions do not occur partially.<br/>
        -Failure recovery: Recovery has to store a consitent database state fater a system or media failure.<br/>
        -Concurrency control:It is the task of scheduling transactions such that their serializability can be guaranteed.<br/><br/>
19. Two-and Three-tier database architectures:<br/>
    A 2-Tier architecture in DBMS is a Database achitecture where the presentation layer runs on a client and data is stored on a server called the second tier. A 3-Tier Architecture in DBMS is the most popular client-server architecture in DBMS in which the developent and maintenance of functional processes, logic, data access, data storage and user interface is done independently as sseparate modules.<br/><br/>
20. Data mining:<br/>
    Data mining is the process of discovering patterns and knowledge from large amounts of data.<br/><br/>
21. Database administrator (DBA): A database administrator (DBA) is responsible for the performace, integrity and security of a database.<br/><br/>
