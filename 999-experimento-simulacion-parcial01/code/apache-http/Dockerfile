FROM httpd:2.4

# Copy your custom CGI config
COPY ./config/httpd-cgi.conf /usr/local/apache2/conf/extra/httpd-cgi.conf

# Include it in the main httpd.conf
RUN echo 'Include conf/extra/httpd-cgi.conf' >> /usr/local/apache2/conf/httpd.conf

# Disable or comment out the default ScriptAlias line
RUN sed -i 's|^ScriptAlias /cgi-bin/.*|# ScriptAlias disabled|' /usr/local/apache2/conf/httpd.conf
