//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSData, NSError, NSString, UIImage;

@interface AWEIMPhotoAlbumAssetLoadStateObj : NSObject
{
    _Bool _finish;
    NSString *_identifier;
    NSError *_error;
    NSData *_imageData;
    UIImage *_image;
    AVAsset *_videoAsset;
    UIImage *_videoCoverImage;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *videoCoverImage; // @synthesize videoCoverImage=_videoCoverImage;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
