set $pma pma3388;

location /$pma/ {

      #  auth_basic           "closed site";
      #  auth_basic_user_file ./pass/pma;

     location ~* ^/$pma/(.+\.(jpg|jpeg|gif|css|png|js|ico|html|xml|txt))$ {
        alias /usr/share/phpmyadmin/$1;
        }
     
     location ~ /(libraries|setup) {
        return 404;
        }
        
     location ~ \.php$ {
        fastcgi_split_path_info ^(.+\.php)(.*)$;
        fastcgi_pass   pma;
        fastcgi_index  index.php;
        
        include fastcgi_params;
        fastcgi_param  HTTPS on;
        fastcgi_param SCRIPT_FILENAME $request_filename;
        fastcgi_param  HTTP_MOD_REWRITE On;
        
        fastcgi_connect_timeout 300s;
        fastcgi_send_timeout 300s;
        fastcgi_read_timeout 12000s;
        fastcgi_ignore_client_abort off;
        fastcgi_buffer_size 16k;
        fastcgi_buffers 4 16k;
        }
}
