<?php

function listtest()
{
    return 'SELECT * FROM testy;';
}

function blobtest(String $productname, float $price, String $img)
{
    $img = base64_encode($img);
    return "INSERT INTO products(product_name, price, product_image) VALUES ('$productname', '$price', FROM_BASE64('$img'));";
}

function blobtestlist()
{
    return "SELECT * FROM `products`;";
}

?>