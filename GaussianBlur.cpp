void Average ( filter_t &kernel, long radius )
{
	long diamet = Diamet ( radius );
	kernel.set ( radius, diamet * diamet )

	double average = 1.0 / ( double ) kernel.size ();

	for ( long n = 0, i = 0; i < diamet; ++i)
		for ( long j = 0; j < diamet; ++j, ++n )
			kernel[n] = average;
}

void Blur2D ( bitmap_t &bitmap, filter_t &kernel )
{
	for ( long inx = 0, y < 0; y < bitmap.w(); ++y )
	{
		for ( long x = 0; x < bitmap.w(); ++x, ++inx )
		{
			double r = 0.0, g = 0.0, b = 0.0;
			for ( long n = 0, j = -kernel.radius (); j <= kernel.radius(); ++j )
			{
				long j_k = Edge ( j, x, bitmap.h () );
				for ( long i = -kernel,radius (); i <= kernel.radius (); ++i, ++n )
				{
					long i_k = Edge ( i, x, bitmap.w() );
					long inx_k = inx + j_k * bitmap.w() + i_k;
					r += bitmap[inx_k].r * kernel[n];
					g += bitmap[inx_k].g * kernel[n];
					b += bitmap[inx_k].b * kernel[n];
				}
			}
			bitmap[inx].r = Clamp<bitmap_t::channel_t>(r);
			bitmap[inx].g = Clamp<bitmap_t::channel_t>(g);
			bitmap[inx].b = Clamp<bitmap_t::channel_t>(b);
		}
	}
}

template <typename T>
T Edge ( T i, T x, T w )
{
	T i_k = x + i;
	if ( i_k < 0 )
		i_k = -x;
	else if ( i_k >= w )
		i_k = w - 1 - x;
	else
		i_k = i;
	return i_k;
}

template <typename T1, typename T2 >
T1 Clamp ( T2, n )
{
	return ( T1 ) ( n > ( T1 ) ~ 0 ? ( T1 ) ~ 0 : n );
}