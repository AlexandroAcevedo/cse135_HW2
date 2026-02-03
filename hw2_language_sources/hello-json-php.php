<?php
header("Content-Type: application/json");
echo json_encode([
  "message" => "Hello from Alex",
  "language" => "PHP",
  "time" => gmdate("Y-m-d H:i:s") . " UTC",
  "ip" => $_SERVER['REMOTE_ADDR'],
  "user_agent" => $_SERVER['HTTP_USER_AGENT'] ?? "unknown"
], JSON_PRETTY_PRINT);
?>