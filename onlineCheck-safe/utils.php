<?php
function showMsg($msg,$url,$isAlert=true){
	echo $msg."<br/>";
	if($isAlert){
	echo "<script type='text/javascript'>alert('".$msg."');location='".$url."';</script>";
	}else{
	echo "<script type='text/javascript'>location='".$url."';</script>";
	}
}
function showAndGoBack($msg){
		echo "<script>alert('".$msg."!');history.go(-1);</script>";
}

?>
