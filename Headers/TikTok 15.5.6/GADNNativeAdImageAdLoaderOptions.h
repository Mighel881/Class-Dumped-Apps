//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNAdLoaderOptions.h"

@interface GADNNativeAdImageAdLoaderOptions : GADNAdLoaderOptions
{
    _Bool _disableImageLoading;
    _Bool _shouldRequestMultipleImages;
    long long _preferredImageOrientation;
}

@property(nonatomic) long long preferredImageOrientation; // @synthesize preferredImageOrientation=_preferredImageOrientation;
@property(nonatomic) _Bool shouldRequestMultipleImages; // @synthesize shouldRequestMultipleImages=_shouldRequestMultipleImages;
@property(nonatomic) _Bool disableImageLoading; // @synthesize disableImageLoading=_disableImageLoading;
- (id)requestParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

