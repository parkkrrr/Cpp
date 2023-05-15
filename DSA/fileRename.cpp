#include <iostream>
#include <filesystem>

void renameFile(const std::string& filePath, const std::string& newPrefix) {
    std::filesystem::path path(filePath);
    std::filesystem::path parentPath = path.parent_path();
    std::filesystem::path newFilePath = parentPath / (newPrefix + path.filename().string().substr(6));

    if (std::filesystem::exists(newFilePath)) {
        std::cout << "A file with the new name already exists. Rename operation aborted." << std::endl;
        return;
    }

    std::filesystem::rename(path, newFilePath);
    std::cout << "File renamed successfully." << std::endl;
}

int main() {
    std::string filePath;
    std::cout << "Enter the file path: ";
    std::getline(std::cin, filePath);

    std::string newPrefix;
    std::cout << "Enter the new prefix: ";
    std::getline(std::cin, newPrefix);

    renameFile(filePath, newPrefix);

    return 0;
}
