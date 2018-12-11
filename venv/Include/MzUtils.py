# coding=utf-8

import os
import json


def fileName(file_dir):
    for root, dirs, files in os.walk(file_dir):
        for file in files:
            yield file


def genjson(paths):
    d = [{"imageSrc": path} for path in paths]
    with open("MeiZi.json", "w+") as f:
        json.dump(d, f)


if __name__ == "__main__":
    genjson(fileName('MeiZi'))
