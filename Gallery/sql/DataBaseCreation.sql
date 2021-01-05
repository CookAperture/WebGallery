DROP DATABASE IF EXISTS `webgallery`;
CREATE DATABASE IF NOT EXISTS `webgallery`;
USE `webgallery`;

DROP TABLE IF EXISTS `img`;
CREATE TABLE `img`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`img` LONGBLOB NULL,
	`uploaddate` DATE NULL,
	`tags` INT NULL,
	`meta` INT
);

DROP TABLE IF EXISTS `tags`;
CREATE TABLE `tags`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`tag` VARCHAR NULL
);

DROP TABLE IF EXISTS `meta`;
CREATE TABLE `meta`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`title` VARCHAR NULL,
	`lastchanged` DATE NULL,
	`user` INT NULL
);

DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`name` VARCHAR NULL,
	`lastname` VARCHAR NULL,
	`creationdate` DATE NULL,
	`pw` VARCHAR NULL,
	`usermeta` INT NULL
);

DROP TABLE IF EXISTS `usermeta`;
CREATE TABLE `usermeta`
(
	`id` INT NOT NULL AUTO_INCREMENT KEY,
	`favorites` INT NULL,
	`lastchanged` DATE NULL,
	`onlinetime` INT NULL,
	`firends` INT NULL,
);