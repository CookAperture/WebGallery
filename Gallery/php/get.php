<?php

require_once('../php/tools.php');
require_once('../php/querys.php');
require_once('../php/config.php');

$statement = $connection->prepare(listtest());
$statement->execute();
echo json_encode($statement->fetchAll(PDO::FETCH_ASSOC));
$connection = null;

?>