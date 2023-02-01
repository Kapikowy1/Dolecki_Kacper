class ErrorHandler {
 public:
  /**
  @brief Konstruktor klasy ErrorHandler
  */
  ErrorHandler() {}

  /**
  @brief Funkcja obsługująca błędy wejścia
  Funkcja wyświetla na standardowe wyjście informację o błędnym wejściu.
  */
  void handleInputError() const {
    std::cerr << "Bledne dane wejsciowe. Sprobuj ponownie." << std::endl;
  }

  /**
  @brief Funkcja obsługująca błędy związane z końcem przedziału
  Funkcja wyświetla na standardowe wyjście informację o błędzie związanym
  z końcem przedziału.
  */
  void handleEndError() const {
    std::cerr << "Koniec przedzialu musi byc wiekszy od poczatku."
              << std::endl;
  }

  /**
  @brief Funkcja obsługująca błędy związane z liczbą prostokątów
  Funkcja wyświetla na standardowe wyjście informację o błędzie związanym
  z liczbą prostokątów.
  */
  void handleNumberError() const {
    std::cerr << "Liczba prostokatow musi byc wieksza od zera." << std::endl;
  }
};
