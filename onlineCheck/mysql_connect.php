<?php
//function(){
//	$db=mysql_connect("localhost","root","ailab") or die("Connect database fails!");
//	mysql_select_db("onlineCheck") or die("Can't connect to database:onlineCheck ".mysql_error());
//}
function getDB(){
$db=new mysqli('localhost','root','ailab','onlineCheck');
if (mysqli_connect_errno()){
	die("Unable to connect database!").mysqli_connect_error();
}
return $db;
}


function getUserSid($name){
	$db=getDB();
	$res=fetchUserData();
	while($row=$res->fetch_array()){
		if($row['username']==$name){
			return $row['student_id'];
		}
	}
	return null;
}
function fetchUserData(){
	$db=getDB();
	$sql="select * from user";
	$result=$db->query($sql);
	return $result;
}
function checkUserPass($name,$pass){
	$db=getDB();
	$res=fetchUserData();
	while($row=$res->fetch_array()){
		if(($row['username']==$name)&&($row['password']==$pass)){
			return true;
		}
	}
	return false;
}
function checkUser($name){
	$db=getDB();
	$res=fetchUserData();
	while($row=$res->fetch_array()){
		if($row['username']==$name){
			return true;
		}
	}
	return false;
}
function registerUser($name,$pass,$studentid){
	$db=getDB();
$sql="insert into user (username,password,student_id) values ('$name','$pass','$studentid')";
$res=$db->query($sql);
if($res)return true;
return false;
}
?>
