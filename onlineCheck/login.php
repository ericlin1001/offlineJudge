<h1>Login</h1>
<form method="post" action="check.php">
Username:<input type="text" name="name"><br/>
Password:<input type="password" name="password"><br/>
<div class="button">
<input type="submit" value="Login">
<a href="register.php">Register</a>
</form>
<?php
require_once("footer.php");
?>
