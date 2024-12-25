#include<stdio.h>
int main()
{
    int maxSize = 100;
    int n,i,j,temp,currentLength = 0,uoc,sum,count,array[maxSize],X,check;
    while(1)
    {
        printf("\n=================MENU==================\n");
        printf("1. Nhap so phan tu va gia tri cho mang.\n");
        printf("2. In ra gia tri cac phan tu trong mang.\n");
        printf("3. Đem so luong cac so hoan hao co trong mang.\n");
        printf("4. Tim gia tri lon thu 2 trong mang.\n");
        printf("5. Them mot phan tu vao mang.\n");
        printf("6. Xoa phan tu tai mot vi tri cu the.\n");
        printf("7. Sap xep mang theo thu tu tang dan.\n");
        printf("8. tim kiem xem phan tu do co ton tai trong mang hay khong.\n");
        printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan đung truoc, so le dung sau.\n");
        printf("10. dao nguoc thu tu cua cac phan tu co trong mang.\n");
        printf("======================================\n");
        int choice;
        printf("Moi ban nhap chuc nang : ");
        scanf("%d",&choice);
    switch (choice) {
    case 1:
        int n;
        printf("Moi ban nhap so luong phan tu cho mang : ");
        scanf("%d",&n);
        if(n<=0 || n> maxSize)
        {
        printf("n ko hop le, vui long nhap tu 1 - %d \n", maxSize);
        break;
        }
        for (int i = 0; i < n; ++i) 
        {
        printf("Nhap array[%d] = ",i);
        scanf("%d",array+i);
        }
        currentLength = n;
        break;
    case 2:
        if(currentLength == 0)
        {
            printf("Mang chua co phan tu nao\n");
        } 
        else
        {
            printf("Danh sach cac phan tu trong mang la : \n");
            for (int i = 0; i < currentLength; ++i) 
        {
            printf("array[%d] : %d \n",i,array[i]);
        }
        }
        printf("\n");
        break;
    case 3:
        int count = 0;
        for ( int i = 0; i < currentLength; i++)
        {
            sum = 0;
            for( uoc = 1 ; uoc <= array[i]/2;uoc++)
            {
                if(array[i] % uoc == 0)
                {
                    sum = sum + uoc;
                }
                if ( sum == array[i])
            {
                count++;
            }
            }
        }
        printf("so luong cac so hoan hao trong mang la : %d\n",count);
        break;
    case4:
        break;

    case 5:
        int addIndex, newValue;
        printf("Moi ban nhap gia tri can them : ");
        scanf("%d",&newValue);
        printf("Moi ban nhap vi tri can them : ");
        scanf("%d",&addIndex);
        if(addIndex <0)
        {
        addIndex = 0;
        }
            else if(addIndex > currentLength)
        {
            addIndex = currentLength;
        }
            for(int i = currentLength; i> addIndex; i--)
        {
            array[i] = array[i-1];
        }
        array[addIndex] = newValue ;
        currentLength++;
        break;
    case 6:
        int deleteIndex;
        printf("Moi ban nhap vi tri can xoa : ");
        scanf("%d",&deleteIndex);
        if(deleteIndex <0 ||deleteIndex >= currentLength )
        {
            printf("Vi tri ko hop le \n");
            break;
        }
            for (int i = deleteIndex; i < currentLength -1 ; ++i) 
        {
            array[i] = array[i+1];
        }
        currentLength--;
        break;
    case 7:
        for (int i = 1 ; i < n ; i++)
        {
            int key = array[i];
            int j = i - 1;
            while ( j >= 0 && array[j] > key)
        {
            array[j+1] = array[j];
            j = j -1;
        }
        array[j+1]= key;
        }
        break;
    case 8:
        int check = 1;
        printf("nhap vao so ban muon tim :");
        scanf("%d",&X);
        for ( int i = 0 ; i < currentLength ; i++)
        {
            if ( array[i]== X)
        {
            printf("ton tai so %d tai vi tri %d",X,i);
            check = 0;
            break;
        }
        }
        if(check)
        {
        printf(" khong ton tai so %d trong mang",X);
        }
        break;
    case 9:
        for ( int i = 0;  i < currentLength; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("array[%d] : %d",i,array[i]);
            }
        }
                for ( int i = 0;  i < currentLength; i++)
        {
            if (array[i] % 2 != 0)
            {
                printf("array[%d] : %d",i,array[i]);
            }
        }
        break;
    case 10: 
    int k = currentLength;
        for ( int i = 0; i != k ; i++ && k--)
        {
            temp = array[i];
            array[i] = k ;
            k = temp;
        }
        break;
    default:
        printf("Lua chon ko hop le, vui long nhap lai : \n");
        break;
}
}
}