# Terms

<br/>
1. Join Types:<br/>
    There are my join types:<br/>
        -Natural join:A natural join is a type of join in a relational database that combines rows from two tables based on columns with same name adn data type. Ite eliminates duplicates columns from the result, preserving only one copy of each shared column.<br/>
        -Inner Join (using and on):An inner join combines rows from two tables based on a specific condition, typically using the "ON" keyword or the "USING" caluse, only the rows that satisfy the join conditon are included in the result set.<br/>
        -Left Join(Left Outer Join),Right Join(Right Outer Join), Full Outer Join(Full Join):A left join returns all the rows from the left (first) table and matching rows from the right(second) table. If there are not matches in the right table, NULL values are returned. A right join returns all the rows fromt the right (second) table and the maching rows from the left(first) table. IF there are no matches in the left table., NULL vales are returned.<br/>
        -Outer Join with USING and ON:The "USING" and "ON" clauses are used with outer join (left,right or full) to specify the join condition. "USING" is used when joining on columns with the same name, and "ON is used for more complex join conditon involving columns with different names.
2. View defintion:<br/>
     A view defintion in a relational database is a vritual table created by specifying a SQL query. It does not store data itself but represnents a subset of data from one or more tables in the database.:<br/>
        -Materialized Views: A materialized view is a database object that stores the results of a query, essentially precomputing and chaching the data from the underlying tables. Unline regular views, materialized views store the data physcially and are updated periodically to referlect changes in the source data.<br/>
        -View Maintenance: View maintenance refers to the process of keeping views up to date when underlying data in the source tables is modified. This involves automatically updating or recomputing the views data to reflex changes in the source data.<br/>
        -View Update:View udpate pertains to the ability to perform insert, udpate or delete operations on a view, which in turn modifies the underlying tables.<br/>
3. Transactions:<br/>
     In the context of databases, a transation refers to a sequence of one or more database operations(such as SQL statements) that are treated as a single, indivisible unti of work.:<br/>
        -Commit work:The "COMMIT WORK" command is used in a database management system to indicate that a transaction has been successfully completed and that its cahanges should be permanently saved to the database.<br/>
        -Rollback work:The "ROLLBACK WORK" command is used to cancel or undo changes made withing atransaction. It is typically used when an error or exception occurs during a transaction, and teh changes need to be discarded.<br/>
        -Atomic Transaction: An atomic transaction si a fundamental conecpt in the database systems that follow the prinicple of atomicity int eh ACID properties.An atomic transaction is an indivisible unit of work where either all the opeation withing the transaction are completed successfully(commit), or none of them are (rollback)<br/><br/>
