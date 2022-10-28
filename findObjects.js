    findObjects(valueKeyList = []) {
        let valueKeysToFind = {};
        let foundKeys = []
        let foundKeyList = {};
        valueKeyList.forEach(ele => {
            valueKeysToFind[ele] = true;
        })
        findKey(this.json, valueKeysToFind, foundKeyList);
        foundKeys = convertObjectKeysToArray(foundKeyList)
        let keysNotFound = differentiateArray(valueKeyList, foundKeys)
        return {
            "keysFound": foundKeys,
            "keysNotFound": keysNotFound
        }
    }
