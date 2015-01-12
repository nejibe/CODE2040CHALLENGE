<?php
	date_default_timezone_set('America/Chicago'); //Set default date to central
	$string = "2015-01-06T03:51:00+00:00"; //ISO8610 formatted date
	$date = new DateTime($string); 
	$seconds = 100; 
	$date->add(new DateInterval("PT".$seconds."S")); 
	echo $date->format('Y-m-d\TH:i:s.Z\Z'); //Output date in ISO8610 format
?>