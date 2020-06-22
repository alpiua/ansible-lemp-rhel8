add_header Cache-Control public;
add_header Strict-Transport-Security "max-age=63072000; includeSubdomains; preload"; # https://hstspreload.org
add_header X-XSS-Protection "1; mode=block";
add_header X-Frame-Options "SAMEORIGIN";
add_header Referrer-Policy "no-referrer-when-downgrade";
add_header X-Content-Type-Options nosniff;

#add_header Content-Security-Policy "default-src 'self';";
#add_header Access-Control-Allow-Origin *;
#add_header X-Robots-Tag "noindex, nofollow, nosnippet, noarchive"; # Prevent search engines from indexing development server
