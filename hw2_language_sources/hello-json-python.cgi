#!/usr/bin/env python3
import os, json, datetime

print("Content-Type: application/json\n")
print(json.dumps({
  "message": "Hello from Alex",
  "language": "Python CGI",
  "time": str(datetime.datetime.utcnow()) + " UTC",
  "ip": os.environ.get("REMOTE_ADDR","unknown"),
  "user_agent": os.environ.get("HTTP_USER_AGENT","unknown")
}, indent=2))
