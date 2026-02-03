<?php
header("Content-Type: text/html");
echo "<!doctype html><html><head><title>Hello HTML PHP</title></head><body>";
echo "<h1>Hello from Alex</h1>";
echo "<p><strong>Language:</strong> PHP</p>";
echo "<p><strong>Time:</strong> " . gmdate("Y-m-d H:i:s") . " UTC</p>";
echo "<p><strong>Your IP:</strong> " . $_SERVER['REMOTE_ADDR'] . "</p>";
echo "</body></html>";
?>