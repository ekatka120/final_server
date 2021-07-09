# include <iostream>
# include "Exceptions.hpp"
# include "RequestHandler.hpp"
# include <map>
# include <unistd.h>

class RequestHandler;

class Cgi: public RequestHandler
{
    public:
        void cgi_start(std::string body);
        void cgi_set_envs();
        void cgi_usage(std::string body);
        void cgi_usage_2(char **filename);
        void cgi_response();
        void map_envs_to_char_array();
        std::string read_from_file(int fd);
    private:
        std::map<std::string, std::string> _map_envp;
        char **_env;
};

class RequestHandler;