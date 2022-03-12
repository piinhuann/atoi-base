#include<stdio.h>
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(5, "0123456789"); //5
	ft_putnbr_base(11, "01"); //1011
	ft_putnbr_base(11, "ab"); //babb
	ft_putnbr_base(1952, "0123456789ABCDEF"); //7A0 (7(10)0)
	ft_putnbr_base(692, "poneyvif"); //oniy (1264)
	ft_putnbr_base(113, "helo"); //eohe (1301)
	ft_putnbr_base(23, "helo");  //eeo(113)
	ft_putnbr_base(-5, "0123456789"); //-5
	ft_putnbr_base(-11, "01"); //-1011
	ft_putnbr_base(-11, "ab"); //-babb
	ft_putnbr_base(-1952, "0123456789ABCDEF"); //-7A0 (7(10)0)
	ft_putnbr_base(-692, "poneyvif"); //-oniy (1264)
	ft_putnbr_base(-113, "helo"); //-eohe (1301)
	ft_putnbr_base(-23, "helo");  //-eeo(113)
	ft_putnbr_base(500, "dum+bas"); //
	ft_putnbr_base(500, "fishYou-"); //
	ft_putnbr_base(500, "hhabcd"); //
	ft_putnbr_base(500, ""); //
	ft_putnbr_base(500, "k"); //
	ft_putnbr_base(-500, "yYtTrRWw"); //-wWr (764)
}
