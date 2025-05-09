# Switch statement for area code

```C

int area_code <value>;

switch (area_code) {
    case 404: case 470: case 770: case 678:
        printf("Atlanta");
        break;

    case 478:
        printf("Macon");
        break;

    case 706: case 762:
        printf("Columbus");
        break;
    
    case 229:
        printf("Albany");
        break;

    case 912:
        printf("Savannah");
        break;
    
    default:
        printf("Area code not recognized");
}
```