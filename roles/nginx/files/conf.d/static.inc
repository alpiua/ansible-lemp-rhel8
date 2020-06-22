location ~ /\.ht { deny  all; }
location /robots.txt { allow all; log_not_found off; access_log off; }
location ~ \.(htaccess|yml|log|twig|sass|git|tpl)$ { deny all; }

location ~* ^.+\.jpg  { access_log off; log_not_found off; error_log off; expires max; gzip off; add_header Cache-Control "public";}
location ~* ^.+\.jpeg { access_log off; log_not_found off; error_log off; expires max; gzip off; add_header Cache-Control "public";}
location ~* ^.+\.gif  { access_log off; log_not_found off; error_log off; expires max; gzip off; add_header Cache-Control "public";}
location ~* ^.+\.ico  { access_log off; log_not_found off; error_log off; expires max; gzip off; add_header Cache-Control "public";}
location ~* ^.+\.png  { access_log off; log_not_found off; error_log off; expires max; gzip off; add_header Cache-Control "public";}
location ~* ^.+\.css  { access_log off; log_not_found off; expires 31d; add_header Vary Accept-Encoding; add_header Cache-Control "public, must-revalidate, proxy-revalidate";}
location ~* ^.+\.(svg|eot|otf|ttf|woff(?:2)?)  { access_log off; log_not_found off; error_log off; expires max; add_header Cache-Control "public";}
