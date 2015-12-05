
--CREATE DATABASE TABLES
--=======================

create table if not exists students(
      firstName text NOT NULL, 
      lastName text NOT NULL,  
      gpa float not null, 
      objectDev int not null, 
      database int not null, 
      webDev int not null, 
      flexibility int not null, 
      communication int not null, 
      workExperience int not null,
      criticalThinking int not null,  
      documentation int not null, 
      teamwork int not null, 
      multitasking int not null, 
      leadership int not null, 
      agileKnowledge int not null, 
      student_number int primary key NOT NULL  
      );

--INSERT DATA
--=======================
begin transaction;
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Allen','Chen',12.0,3,3,3,3,3,3,3,3,3,3,3,3,100890425);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('John','Smith',9.0,1,2,3,2,1,2,2,3,3,2,1,3,100000001);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jane','Smith',6.9,2,1,2,3,3,1,0,0,1,0,3,3,100000002);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jane','Doe',9.9,4,5,5,5,4,3,3,2,5,5,4,5,100000003);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('John','Doe',9.5,4,4,4,3,3,2,3,3,1,3,2,2,100000004);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jacky','Mao',3.2,3,2,2,3,2,2,3,2,2,3,2,2,100000005);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Daryl','Koh',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000006);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jose','Bautista',8.5,4,4,4,3,3,1,1,0,1,0,0,4,100000007);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Will','Smith',9,2,2,2,3,3,1,1,5,1,5,3,3,100000008);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Katy','Perry',10,3,3,3,3,3,2,1,1,4,5,5,3,100000009);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Emilia','Clarke',9.4,5,5,2,3,3,1,4,3,1,1,2,2,100000010);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jaime','Lannister',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000011);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jon','Snow',7.4,2,4,2,3,3,4,2,2,1,0,1,1,100000012);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Oberyn','Martell',12.0,5,5,5,4,4,4,3,3,4,4,4,4,100000013);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Remy','Gratwohl',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100000014);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Keena','Cai',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000015);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Erica','Zhao',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100000016);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Francis','Loh',11,4,5,5,5,4,4,4,4,4,3,3,4,100000017);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Marco','Law',10.4,3,3,4,3,3,4,4,4,4,3,5,4,100000018);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jack','Yang',12.0,4,5,4,3,3,3,2,3,2,3,2,2,100000019);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Joey','Zhao',8.5,3,4,4,4,2,2,3,5,2,3,2,4,100000020);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Ning','Zhang',8.6,4,2,0,4,2,5,0,2,0,3,4,4,100000021);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Vanessa','Lewis',8.2,4,2,2,3,3,2,3,4,5,2,2,1,100000022);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Sam','Decker',6.4,2,2,2,3,3,0,0,5,5,3,1,4,100000023);
insert into students(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Michael','Charland',4.5,3,2,2,2,1,0,1,5,5,0,3,4,100000024);
end transaction;


create table if not exists projects(
      projectId integer primary key not null, 
      title text NOT NULL, 
      maxStudents int NOT NULL,
      currentStudents int NOT NULL,
      idealNumberStudents int NOt NULL,
      description text NOT NULL,  
      gpa float not null, 
      objectDev int not null, 
      database int not null, 
      webDev int not null, 
      flexibility int not null, 
      communication int not null, 
      workExperience int not null,
      criticalThinking int not null,  
      documentation int not null, 
      teamwork int not null, 
      multitasking int not null, 
      leadership int not null, 
      agileKnowledge int not null
      );

--INSERT DATA
--=======================
begin transaction;
insert into projects(title,description,idealNumberStudents,maxStudents,currentStudents,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values ('Test Project222','Test project description2323232',4,6,3,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
insert into projects(title,description,idealNumberStudents,maxStudents,currentStudents,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values ('Test Project','Test project description',4,6,2,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
insert into projects(title,description,idealNumberStudents,maxStudents,currentStudents,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values ('Test Project1','Test project description12345',4,6,1,2.3,1,0,1,0,0,0,0,1,1,0,1,0);
end transaction;

create table if not exists studentPreferences(
      firstName text NOT NULL, 
      lastName text NOT NULL,  
      gpa float not null, 
      objectDev int not null, 
      database int not null, 
      webDev int not null, 
      flexibility int not null, 
      communication int not null, 
      workExperience int not null,
      criticalThinking int not null,  
      documentation int not null, 
      teamwork int not null, 
      multitasking int not null, 
      leadership int not null, 
      agileKnowledge int not null, 
      student_number int primary key NOT NULL  
      );

--INSERT DATA
--=======================
begin transaction;
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Allen','Chen',12.0,3,3,3,3,3,3,3,3,3,3,3,3,100890425);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('John','Smith',9.0,1,2,3,2,1,2,2,3,3,2,1,3,100000001);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jane','Smith',6.9,2,1,2,3,3,1,0,0,1,0,3,3,100000002);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jane','Doe',9.9,4,5,5,5,4,3,3,2,5,5,4,5,100000003);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('John','Doe',9.5,4,4,4,3,3,2,3,3,1,3,2,2,100000004);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jacky','Mao',3.2,3,2,2,3,2,2,3,2,2,3,2,2,100000005);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Daryl','Koh',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000006);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jose','Bautista',8.5,4,4,4,3,3,1,1,0,1,0,0,4,100000007);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Will','Smith',9,2,2,2,3,3,1,1,5,1,5,3,3,100000008);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Katy','Perry',10,3,3,3,3,3,2,1,1,4,5,5,3,100000009);

insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Emilia','Clarke',9.4,5,5,2,3,3,1,4,3,1,1,2,2,100000010);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jaime','Lannister',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000011);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jon','Snow',7.4,2,4,2,3,3,4,2,2,1,0,1,1,100000012);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Oberyn','Martell',12.0,5,5,5,4,4,4,3,3,4,4,4,4,100000013);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Remy','Gratwohl',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100000014);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Keena','Cai',12.0,5,5,5,5,5,5,5,5,5,5,5,5,100000015);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Erica','Zhao',6.5,3,3,2,3,3,4,4,4,4,3,2,4,100000016);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Francis','Loh',11,4,5,5,5,4,4,4,4,4,3,3,4,100000017);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Marco','Law',10.4,3,3,4,3,3,4,4,4,4,3,5,4,100000018);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Jack','Yang',12.0,4,5,4,3,3,3,2,3,2,3,2,2,100000019);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Joey','Zhao',8.5,3,4,4,4,2,2,3,5,2,3,2,4,100000020);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Ning','Zhang',8.6,4,2,0,4,2,5,0,2,0,3,4,4,100000021);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Vanessa','Lewis',8.2,4,2,2,3,3,2,3,4,5,2,2,1,100000022);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Sam','Decker',6.4,2,2,2,3,3,0,0,5,5,3,1,4,100000023);
insert into studentPreferences(firstName,lastName,gpa,objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge,student_number) values ('Michael','Charland',4.5,3,2,2,2,1,0,1,5,5,0,3,4,100000024);
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
      projectId int NOT NULL
      );
