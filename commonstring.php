<?php

$string1 = 'AMITABH BACHCHAN';
$string2 = 'RAJNIKANTH';

$string1 = array_unique(str_split($string1));
$string2 = array_unique(str_split($string2));

foreach ($string1 as $key => $value) {
	if (!in_array($value, $string2)) {
        unset($string1[$key]);
    }
}
echo implode($string1);
?>
