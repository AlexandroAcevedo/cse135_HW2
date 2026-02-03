#!/usr/bin/env python3
import os, datetime

print("Content-Type: text/html\n")
print("<!doctype html><html><head><title>Hello HTML Python</title></head><body>")
print("<h1>Hello from Alex</h1>")
print("<p><strong>Language:</strong> Python CGI</p>")
print("<p><strong>Time:</strong>", datetime.datetime.utcnow(), "UTC</p>")
print("<p><strong>Your IP:</strong>", os.environ.get("REMOTE_ADDR","unknown"), "</p>")
print("</body></html>")
