# Terms

<br/>
1.Transaction:<br/>
    A transaction in a database is a unit of work or a sequence of operations that are executed as a single, indivisible entity. It follows the ACID (Atomicity, Consistency, Isolation, Durability) properties, ensuring that database operations are either completed in their entirety or not at all, maintaining the integrity of the data even in the presence of failures.<br/>
2.ACID properties:<br/>
    ACID is an acronym that represents a set of properties crucial for ensuring the reliability and consistency of database transactions Atomicity,Consistency, Isolation, Durability.:<br/>
        -Atomicity:Ensures that a transaction is treated as a single, indivisible unit, meaning that either all of its operations are executed, or none at all. If any part of the transaction fails, the entire transaction is rolled back to its initial state.<br/>
        -Consistency:Guarantees that a transaction brings the database from one consistent state to another. The database must satisfy certain integrity constraints before and after the transaction, preserving the validity of the data.<br/>
        -Isolation: Ensures that the execution of one transaction is isolated from the execution of other transactions. Even though multiple transactions may be occurring concurrently, each transaction should appear as if it is the only transaction being executed, preventing interference.<br/>
        -Durability: Guarantees that once a transaction is committed, its effects persist in the system, even in the event of a system failure. The changes made by a committed transaction should be permanent and survive subsequent failures or restarts.<br/>
3.Inconsisten state:<br/>
    An inconsistent state in a database occurs when data does not adhere to the defined integrity constraints or rules. This can happen as a result of a failed or partially executed transaction, hardware or software failures, or programming errors. In an inconsistent state, the data may violate the expected relationships or conditions specified by the database schema, leading to a situation where the information is unreliable or contradictory. Maintaining consistency is a key goal in database management to ensure the accuracy and reliability of stored information.<br/>
4.Storage types:<br/>
    -Volatile Storage:<br/>
        Volatile storage refers to a type of computer memory that loses its contents when the power is turned off. In the context of databases, volatile storage is often used for temporary data or caching purposes. Data stored in volatile storage is not persistent and needs to be reloaded or reconstructed after a system restart.<br/>
    -Non-volatile Storage:<br/>
        Non-volatile storage is a type of computer memory that retains its contents even when the power is turned off. In databases, non-volatile storage is crucial for storing permanent or long-term data. It ensures that data remains intact across system reboots and is typically used for storing the main database files.<br/>
    -Stable Storage:<br/>
        Stable storage is a concept in databases that refers to a level of storage reliability that survives both software and hardware failures. It combines the characteristics of non-volatile storage and mechanisms to recover from failures, ensuring the durability and consistency of data. Stable storage is a key component in maintaining the integrity of a database in the face of various failures.<br/>
5.Concurrency-control system:<br/>
    A concurrency-control system in a database is responsible for managing and coordinating the simultaneous execution of multiple transactions to ensure data consistency and integrity. It addresses issues that may arise when multiple transactions attempt to access and modify the same data concurrently. The primary goals of a concurrency-control system include maintaining the ACID properties (Atomicity, Consistency, Isolation, Durability) and preventing conflicts such as data inconsistencies or lost updates.Concurrency control involves techniques such as locking mechanisms, isolation levels, and transaction scheduling to coordinate the execution of transactions in a way that avoids interference and maintains the overall reliability of the database. This ensures that transactions appear to be executed in a serial order, even though they may be processed concurrently, preventing undesired effects on the data due to simultaneous access.<br/>
6.Recovery system:<br/>
    A recovery system in a database is a set of mechanisms and procedures designed to restore the database to a consistent and reliable state after a failure or unexpected event. The primary goal of a recovery system is to ensure the durability and integrity of data by recovering from various types of failures, such as hardware failures, software crashes, or transaction errors.The key components are: Logging, Checkpointing, Transaction Rollback, Transaction Commit, Recovery Algorithms<br/>
7.Transaction state:<br/>
    -Active:<br/>
        The transaction is in the active state when it is executing its operations. It has started but has not yet reached a point of completion or termination.
    -Partially Committed:<br/>
        The partially committed state occurs after a transaction has executed all its operations successfully, and it is awaiting confirmation to make its changes permanent. At this point, the transaction is not yet committed but is in the process of being committed.
    -Failed::<br/>
        The failed state indicates that a transaction has encountered an error or an exceptional condition during its execution, preventing it from continuing with normal processing. In this state, the transaction cannot proceed further.
    -Aborted:<br/>
        When a transaction is in the aborted state, it means that it has been rolled back or undone due to a failure or an explicit abort command. The changes made by the transaction are reverted, bringing the database back to its state before the transaction started.
    -Committed:<br/>
        The committed state signifies that a transaction has successfully completed all its operations, and its effects on the database have been made permanent. Once committed, the changes made by the transaction persist even in the face of system failures.
    -Terminated:<br/>
        The terminated state is a general term indicating that the transaction has concluded, encompassing both committed and aborted transactions. It reflects the end of the transaction's lifecycle, whether it was successful and committed or unsuccessful and aborted.<br/>
