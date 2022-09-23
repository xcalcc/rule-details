int func ( char grade )
{
    // Switch statement have at least two switch-clauses
    switch( grade ) 
    {        
        case 'A':
            printf( "great" );
            break;
        case 'B':
            printf( "good" );
            break;
        default:
            printf( "not so well" );
            break;
    }
    return 0;
}