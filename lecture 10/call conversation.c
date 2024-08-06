#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");
	printf("enter your choice:");
	scanf("%d",&x);
	switch (x)
	{
		case 1:
		printf("press 1 for internet recharge\n");
		printf("press 2 for top-up recharge\n");
		printf("press 3 for special recharge\n");
		printf("enter your choice:");
		scanf("%d",&y);
		switch(y)
		{
			case 1:
				printf("you have sucessfully done a internet recharge");
			break;
			case 2:
				printf("you have sucessfully done a top-up recharge");
			break;
			case 3:
				printf("you have sucessfully done a special recharge");
			break;	
		}
		break;
		case 2:
			printf("internet recharge ke liye 1 dabaye\n");
			printf("top-up recharge ke liye 2 dabaye\n");
			printf("special recharge ke liye 3 dabaye\n");
			printf("enter your choice: ");
			scanf("%d",&y);
			switch(y)
			{
				case 1:
					printf("apne safaltapurvak internet recharge kar liya hai");
				break;
				case 2:
					printf("apne safaltapurvak top-up recharge kar liya hai");
				break;
				case 3:
					printf("apne safaltapurvak special recharge kar liya hai");
					break;
			}
			break;
		case 3:
			printf("internet recharge mate 1 dabavo\n");
			printf("top-up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n");
			printf("enter your choice:");
			scanf("%d",&y);
			switch (y)
			{
				case 1:
					printf("tame safaltapurvak intenet recharge karyu chhe");
				break;
				case 2:
					printf("tame safaltapurvak top-up recharge karyu chhe");
				break;
				case 3:
					printf("tame safaltapurvak special recharge karyu chhe");
				break;
			}
	}
}
