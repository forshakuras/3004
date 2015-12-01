
--CREATE DATABASE TABLES
--=======================

create table if not exists students(
      firstName text NOT NULL, 
      lastName text NOT NULL,  
      gpa float not null, 
      pmSkill int not null, 
      database int not null, 
      java int not null, 
      cCpp int not null, 
      jsHtml int not null, 
      python int not null,
      debuggingTesting int not null,  
      documentation int not null, 
      mobile int not null, 
      networking int not null, 
      ui int not null, 
      algorithm int not null, 
      student_number int primary key NOT NULL  
      );

--INSERT DATA
--=======================
begin transaction;
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Allen','Chen',12.0,3,3,3,3,3,3,3,3,3,3,3,3,100890425);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('John','Smith',9.0,1,2,3,2,1,2,2,3,3,2,1,3,100123456);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jane','Smith',6.9,2,1,2,3,3,1,0,0,1,0,3,3,100111321);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jane','Doe',9.9,4,5,5,5,4,3,3,2,5,5,4,5,100211654);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('John','Doe',9.5,4,4,4,3,3,2,3,3,1,3,2,2,100311987);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jacky','Mao',3.2,3,2,2,3,2,2,3,2,2,3,2,2,100322322);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Daryl','Koh',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100999999);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jose','Bautista',8.5,4,4,4,3,3,1,1,0,1,0,0,4,100191919);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Will','Smith',9,2,2,2,3,3,1,1,5,1,5,3,3,100111222);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Katy','Perry',10,3,3,3,3,3,2,1,1,4,5,5,3,100111333);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Emilia','Clarke',9.4,5,5,2,3,3,1,4,3,1,1,2,2,100111444);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jaime','Lannister',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100111555);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jon','Snow',7.4,2,4,2,3,3,4,2,2,1,0,1,1,100111666);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Oberyn','Martell',12.0,5,5,5,4,4,4,3,3,4,4,4,4,100111777);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Remy','Gratwohl',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100111888);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Keena','Cai',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100111999);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Erica','Zhao',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100222111);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Francis','Loh',11,4,5,5,5,4,4,4,4,4,3,3,4,100111112);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Marco','Law',10.4,3,3,4,3,3,4,4,4,4,3,5,4,100111113);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jack','Yang',12.0,4,5,4,3,3,3,2,3,2,3,2,2,100111114);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Joey','Zhao',8.5,3,4,4,4,2,2,3,5,2,3,2,4,100111115);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Ning','Zhang',8.6,4,2,0,4,2,5,0,2,0,3,4,4,100111116);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Vanessa','Lewis',8.2,4,2,2,3,3,2,3,4,5,2,2,1,100111117);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Sam','Decker',6.4,2,2,2,3,3,0,0,5,5,3,1,4,100111118);
insert into students(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Michael','Charland',4.5,3,2,2,2,1,0,1,5,5,0,3,4,100111119);
end transaction;


create table if not exists projects(
      projectId integer primary key not null, 
      title text NOT NULL, 
      maxStudents int NOT NULL,
      currentStudents int NOT NULL,
      idealNumberStudents int NOt NULL,
      description text NOT NULL,  
      gpa float not null, 
      pmSkill int not null, 
      database int not null, 
      java int not null, 
      cCpp int not null, 
      jsHtml int not null, 
      python int not null,
      debuggingTesting int not null,  
      documentation int not null, 
      mobile int not null, 
      networking int not null, 
      ui int not null, 
      algorithm int not null
      );

--INSERT DATA
--=======================
begin transaction;
insert into projects(title,description,idealNumberStudents,maxStudents,currentStudents,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm) values ('Test Project222','Test project description2323232',4,6,3,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
insert into projects(title,description,idealNumberStudents,maxStudents,currentStudents,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm) values ('Test Project','Test project description',4,6,2,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
insert into projects(title,description,maxStudents,idealNumberStudents,currentStudents,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm) values ('Test Project1','Test project description12345',4,6,1,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
end transaction;

create table if not exists studentPreferences(
      firstName text NOT NULL, 
      lastName text NOT NULL,  
      gpa float not null, 
      pmSkill int not null, 
      database int not null, 
      java int not null, 
      cCpp int not null, 
      jsHtml int not null, 
      python int not null,
      debuggingTesting int not null,  
      documentation int not null, 
      mobile int not null, 
      networking int not null, 
      ui int not null, 
      algorithm int not null, 
      student_number int primary key NOT NULL
      );

--INSERT DATA
--=======================
begin transaction;
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Allen','Chen',12.0,3,3,3,3,3,3,3,3,3,3,3,3,100890425);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('John','Smith',9.0,1,2,3,2,1,2,2,3,3,2,1,3,100123456);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jane','Smith',6.9,2,1,2,3,3,1,0,0,1,0,3,3,100111321);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jane','Doe',9.9,4,5,5,5,4,3,3,2,5,5,4,5,100211654);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('John','Doe',9.5,4,4,4,3,3,2,3,3,1,3,2,2,100311987);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jacky','Mao',3.2,3,2,2,3,2,2,3,2,2,3,2,2,100322322);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Daryl','Koh',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100999999);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jose','Bautista',8.5,4,4,4,3,3,1,1,0,1,0,0,4,100191919);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Will','Smith',9,2,2,2,3,3,1,1,5,1,5,3,3,100111222);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Katy','Perry',10,3,3,3,3,3,2,1,1,4,5,5,3,100111333);

insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Emilia','Clarke',9.4,5,5,2,3,3,1,4,3,1,1,2,2,100111444);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jaime','Lannister',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100111555);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jon','Snow',7.4,2,4,2,3,3,4,2,2,1,0,1,1,100111666);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Oberyn','Martell',12.0,5,5,5,4,4,4,3,3,4,4,4,4,100111777);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Remy','Gratwohl',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100111888);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Keena','Cai',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100111999);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Erica','Zhao',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100222111);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Francis','Loh',11,4,5,5,5,4,4,4,4,4,3,3,4,100111112);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Marco','Law',10.4,3,3,4,3,3,4,4,4,4,3,5,4,100111113);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Jack','Yang',12.0,4,5,4,3,3,3,2,3,2,3,2,2,100111114);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Joey','Zhao',8.5,3,4,4,4,2,2,3,5,2,3,2,4,100111115);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Ning','Zhang',8.6,4,2,0,4,2,5,0,2,0,3,4,4,100111116);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Vanessa','Lewis',8.2,4,2,2,3,3,2,3,4,5,2,2,1,100111117);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Sam','Decker',6.4,2,2,2,3,3,0,0,5,5,3,1,4,100111118);
insert into studentPreferences(firstName,lastName,gpa,pmSkill,database,java,cCpp,jsHtml,python,debuggingTesting,documentation,mobile,networking,ui,algorithm,student_number) values ('Michael','Charland',4.5,3,2,2,2,1,0,1,5,5,0,3,4,100111119);
end transaction;

create table if not exists admin(
      firstName text NOT NULL, 
      lastName text NOT NULL,  
      admin_number int primary key NOT NULL
      );
begin transaction;
insert into admin(firstName,lastName,admin_number) values ('Christine','Laurendeau',999999999);
insert into admin(firstName,lastName,admin_number) values ('Gabe','Newell',666666666);
insert into admin(firstName,lastName,admin_number) values ('Carleton','U',222222222);
end transaction;

create table if not exists studentList(
      id INTEGER primary key autoincrement NOT NULL,
      student_number int NOT NULL, 
      projectId int NOT NULL,
      foreign key(projectId) references projects(projectId),
      foreign key(student_number) references students(student_number)
      );
begin transaction;
insert into studentList(student_number,projectId) values (100890425,1);
insert into studentList(student_number,projectId) values (100111119,1);
insert into studentList(student_number,projectId) values (100111118,1);
insert into studentList(student_number,projectId) values (100111333,2);
insert into studentList(student_number,projectId) values (100111444,2);
insert into studentList(student_number,projectId) values (100111555,3);
end transaction;
create table if not exists joinRequestList(
      id INTEGER primary key autoincrement NOT NULL,
      student_number int NOT NULL, 
      projectId int NOT NULL,
      foreign key(projectId) references projects(projectId),
      foreign key(student_number) references students(student_number)
      );
