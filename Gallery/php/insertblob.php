<?php

require_once('../php/tools.php');
require_once('../php/querys.php');
require_once('../php/config.php');

$products = [];

$products[] = [
              'product_name' => 'VIRTUAL SERVERS',
              'price' => 5,
              'product_image' => file_get_contents("../ressources/img/stamp-173x38-f087cb4d.gif")
              ];

$products[] = [
              'product_name' => 'MANAGED KUBERNETES',
              'price' => 30,
              'product_image' => file_get_contents("../ressources/img/MVIMG_20190814_200213456-01.jpeg")
              ];

$products[] = [
              'product_name' => 'MySQL DATABASES',
              'price' => 15,
              'product_image' => file_get_contents("../ressources/img/stamp-173x38-f087cb4d.gif" )
              ];

foreach ($products as $product) 
{
    $sql = blobtest($product['product_name'], $product['price'], $product['product_image']);
    //var_dump($sql);
    $stmt = $connection->prepare($sql);
    $stmt->execute();
}

echo "Should be done!";

$sql = blobtestlist();
$stmt = $connection->prepare($sql);
$stmt->execute();

echo '<table border = "1" align = "center"> <caption>Products Database</caption>';
echo '<tr>';
echo '<th>Product Id</th>';
echo '<th>Product Name</th>';
echo '<th>Price</th>';
echo '<th>Product Image</th>';
echo '</tr>';

while ($row = $stmt->fetch(PDO::FETCH_ASSOC)) 
{
    echo '<tr>';
    echo '<td>' . $row['product_id'] . '</td>';
    echo '<td>' . $row['product_name'] . '</td>';
    echo '<td>' . $row['price'] . '</td>';
    echo '<td>' .
    '<img src = "data:image/png/jpeg/gif;base64,' . base64_encode($row['product_image']) . '" width = "50px" height = "50px"/>'
    . '</td>';
    echo '</tr>';
}
echo '</table>';

$connection = null;

?>