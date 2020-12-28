<?php
// maybe autofilled or loaded from a conf file
$servername = "localhost";
$dbname = "test";
$username = "standart";
$password = "std";
require_once('../php/tools.php');
require_once('../php/querys.php');
$connection = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
$statement = $connection->prepare(listtest());
$statement->execute();
echo json_encode($statement->fetchAll(PDO::FETCH_ASSOC));
$connection = null;
?>