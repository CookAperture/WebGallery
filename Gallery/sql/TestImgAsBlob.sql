USE `test`;

DROP TABLE IF EXISTS `products`;
CREATE TABLE IF NOT EXISTS `products` 
(
	product_id BIGINT PRIMARY KEY AUTO_INCREMENT,
	product_name VARCHAR(50),
	price DOUBLE,
	product_image LONGBLOB
) 
ENGINE = INNODB;