USE mysql;

CREATE user IF NOT EXISTS 'administrator'@'localhost' IDENTIFIED BY 'Y3agerK!m';
CREATE USER IF NOT EXISTS 'standart'@'localhost' IDENTIFIED BY 'std';

GRANT ALL PRIVILEGES ON * . * TO 'administrator'@'localhost';
GRANT GRANT OPTION ON * . * TO 'administrator'@'localhost';
GRANT DELETE, INSERT, SELECT, UPDATE ON * . * TO 'standart'@'localhost';

# Use this to fix the "definer-error":
/*
SELECT CONCAT("ALTER DEFINER=`administrator`@`localhost` VIEW ", 
table_name, " AS ", view_definition, ";") 
FROM information_schema.views 
WHERE table_schema='mysql';

ALTER DEFINER=`administrator`@`localhost` VIEW user AS select `mysql`.`global_priv`.`Host` AS `Host`,`mysql`.`global_priv`.`User` AS `User`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.plugin') in ('mysql_native_password','mysql_old_password'),ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.authentication_string'),''),'') AS `Password`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 1,'Y','N') AS `Select_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 2,'Y','N') AS `Insert_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 4,'Y','N') AS `Update_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 8,'Y','N') AS `Delete_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 16,'Y','N') AS `Create_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 32,'Y','N') AS `Drop_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 64,'Y','N') AS `Reload_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 128,'Y','N') AS `Shutdown_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 256,'Y','N') AS `Process_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 512,'Y','N') AS `File_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 1024,'Y','N') AS `Grant_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 2048,'Y','N') AS `References_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 4096,'Y','N') AS `Index_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 8192,'Y','N') AS `Alter_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 16384,'Y','N') AS `Show_db_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 32768,'Y','N') AS `Super_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 65536,'Y','N') AS `Create_tmp_table_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 131072,'Y','N') AS `Lock_tables_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 262144,'Y','N') AS `Execute_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 524288,'Y','N') AS `Repl_slave_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 1048576,'Y','N') AS `Repl_client_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 2097152,'Y','N') AS `Create_view_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 4194304,'Y','N') AS `Show_view_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 8388608,'Y','N') AS `Create_routine_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 16777216,'Y','N') AS `Alter_routine_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 33554432,'Y','N') AS `Create_user_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 67108864,'Y','N') AS `Event_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 134217728,'Y','N') AS `Trigger_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 268435456,'Y','N') AS `Create_tablespace_priv`,if(json_value(`mysql`.`global_priv`.`Priv`,'$.access') & 536870912,'Y','N') AS `Delete_history_priv`,elt(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.ssl_type'),0) + 1,'','ANY','X509','SPECIFIED') AS `ssl_type`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.ssl_cipher'),'') AS `ssl_cipher`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.x509_issuer'),'') AS `x509_issuer`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.x509_subject'),'') AS `x509_subject`,cast(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.max_questions'),0) as unsigned) AS `max_questions`,cast(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.max_updates'),0) as unsigned) AS `max_updates`,cast(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.max_connections'),0) as unsigned) AS `max_connections`,cast(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.max_user_connections'),0) as signed) AS `max_user_connections`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.plugin'),'') AS `plugin`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.authentication_string'),'') AS `authentication_string`,'N' AS `password_expired`,elt(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.is_role'),0) + 1,'N','Y') AS `is_role`,ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.default_role'),'') AS `default_role`,cast(ifnull(json_value(`mysql`.`global_priv`.`Priv`,'$.max_statement_time'),0.0) as decimal(12,6)) AS `max_statement_time` from `mysql`.`global_priv`;
*/

DROP USER IF EXISTS 'root'@'localhost';
DROP user IF EXISTS 'root'@'127.0.0.1';
DROP user IF EXISTS 'root'@'::1';
DROP user IF EXISTS 'pma'@'localhost';

FLUSH PRIVILEGES;

SELECT *
FROM mysql.user;