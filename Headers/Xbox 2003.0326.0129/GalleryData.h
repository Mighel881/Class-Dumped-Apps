//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHFetchResult;

@interface GalleryData : NSObject
{
    NSArray *_data;
    PHFetchResult *_fetchResults;
}

@property(retain, nonatomic) PHFetchResult *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)arrayWithFetchResults:(id)arg1 selectedImagesIds:(id)arg2;
- (id)initWithFetchResults:(id)arg1 selectedImagesIds:(id)arg2;

@end

