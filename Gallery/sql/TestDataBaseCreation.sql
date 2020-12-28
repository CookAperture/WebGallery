DROP DATABASE IF EXISTS `test`;
CREATE DATABASE IF NOT EXISTS `test`;
USE `test`;

DROP TABLE IF EXISTS `testy`;
CREATE TABLE `testy`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`name` VARCHAR(125) NOT NULL,
	`price` FLOAT(6,2) NULL,
	`stock` INT NULL
);

# fill lines for inserting test data