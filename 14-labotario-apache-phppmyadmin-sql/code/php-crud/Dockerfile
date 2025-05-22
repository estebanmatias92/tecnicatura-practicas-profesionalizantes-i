# Etapa base: extensiones y configuración comunes
FROM php:8.2-apache AS base

RUN apt-get update \
  && docker-php-ext-install mysqli pdo pdo_mysql \
  && a2enmod rewrite

COPY ./apache-http/config/httpd.conf /etc/apache2/sites-enabled/000-default.conf


# Etapa de desarrollo
FROM base AS dev
COPY public/ /var/www/html/


# Etapa de producción
FROM base AS prod
COPY public/ /var/www/html/
