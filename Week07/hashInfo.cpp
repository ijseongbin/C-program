#include <iostream>
#include <random>
#include <unordered_set>

void getInfo(const std::unordered_set<int>& hash) {

    std::cout << "hash.bucket_count(): " << hash.bucket_count() << std::endl;
    std::cout << "hash.load_factor(): " << hash.load_factor() << std::endl;

}

void fillHash(std::unordered_set<int>& h, int n) {

    std::random_device seed;
    std::mt19937 engine(seed());
    std::uniform_int_distribution<> uniformDist(0, 1000);

    for (int i = 1; i <= n; ++i) {
        h.insert(uniformDist(engine));
    }

}

int main() {

    std::cout << std::endl;

    std::unordered_set<int> hash;
    std::cout << "hash.max_load_factor(): " << hash.max_load_factor() << std::endl;

    std::cout << std::endl;

    getInfo(hash);

    std::cout << std::endl;

    hash.insert(500);
    std::cout << "hash.bucket(500): " << hash.bucket(500) << std::endl;

    std::cout << std::endl;

    fillHash(hash, 100);
    getInfo(hash);

    std::cout << std::endl;
    std::cout << "hash.rehash(500): " << std::endl;
    hash.rehash(500);

    std::cout << std::endl;

    getInfo(hash);

    std::cout << std::endl;
    std::cout << "hash.bucket(500): " << hash.bucket(500) << std::endl;

    std::cout << std::endl;

}
