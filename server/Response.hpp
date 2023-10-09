# pragma once

#include <string>
#include <map>
#include <sys/socket.h>

class Response {
public:
    Response();
    ~Response();

    Response& setStatus(int statusCode);

    Response& setBody(const std::string& responseBody);

    Response& setContentType(const std::string& contentType);

    void sendResponse(const int) const;
    std::string getStatusMessage(int statusCode) const;

private:
    int statusCode;
    std::string responseBody;
    std::string contentType;
};

const std::string getMimeType(const std::string& fileExtension);
