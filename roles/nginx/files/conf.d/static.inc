location /robots.txt { allow all; log_not_found off; access_log off; }
location ~ \.(htaccess|yml|log|twig|sass|git|tpl)$ { deny all; }

location ~* ^.+\.(gif|ico|png|jpg|jpeg|webp)$ { 
    access_log off; 
    log_not_found off; 
    error_log off; 
    expires max; 
    gzip off; 
    brotli off; 
    add_header Cache-Control "private"; 
    fastcgi_hide_header "Set-Cookie";
  }

location ~* \.(css|js)$ { 
    access_log off; 
    expires 30d; 
    log_not_found off; 
    add_header Vary Accept-Encoding; 
    fastcgi_hide_header "Set-Cookie";
  }

location ~* ^.+\.(mp4|rss|atom|zip|tgz|gz|rar|bz2|exe|ppt|tar|mid|midi|wav|bmp)$ {
		expires max;
		access_log off;
		log_not_found off;
		gzip off;
    brotli off;
    add_header Cache-Control "private"; 
    fastcgi_hide_header "Set-Cookie";
	}

location ~* ^.+\.(eot|otf|ttf|woff(?:2))$ {
		expires max;
		access_log off;
		log_not_found off;
    add_header Cache-Control "private"; 
    fastcgi_hide_header "Set-Cookie";
	}
