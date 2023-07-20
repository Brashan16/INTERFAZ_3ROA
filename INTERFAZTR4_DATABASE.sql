/*==============================================================*/
/* DBMS name:      MySQL 5.0                                    */
/* Created on:     18/7/2023 12:07:52                           */
/*==============================================================*/


drop table if exists ESTADO_OBJETOS;

drop table if exists OBJETO;

drop table if exists USUARIO;

/*==============================================================*/
/* Table: ESTADO_OBJETOS                                        */
/*==============================================================*/
create table ESTADO_OBJETOS
(
   IDESTADOOBJ          int not null,
   ESFECHA              datetime not null,
   ESESTADO             bool not null,
   primary key (IDESTADOOBJ)
);

/*==============================================================*/
/* Table: OBJETO                                                */
/*==============================================================*/
create table OBJETO
(
   IDOBJETO             int not null,
   IDESTADOOBJ          int,
   OBJNOMBRE            varchar(15) not null,
   primary key (IDOBJETO)
);

/*==============================================================*/
/* Table: USUARIO                                               */
/*==============================================================*/
create table USUARIO
(
   IDUSUARIO            int not null,
   USUSUARIO            varchar(15) not null,
   USCONTRASENA         varchar(15),
   primary key (IDUSUARIO)
);

alter table OBJETO add constraint FK_RELATIONSHIP_1 foreign key (IDESTADOOBJ)
      references ESTADO_OBJETOS (IDESTADOOBJ) on delete restrict on update restrict;

