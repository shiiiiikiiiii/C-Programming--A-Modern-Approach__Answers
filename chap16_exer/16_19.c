struct pinball_machine{
    char name[41];
    int year;
    enum type{EM, SS};
    int players;
};