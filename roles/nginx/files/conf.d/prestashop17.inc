location /$admin/ {
    if (!-e $request_filename) {
        rewrite ^/.*$ /$admin/index.php last;
    }
}

location /upload {
    location ~ \.php$ {
        deny all;
    }
}

location /img {
    location ~ \.php$ {
        deny all;
    }
}

location ~ ^/(app|bin|cache|classes|config|controllers|docs|localization|override|src|tests|tools|translations|travis-scripts|vendor|var)/ {
    deny all;
}

location ~ ^/modules/.*/vendor/ {
    deny all;
}

error_page 404 /index.php?controller=404; 
rewrite ^/([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$1$2$3.jpg last; 
rewrite ^/([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$1$2$3$4.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$1$2$3$4$5.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$4/$1$2$3$4$5$6.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$4/$5/$1$2$3$4$5$6$7.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$1$2$3$4$5$6$7$8.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$7/$1$2$3$4$5$6$7$8$9.jpg last; 
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$7/$8/$1$2$3$4$5$6$7$8$9$10.jpg last; 
rewrite ^/c/([0-9]+)(-[.*_a-zA-Z0-9-]*)(-[0-9]+)?/.+.jpg$ /img/c/$1$2$3.jpg last; 
rewrite ^/c/([a-zA-Z_-]+)(-[0-9]+)?/.+.jpg$ /img/c/$1$2.jpg last; 
rewrite ^/images_ie/?([^/]+).(jpe?g|png|gif)$ /js/jquery/plugins/fancybox/images/$1.$2 last; # testing 
rewrite ^/order$ /index.php?controller=order last;      # testing 

rewrite ^/api/?(.*)$ /webservice/dispatcher.php?url=$1 last; 
rewrite ^(/install(?:-dev)?/sandbox)/(.*) /$1/test.php last; 
