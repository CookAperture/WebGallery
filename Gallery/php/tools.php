<?php

function load_sql(string $filename)
{
    return file_get_contents($filename);
    //return preg_replace('/\s*--.*$/im', '', file_get_contents($filename));
}

?>