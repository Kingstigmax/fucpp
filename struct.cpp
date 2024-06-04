#include <iostream>
#include <vector>


// struct Customer 
// {
//     int identificationNumber {};
//     std::string customerName {};
//     std::string email {};
// };


// int main() 
// {

//     Customer customer1 {};
//     std::cin >> customer1.customerName >> customer1.identificationNumber >> customer1.email;

//     std::cout << customer1.identificationNumber << std::endl;

//     return 0;
// }


struct Movie
{
    std::string title;
    int releaseYear {0};
    bool isPopular;
};


int main() 
{

    std::vector<Movie> movies;
    movies.push_back({"movie", 1965});
    movies.push_back({"movie2", 1977});

    for (const auto& movie : movies) 
    {
        std::cout << movie.title << '\n';
        std::cout << movie.releaseYear << '\n';
    }

    // Movie movie {"Termin", 1965, true};

    // auto [title, releaseYear, isPopular] {movie};

    // std::cout << title << std::endl;
    // std::cout << releaseYear << std::endl;
    // std::cout << isPopular << std::endl;

    return 0;
}