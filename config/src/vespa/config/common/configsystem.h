// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#pragma once

namespace config {

class ConfigSystem {
public:
    bool isUp() const;
private:
    bool isConfigProxyRunning() const;
};

}

