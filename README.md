START

FOR number FROM 2 TO 100 DO
    SET isPrime TO true

    FOR i FROM 2 TO square root of number DO
        IF number MOD i == 0 THEN
            SET isPrime TO false
            BREAK
        END IF
    END FOR

    IF isPrime == true THEN
        PRINT number
    END IF
END FOR

END


