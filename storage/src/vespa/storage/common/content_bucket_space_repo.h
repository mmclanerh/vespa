// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#pragma once

#include "content_bucket_space.h"
#include <vespa/document/bucket/bucketspace.h>
#include <unordered_map>

namespace storage {

/**
 * Class managing the set of bucket spaces (with associated bucket databases) on a content node.
 */
class ContentBucketSpaceRepo {
private:
    using BucketSpaceMap = std::unordered_map<document::BucketSpace, ContentBucketSpace::UP, document::BucketSpace::hash>;

    BucketSpaceMap _map;

public:
    ContentBucketSpaceRepo();
    ContentBucketSpace &get(document::BucketSpace bucketSpace) const;
};

}