begin transaction;
insert into studentList(student_number,projectId) values (100890425,1);
insert into studentList(student_number,projectId) values (100000001,1);
insert into studentList(student_number,projectId) values (100000002,1);
insert into studentList(student_number,projectId) values (100000001,2);
insert into studentList(student_number,projectId) values (100000002,2);
insert into studentList(student_number,projectId) values (100000001,3);
end transaction;
create table if not exists joinRequestList(
      id INTEGER primary key autoincrement NOT NULL,
      student_number int NOT NULL, 
      projectId int NOT NULL,
      foreign key(projectId) references projects(projectId),
      foreign key(student_number) references students(student_number)
      );
create table if not exists projectWeight(
      projectId integer primary key not null, 
      objectDev int not null, 
      database int not null, 
      webDev int not null, 
      flexibility int not null, 
      communication int not null, 
      workExperience int not null,
      criticalThinking int not null,  
      documentation int not null, 
      teamwork int not null, 
      multitasking int not null, 
      leadership int not null, 
      agileKnowledge int not null
      );

--INSERT DATA
--=======================
begin transaction;
insert into projectWeight(objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values (1,0,1,0,0,0,0,1,1,0,1,0);
insert into projectWeight(objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values (0,1,0,0,1,0,1,0,1,0,1,0);
insert into projectWeight(objectDev,database,webDev,flexibility,communication,workExperience,criticalThinking,documentation,teamwork,multitasking,leadership,agileKnowledge) values (0,1,1,0,1,0,0,0,1,0,1,0);
end transaction;
create table if not exists studentTeamList(
      id INTEGER primary key autoincrement NOT NULL,
      teamId int NOT NULL,
      student_number int NOT NULL, 
      projectId int NOT NULL
      );
