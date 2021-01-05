<?php

define('DB_NAME', 'test');
define('DB_USER', 'standart');
define('DB_PASSWORD', 'std');
define('DB_HOST', 'localhost');

$connection = new PDO("mysql:host=" . DB_HOST . "; dbname=" . DB_NAME, DB_USER, DB_PASSWORD);
$connection->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
$connection->setAttribute(PDO::ATTR_EMULATE_PREPARES, false);

?>