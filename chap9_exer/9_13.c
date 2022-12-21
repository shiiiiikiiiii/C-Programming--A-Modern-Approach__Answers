int evaluate_position(char board[8][8]){
    int blackSum = 0, whiteSum = 0;

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            switch (board[i][j]){
            case 'K':
                whiteSum += 0;
                break;
            case 'Q':
                whiteSum += 9;
                break;
            case 'R':
                whiteSum += 5;
                break;
            case 'B': case 'N':
                whiteSum += 3;
                break;
            case 'P':
                whiteSum += 1;
                break;

            case 'k':
                blackSum += 0;
                break;
            case 'q':
                blackSum += 9;
                break;
            case 'r':
                blackSum += 5;
                break;
            case 'b': case 'n':
                blackSum += 3;
                break;
            case 'p':
                blackSum += 1;
                break;
            
            default:
                break;
            }
        }
    }

    return (whiteSum - blackSum);
}