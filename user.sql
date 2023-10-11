create database sam;

use sam;

create table if not exists users(u_id int(10) PRIMARY KEY, username char(25), password char(50));

insert into users values(1,"Raman","Hello@123");
insert into users values(2,"Anup","123456");
insert into users values(3,"Chetan","Chetan@456");
insert into users values(4,"Dinesh","Hi@101");
insert into users values(5,"Kapil","KapilisKing@100");
