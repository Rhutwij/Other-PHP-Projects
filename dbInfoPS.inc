<?php
$mysqli=new mysqli("localhost","rat5181","rhutwij",'rat5181');             
if(mysqli_connect_errno()){
	printf("connection failed: ",mysqli_connect_errno());
	exit();
?>