8.Compensating transaction:<br/>
    A compensating transaction is a concept used in the context of long-running or distributed transactions to address the need for transactional consistency and error recovery. When a transaction encounters an error or needs to be rolled back, a compensating transaction is designed to reverse or undo the effects of the original transaction, bringing the system back to a consistent state.<br/>
9.Transaction:<br/>
    -Restart: Transaction restart refers to the process of resuming the execution of a transaction that was temporarily halted or interrupted. This interruption could be due to various reasons, such as a system failure, network issues, or other unforeseen events. Restarting a transaction involves re-executing the transaction from a predefined point or starting it afresh, ensuring that the operation is completed successfully.<br/>
    -Kill:Transaction kill, or transaction termination, involves forcibly stopping the execution of a transaction before it completes. This action is typically taken in response to a user command or due to a critical error in the transaction. Killing a transaction prevents it from making permanent changes to the database and helps maintain data consistency and integrity.<br/>
10.Observable external writes:<br/>
    Observable external writes refer to changes made to a database that are detectable or monitored from outside the database system. These changes might include modifications to the data stored in the database that are externally visible, and mechanisms are in place to observe, track, or respond to these alterations.<br/>
11.Concurrent executions:<br/>
    Concurrent executions refer to the simultaneous execution of multiple transactions or operations within a database system. In a multi-user environment, where multiple users or processes access the database concurrently, the concept of concurrency becomes crucial for system efficiency and responsiveness.<br/>
12.Serial execution:<br/>
    Serial execution refers to the sequential and non-concurrent processing of transactions or operations within a database system. In a serially executed environment, each transaction is processed one at a time, and the next transaction begins only after the completion of the previous one.<br/>
13.Schedules:<br/>
    In the context of a database, a schedule refers to the chronological order or sequence in which transactions are executed. It provides a timeline of when various operations within different transactions occur<br/>
14.Conflict of operations:<br/>
    A conflict of operations occurs in a concurrent execution environment when two or more transactions attempt to perform operations on the same data concurrently, and at least one of these operations is a write operation<br/>
15.Confict equivalences:<br/>
    Conflict equivalence refers to a concept in concurrency control within a database system, specifically when analyzing schedules of transactions. Two schedules are considered conflict equivalent if they result in the same final state of the database, despite having different interleavings of transaction operations.<br/>
16.Conflict serializability:<br/>
    Conflict serializability is a concept in database concurrency control that ensures the consistency and correctness of a schedule involving multiple transactions. A schedule is considered conflict serializable if it is equivalent to some serial execution of the transactions, preserving the order of conflicting operations<br/>
17.Serializability testing:<br/>
    Serializability testing is a process used in database management systems to verify whether a given schedule of transactions adheres to the principle of serializability. The goal is to ensure that the concurrent execution of transactions produces results equivalent to some serial execution, preventing anomalies and maintaining data consistency<br/>
18.Precedence graph:<br/>
    A precedence graph is a graphical representation used in the context of concurrency control in a database system to analyze the dependencies among transactions and identify potential conflicts. It helps in determining the serializability of a schedule by visualizing the order in which conflicting operations occur<br/>
19.Serializability order:<br/>
    The term "serializability order" refers to the sequential arrangement or order of transactions in a schedule that ensures the execution is equivalent to some serial execution of those transactions. Ensuring serializability is a fundamental goal in database concurrency control to maintain consistency and integrity.<br/>
20.Recoverable schedules:<br/>
    a recoverable schedule is a type of schedule that ensures that, in the event of a transaction failure, the effects of committed transactions are durable and can be recovered. The goal is to prevent the loss of committed data due to a failure and maintain the consistency and integrity of the database<br/>
21.Cascading rollback:<br/>
    Cascading rollback, also known as cascading abort or cascading failure, refers to a situation in a database system where the failure or rollback of one transaction leads to the subsequent rollback of other transactions that depend on or have been influenced by the failing transaction<br/>
22.Cascadeless schedules:<br/>
    Cascadeless schedules, also known as cascadeless recoverable schedules, are a type of schedule in a database system that avoids the cascading effect of rollbacks. In other words, a cascadeless schedule ensures that the failure or rollback of a single transaction does not lead to the subsequent rollback of other transactions that have already committed. This property helps in maintaining consistency and reduces the impact of failures on the overall system<br/>
23.Isolation levels:<br/>
    -Serializable:<br/>
        Transactions act as if they're the only ones running, preventing any interference.<br/>
    -Repeatable Read:<br/>
        Once you read something in a transaction, it won't change until the transaction is done.<br/>
    -Read Committed:<br/>
        You see only the changes that are confirmed, but others can change the data while you're looking.<br/>
    -Read Uncommitted:<br/>
        You can see changes even if they're not confirmed, and others can change the data while you're looking.<br/>
24.Dirty writes:<br/>
    A dirty write occurs when one transaction updates a data item, and another concurrent transaction writes to the same item before the first transaction is committed. This can lead to inconsistencies in the database because the second transaction is writing to data that may be changed or rolled back by the first transaction.<br/>
25.