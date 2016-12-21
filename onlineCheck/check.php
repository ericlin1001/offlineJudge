<?php
require_once("ms_login.php");
require_once("utils.php");
$name=$_POST['name'];
$pass=$_POST['password'];
if($name==""){
	showMsg("Please input USERNAME","login.php");
}elseif($pass==""){
	showMsg("Please input PASSWORD","login.php");
}else{
	if(checkUserPass($name,$pass)){
		session_start();
		$_SESSION['username']=$name;
		$_SESSION['isLogin']=true;
		showMsg("Login successfully!","main.php",false);
	}else{
		showMsg("Incorrect Password!","login.php");
	}

}
?>
