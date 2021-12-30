Installing LEMP for Centos 8

Nginx latest + brotli
Mysql 8
PHP - multiple versions simultaneously

2do:
    admin user sudo 
    rearrange restart services - make handlers
    create nologin user for site
    sftp for user
    sendmail enable
    nginx server config
      remove def config
    logrotate
    mysql config
      dnf --enablerepo=epel-testing install python3-mysqlclient
    mysql database create&import
    php config
    unpack files
    backup, msmtp

    phpmyadmin
      create nologin user
      install config

      chown dirs
      -/var/lib/phpMyAdmin/{upload,wsdlcache}
      -/usr/share/phpMyAdmin

Check services: playbook that check services on the host after service 