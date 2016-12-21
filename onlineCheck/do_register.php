<?php
require_once("ms_login.php");
require_once("utils.php");

if(isset($_POST["submit"])&&$_POST['submit']=='register'){
	$user=$_POST['name'];
	$pass=$_POST['password'];
	$pass_confirm=$_POST['password_again'];
	$sid=$_POST['sid'];
	if($user==""||$pass==""||$sid==""||$pass_confirm==""){
		showAndGoBack('Please fill all!');
	}else{
		if($pass!=$pass_confirm){
			showAndGoBack("Two passwords are not the same");
		}else{
			if(registerUser($user,$pass,$sid)){
				showMsg("Register successfully!","login.php");
			}else{
				showAndGoBack("System is busy, please try again!");
			}
			
		}
	}
}else{
	echo "sub:".$_POST['submit'];
	showAndGoBack("Submit fails!");
}
