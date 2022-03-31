### Installing LEMP for RedHat 8

*   Basic setup
*   Nginx latest stable + brotli module compile
*   Mysql 8 or MariaDB
*   PHP - multiple versions simultaneously
*   Letsencrypt certs for subdomains
*   Backup to google drive script 
*   Prestashop config templates

#### 2do: 

*   template sshd config: cyphers, sftp
*   firewalld settings
*   sftp users: group
*   role for unfold a website from zip, import db
*   manage DNS with cloudflare (certbot-cloudflare [https://certbot-dns-cloudflare.readthedocs.io/en/stable)](https://certbot-dns-cloudflare.readthedocs.io/en/stable))
*   add catch - try blocks to handle errors (php install for instance) 
*   tune php, mysql configs based on server hardware
*   add indepotent checks for certbot command