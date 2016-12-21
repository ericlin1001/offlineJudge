<?php

require_once('utils.php');
require_once('mysql_connect.php');
$url="";
$code="";
$isLoose="";
if(isset($_POST['url'])&&$_POST['url']!="" && isset($_POST['code']) && $_POST['code']!=""){
		$url=$_POST['url'];
		$code=$_POST['code'];
		if(isset($_POST['isLoose'])&&$_POST['isLoose']!=""){
			$isLoose=$_POST['isLoose'];
		}
	}
function doCheckCode($chapter,$pid,$code,$isLoose){
	$filename="/tmp/onlineCheck_tmp".rand().".cpp";
	$fh=fopen($filename,"w");
	fwrite($fh,$code);
	passthru("./doCheckCode.sh ".$chapter." ".$pid." ".$filename." ".$isLoose);
}
session_start();
if(!(isset($_SESSION['username'])&&$_SESSION['username']!="" && isset($_SESSION['isLogin'])&&$_SESSION['isLogin'])){
	showMsg("Please login first","login.php");
}else{
	$name=$_SESSION['username'];
	$sid=getUserSid($name);
?>
	<h1>Welcome <?php echo $name ?>!</h1>
<form method="post" action="main.php">
URL(填入你需要检查的问题soj网址):<input type="text" name="url" size="50" value="<?php echo $url; ?>"/><br/>
Your Code(填入你的代码):<br/><textarea rows="8" cols="50" name="code">
<?php echo $code; ?>
</textarea><br/>
	Is Loose Check:<input type="checkbox" name="isLoose" value="1" <?php if($isLoose=="1"){ ?> checked="checked" <?php } ?>/><br/>
<input type="submit" name="submit" value="check"/>
</form>
<?php
	if($url!=""){
		preg_match_all("/pid=([0-9]*)/",$url,$pat);
		$mypid=$pat[1][0];
		preg_match_all("/cid=([0-9]*)/",$url,$pat);
		$mycid=$pat[1][0];

		$chapter="";
		switch($mycid){
		case 2446:
			$chapter="07";
			break;
		case 2460:
			$chapter="08";
			$mypid=1016-$mypid+1000;
			break;

		case 2470:
			$chapter="10";
			break;
		default:
			break;
		}
		if($chapter==""){
			echo "<p>Cannot check this chapter, please contact the administrator(Ericlin,463222898@qq.com).</p>";
		}else{
			echo "<p>checking your code, please wait a moment...</p>";
			doCheckCode($chapter,$mypid,$code,$isLoose);
		}

	}
}
require_once("footer.php");
?>

