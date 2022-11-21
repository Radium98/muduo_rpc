#pragma once

#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

//  mprpc框架的初始化类
class MprpcApplication
{
public:
    static void Init(int argc, char **argv);
    static MprpcApplication& GetInstance();
    static Mprpcconfig& GetConfig();
private:
    static Mprpcconfig m_config;

    MprpcApplication(){}
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication&&) = delete;
};