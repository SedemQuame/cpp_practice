Lab Question: Write a C++ program that encrypts and decrypts messages using a simple substitution cipher. The program should prompt the user to enter a message, and then encrypt it using the following cipher:

Plain text: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
Cipher text: E K M F L G D Q V Z N T O W Y H X U S P A B C R J

For example, if the user enters the message "HELLO WORLD", the encrypted message should be "DROOA TAHRS". The program should also be able to decrypt the message back to its original form.

To implement the program, you can use an array to store the plain text and cipher text, and use a loop to iterate through each character in the input message. For each character, you can find its corresponding cipher text character in the array and replace the original character with it. To decrypt the message, you can reverse the substitution process by finding the plain text character that corresponds to each cipher text character.

You can also add some additional features to the program, such as allowing the user to choose a different substitution cipher, or enabling the program to encrypt and decrypt files instead of just individual messages.
