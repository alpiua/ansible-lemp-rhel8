location ~ \.tpl$ { deny all; return 404; }

rewrite ^/[a-zA-Z][a-zA-Z]/index.php(.*)$ /index.php$1;
rewrite ^/api/?(.*)$ /webservice/dispatcher.php?url=$1 last;
rewrite ^/([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$1$2$3.jpg last;
rewrite ^/([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$1$2$3$4.jpg last;
rewrite ^/([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$1$2$3$4$5.jpg last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$4/$1$2$3$4$5$6.jpg last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$4/$5/$1$2$3$4$5$6$7.jpg last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$1$2$3$4$5$6$7$8.jpg last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$7/$1$2$3$4$5$6$7$8$9.jpg last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.jpg$ /img/p/$1/$2/$3/$4/$5/$6/$7/$8/$1$2$3$4$5$6$7$8$9$10.jpg last;
rewrite ^/c/([0-9]+)(\-[\.*_a-zA-Z0-9-]*)(-[0-9]+)?/.+\.jpg$ /img/c/$1$2$3.jpg last;
rewrite ^/c/([a-zA-Z_-]+)(-[0-9]+)?/.+\.jpg$ /img/c/$1$2.jpg last;
rewrite ^/images_eei?([^/]+)\.(jpe?g|png|gif)$ /js/jquery/plugins/fancybox/images/$1.$2 last;
rewrite ^/page-not-found$ /index.php?controller=404 last;

rewrite ^/([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$1$2$3.webp last;
rewrite ^/([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$1$2$3$4.webp last;
rewrite ^/([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$1$2$3$4$5.webp last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$4/$1$2$3$4$5$6.webp last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$4/$5/$1$2$3$4$5$6$7.webp last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$4/$5/$6/$1$2$3$4$5$6$7$8.webp last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$4/$5/$6/$7/$1$2$3$4$5$6$7$8$9.webp last;
rewrite ^/([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])([0-9])(\-[_a-zA-Z0-9-]*)?(-[0-9]+)?/.+\.webp$ /img/p/$1/$2/$3/$4/$5/$6/$7/$8/$1$2$3$4$5$6$7$8$9$10.webp last;
rewrite ^/c/([0-9]+)(\-[\.*_a-zA-Z0-9-]*)(-[0-9]+)?/.+\.webp$ /img/c/$1$2$3.webp last;
rewrite ^/c/([a-zA-Z_-]+)(-[0-9]+)?/.+\.webp$ /img/c/$1$2.webp last;

location /as4_seositemap {
    rewrite ^/as4_seositemap-([0-9]+).xml$ /modules/pm_advancedsearch4/sitemap/seositemap-$1.xml break;
}
