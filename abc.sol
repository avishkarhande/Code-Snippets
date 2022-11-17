pragma solidity 0.6.6;
import "hardhat/console.sol";

contract StudentData {
    address public owner;
    struct student {
        string name;
        string course;
        uint256 marks;
        bool isExist;
    }

    student[] data;
    constructor () public {
        owner = msg.sender;
    }

    modifier onlyOwner(){
        require(owner == msg.sender);
    }
    fun
}
